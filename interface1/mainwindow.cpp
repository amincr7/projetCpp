#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"beneficier.h"
#include<QObject>
#include<QString>
#include<QMessageBox>
#include <QPixmap>
#include<QPrinter>
#include<QPainter>
#include<QPrintDialog>
#include <QPrintPreviewDialog>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QUrl>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    beneficier b2;
    ui->setupUi(this);
    imageLabel = new QLabel(this);
    connect(ui->pb_InsertImage_equi_2, &QPushButton::clicked, this, &MainWindow::on_pb_InsertImage_equi_2_clicked);
ui->affichage->setModel(b2.afficher());
}

MainWindow::~MainWindow()
{
    delete ui;
}
int MainWindow::stat_beneficier_part2()
{
    QSqlQuery query;
    int count=0 ;
    QSqlQuery requete("select * from SDF where AGE >18") ;
    while(requete.next())
    {
            count++ ;
    }
    return count ;
}

int MainWindow::stat_beneficier_part3()
{
    QSqlQuery query;
    int count=0 ;
    QSqlQuery requete("select * from SDF where AGE  <18") ;
    while(requete.next())
    {
            count++ ;
    }
    return count ;
}
void MainWindow::paintEvent(QPaintEvent *)
{
    int b=stat_beneficier_part2(); //count occurences param1
    int c=stat_beneficier_part3();//count occurences param2

    float s2= b*100 ;
    float s3=c*100;
    float nb = b+c ; //number of all occurences
    float q2 ;
    q2 = s2/nb ; //param1 %
    float q3;
    q3=s3/nb; //param2 %
    float y  ;
    y = (q2*360)/100 ; //param1 on pie
    float m; //param2 on pie
    m= (q3*360)/100;

    QPainter painter(this);
    QRectF size=QRectF(350,150,this->width()-700,this->width()-700); //canvas geometry config

    painter.setBrush(Qt::blue); //color1

    painter.drawPie(size,0,16*y); //draw pie slice param1 from origin
    painter.setBrush(Qt::red); //color2
    painter.drawPie(size,16*y,16*m); //draw pie slice param2 starting where param1 ends
    ui->BENEFICIAIRE_label_5->setText("-18");
    ui->BENEFICIAIRE_label_7->setText("+18");
    ui->BENEFICIAIRE_label_11->setNum(q2);
    ui->BENEFICIAIRE_label_8->setNum(q3);
}

void MainWindow::uploadImage(const QString &filename, const QString &saveFileName)
{
    QImage image(filename);
    if (image.isNull()) {
        QMessageBox::information(this, tr("ERROR"), QString(tr("Cannot load %1.")).arg(filename));
        return;
    }
    QPixmap pixmap = QPixmap::fromImage(image);
    ui->pb_InsertImage_equi_2->setIcon(QIcon(pixmap));
    ui->pb_InsertImage_equi_2->setIconSize(pixmap.size());

    if (!saveFileName.isEmpty()) {
        if (!pixmap.save(saveFileName)) {
            QMessageBox::information(this, tr("ERROR"), QString(tr("Failed to save %1.")).arg(saveFileName));
        }
    }


}
void MainWindow::on_pb_InsertImage_equi_2_clicked()
{
    QString filename = QFileDialog::getOpenFileName(this,tr("choose"),"",tr(""));
    if(QString::compare(filename,QString())!=0)
    {
        QImage image;
        bool valid=image.load(filename);
        if(valid)
        {
            ui->la_img_e->setText(filename);
            image=image.scaledToWidth(ui->la_img_profile->width(),Qt::SmoothTransformation);
            ui->la_img_profile->setPixmap(QPixmap::fromImage(image));
        }
        else
        {
            QMessageBox::information(this, tr("ERROR"), QString(tr("Not Valid!")));
        }
    }
}


void MainWindow::on_pb_supprimer_clicked()
{
int id=ui->sup_id->text().toInt();
beneficier b;
bool test = b.supprimer( id);
if(test)
{
    QMessageBox::information(nullptr,QObject::tr("OK"),QObject::tr("supression effectuée\n""click cancel to exit"),QMessageBox::Cancel);

}
else
       QMessageBox::critical(nullptr,QObject::tr("NOT OK"),QObject::tr("suppression non effectuée\n""click cancel to exit"),QMessageBox::Cancel);
}

void MainWindow::on_pb_ajouter_clicked()
{
    int id=ui->le_id->text().toInt();
    QString nom=ui->le_nom->text();
    QString prenom=ui->le_prenom->text();
    int age=ui->le_age->text().toInt();
    QString sexe=ui->le_sexe->text();
    QString date_arriv=ui->la_date->text();
    QString img=ui->la_img_e->text();
    if((id<=0 && id>=99999999)){QMessageBox::critical(nullptr,QObject::tr("not ok"),QObject::tr("id non verifié\n""click cancel to exit"),QMessageBox::Cancel);}
    if((age<=0)&&(age>=150)){QMessageBox::critical(nullptr,QObject::tr("not ok"),QObject::tr("age non verifié\n""click cancel to exit"),QMessageBox::Cancel);}
    if((sexe!="homme")&&(sexe!="femme")){QMessageBox::critical(nullptr,QObject::tr("not ok"),QObject::tr("sexe non verifié\n""click cancel to exit"),QMessageBox::Cancel);}

    beneficier b1(id,nom,prenom,age,sexe,date_arriv,img);
        bool test=b1.ajouter();
        if(test)

            QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("ajout effectué\n""click cancel to exit"),QMessageBox::Cancel);

        else
            QMessageBox::critical(nullptr,QObject::tr("not ok"),QObject::tr("ajout non effectué\n""click cancel to exit"),QMessageBox::Cancel);
        }






