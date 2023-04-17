#include "beneficier.h"
#include<QtDebug>
#include<QtSql/QSqlQuery>
#include<QMessageBox>
beneficier::beneficier()
{
id=0; nom=" ";prenom=" ";age=0;date_arriv="";sexe="",img="";
}
beneficier::beneficier(int id,QString nom,QString prenom,int age,QString sexe,QString date_arriv, QString img)
{
    this->id=id;
    this->nom=nom;this->prenom=prenom;
    this->age=age;this->sexe=sexe;
    this->date_arriv=date_arriv;
    this->img=img;
}
//int beneficier::getid(){return id;}
//QString beneficier::getnom(){return nom;}
//QString beneficier::getprenom(){return prenom;}
//int beneficier::getage(){return age;}
//QString beneficier::getsexe(){return sexe;}
//QString beneficier::getdate_arriv(){return date_arriv;}
//void beneficier::setid(int id){this->id=id;}
//void beneficier::setnom(QString nom){this->nom=nom;}
//void beneficier::setprenom(QString prenom){this->prenom=prenom;}
//void beneficier::setage(int age){this->age=age;}
//void beneficier::setsexe(QString sexe){this->sexe=sexe;}
//void beneficier::setdate_arriv(QString date_arriv){this->date_arriv=date_arriv;}

bool beneficier::ajouter()
{
    QSqlQuery query;
    QString res=QString::number(id);
    QString r=QString::number(age);
    query.prepare("insert into SDF(id,nom,prenom,age,sexe,date_arriv,image)""values(:id,:nom,:prenom,:age,:sexe,:date_arriv,:img)");
    query.bindValue(":id",res);
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":age",r);
    query.bindValue(":sexe",sexe);
    query.bindValue(":date_arriv",date_arriv);
    query.bindValue(":img",img);
    return query.exec();



}
bool beneficier::existeE(int id)
{
    QSqlQuery query;
        query.prepare("SELECT ID FROM SDF WHERE ID = :id");
        query.bindValue(":id", id);
        if (query.exec() && query.next()) {
            return true;
        } else {
            return false;
        }
}
bool beneficier::supprimer(int id)
{  if (existeE(id)) {
        QSqlQuery query;
        query.prepare("SELECT * FROM SDF WHERE ID = :id");
        query.bindValue(":id", id);
        if (query.exec() && query.next()) {
            QString nom = query.value("NOM").toString();
            QString prenom = query.value("PRENOM").toString();
            int age = query.value("AGE").toInt();
            QString sexe = query.value("SEXE").toString();
            QString date_arriv = query.value("DATE_ARRIV").toString();


            QString message = QDateTime::currentDateTime().toString("yyyy-MM-dd hh:mm:ss") + " - ";
            message += "ID: " + QString("%1").arg(id, 5, 10, QChar('0')) + " | ";
            message += "NOM: " + nom.leftJustified(30, ' ') + " | ";
            message += "PRENOM: " + prenom.leftJustified(30, ' ') + " | ";
            message += "AGE: " + QString("%1").arg(age, 5, 10, QChar('0')) + " | ";
            message += "SEXE: " + sexe.leftJustified(50, ' ') + " | ";
            message += "DATE_ARRIV: " + date_arriv.leftJustified(10, ' ') + " | ";


            bool ok;
            QWidget* parentWidget = QApplication::activeWindow();
            int id = QInputDialog::getInt(parentWidget, "Confirmation", "Entrez votre id:", 0,0,100,1, &ok);
            if (ok ) {
                message += " | " + QString::number(id);
            }

            QFile file("history.txt");
            if (file.open(QIODevice::Append | QIODevice::Text)) {
                QTextStream out(&file);
                out << message << "\n";
                file.close();
            }
        }}
    QSqlQuery query;
    QString res=QString::number(id);
    query.prepare("delete from SDF where ID= :id");
    query.bindValue(":id",res);
    return query.exec();
}
QSqlQueryModel * beneficier::afficher()
{
    QSqlQueryModel * model=new QSqlQueryModel();
    model->setQuery("SELECT * FROM SDF");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_arriv"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
     model->setHeaderData(6, Qt::Horizontal, QObject::tr("Image"));
    return model;
}
bool beneficier::recherche(int id)
{
    QSqlQuery query;
        int c=0;
        query.prepare("SELECT * from SDF where ID= :id");
        query.bindValue(":id",id);
        if(query.exec())
        {
            while(query.next())
            {
                c++;
            }

            if(c==1)
            {
                QMessageBox boxt;
                boxt.setText("trouvé");
                return true;

            }


        }
        return false;
}
bool beneficier::modifier(int id)
{
    QSqlQuery query;


    QString i=QString::number(id);
    QString a=QString::number(age);

    query.prepare("UPDATE SDF SET ID=id, NOM=:nom,PRENOM=:prenom,AGE=:age,SEXE=:sexe,DATE_ARRIV=:date_arriv WHERE ID=:id;");

    query.bindValue(":id",i);
         query.bindValue(":nom",nom);
         query.bindValue(":prenom",prenom);
         query.bindValue(":age", a );
         query.bindValue(":sexe", sexe );
         query.bindValue(":date_arriv", date_arriv );

    return    query.exec();
}
QSqlQueryModel * beneficier::afficherRSE(QString id)
{
    QSqlQuery query;

 QSqlQueryModel * model= new QSqlQueryModel();
    model->setQuery("SELECT * FROM SDF WHERE (nom LIKE '%"+id+"%')");
    model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_arriv"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Image"));

    return model;

}
QSqlQueryModel * beneficier::tri()
{
QSqlQueryModel * model= new QSqlQueryModel();



    model->setQuery("SELECT * FROM SDF order by nom ASC ");

    model->setHeaderData(0, Qt::Horizontal, QObject::tr("identifiant"));
    model->setHeaderData(1, Qt::Horizontal, QObject::tr("date_arriv"));
    model->setHeaderData(2, Qt::Horizontal, QObject::tr("prenom"));
    model->setHeaderData(3, Qt::Horizontal, QObject::tr("nom"));
    model->setHeaderData(4, Qt::Horizontal, QObject::tr("age"));
    model->setHeaderData(5, Qt::Horizontal, QObject::tr("sexe"));
    model->setHeaderData(6, Qt::Horizontal, QObject::tr("Image"));

    return model;
}

/*bool beneficier::updateImage(int id, QString filepath)
{
    QByteArray dataByte;
    QFile file(filepath);
    if (file.open(QIODevice::ReadOnly))
    {
        dataByte = file.readAll();
        file.close();
    }
    else
    {
        return false;   // The file could not be opened or smth
    }
    QString imageFile = QFileDialog::getOpenFileName(0, "Select Image", "C:/Users/AmineBK/pdf", "Image Files (*.jpg *.jpeg *.png)");

    QSqlQuery query;
              query.prepare("INSERT INTO SDF (IMAGE) "
                            "VALUES (:LOAD_FILE(imageFile))");
              query.bindValue(":LOAD_FILE(imageFile)",  imageFile);

    query.bindValue(":id", id);
    query.bindValue(":image", dataByte, QSql::In | QSql::Binary);

    return query.exec();
}*/