void MainWindow::on_pb_modifier_clicked()
{
    //QMessageBox msgbox;
    int id=ui->sup_id->text().toInt();
    QString nom=ui->sup_nom->text();
    QString prenom=ui->sup_prenom->text();
    int age=ui->sup_age->text().toInt();
    QString sexe=ui->sup_sexe->text();
    QString date_arriv=ui->sup_date->text();
    QString img=ui->la_img_e->text();
    beneficier b3(id,nom,prenom,age,sexe,date_arriv,img);
    b3.setid(ui->sup_id->text().toInt());
    if(b3.recherche(b3.getid()))
    {
        bool test=b3.modifier(id);
        if(test)
        { QMessageBox::information(nullptr,QObject::tr("ok"),QObject::tr("modification effectué\n""click cancel to exit"),QMessageBox::Cancel);}
    }else {
        QMessageBox::critical(nullptr,QObject::tr("not ok"),QObject::tr("modification non effectué\n""click cancel to exit"),QMessageBox::Cancel);

}
}



void MainWindow::on_RechercherSDF_clicked()
{
    beneficier b;
    QString nom=ui->recherche->text();
    ui->affichage->setModel(b.afficherRSE(nom));
}

void MainWindow::on_tri_clicked()
{ beneficier b10;
   if(ui->radioButton)
   {
       ui->affichage->setModel(b10.tri());
   }

}

void MainWindow::on_pdf_9_clicked()
{
    QPrinter printer(QPrinter::HighResolution);
        printer.setOutputFormat(QPrinter::PdfFormat);
        printer.setOutputFileName("C:/Users/AmineBK/pdf/sdf.pdf");

        QPainter painter(&printer);
        painter.drawPixmap(QRect(100,200,2500,2500),QPixmap("C:/Users/AmineBK/pdf/logo.png"));
        int i = 4000;
        painter.setPen(Qt::blue);
        painter.setFont(QFont("Arial", 40));
        painter.drawText(3050,1400,"Liste des beneficiers");
        painter.setPen(Qt::black);
        painter.setFont(QFont("Arial", 20));
        painter.drawRect(2700,200,6500,2000);
        painter.drawRect(0,3000,9600,500);
        painter.setFont(QFont("Arial",10));
        painter.drawText(350,3300,"identifiant");
        painter.drawText(1500,3300,"Date naissance");
        painter.drawText(3800,3300,"Prenom");
        painter.drawText(6000,3300,"Nom");
        painter.drawText(7300,3300,"Age");
         painter.drawText(9000,3300,"Sexe");

       /* QString date= currDate() ;
        painter.drawText(8500,30,date);*/

        QSqlQuery query;
        query.prepare("select * from SDF  ");
        query.exec();
        while (query.next())
        {
            painter.drawText(200,i,query.value(0).toString());
            painter.drawText(1900,i,query.value(1).toString());
            painter.drawText(3500,i,query.value(2).toString());
            painter.drawText(5900,i,query.value(3).toString());
            painter.drawText(7300,i,query.value(4).toString());
            painter.drawText(9000,i,query.value(5).toString());

            i = i + 500;
        }

        int reponse = QMessageBox::question(this, "PDF généré", "Afficher le PDF ?", QMessageBox::Yes |  QMessageBox::No);
        if (reponse == QMessageBox::Yes)
        {
            QDesktopServices::openUrl(QUrl::fromLocalFile("C:/Users/AmineBK/pdf/sdf.pdf"));
            painter.end();
        }
        if (reponse == QMessageBox::No)
        {
            painter.end();
        }
}

void MainWindow::on_Actualiser_clicked()
{
    beneficier b5;
    ui->affichage->setModel(b5.afficher());
}



void MainWindow::on_telecharger_clicked()
{ beneficier b;
    QByteArray dataByte;
    //QModelIndex index = ui->affichage->selectionModel()->currentIndex();
    int id=ui->sup_id->text().toInt();
    b.setid(ui->sup_id->text().toInt());
    if(b.recherche(b.getid())){
           QString imageFile = QFileDialog::getOpenFileName(0, "Select Image", "C:/Users/AmineBK/pdf", "Image Files (*.jpg *.jpeg *.png)");

           QFileInfo info(imageFile);
           QString filepath = info.absoluteFilePath();
          // b.updateImage(id, filepath);
           QSqlQuery query;
                     query.prepare("INSERT INTO SDF (IMAGE) "
                                   "VALUES (:LOAD_FILE(imageFile))");
                     query.bindValue(":LOAD_FILE(imageFile)",  imageFile);

           query.bindValue(":id", id);
           query.bindValue(":image", dataByte, QSql::In | QSql::Binary);

       }
       else {
           QMessageBox::information(this, "Upload", "Please select an SDF before uploading");
       }
}

void MainWindow::on_pb_historique_clicked()
{
    QString fileName = "history.txt";
     QDesktopServices::openUrl(QUrl::fromLocalFile(fileName));
}


