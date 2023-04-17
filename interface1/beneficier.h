#ifndef BENEFICIER_H
#define BENEFICIER_H
#include<QString>
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QtCore/QFile>
#include <QtCore/QTextStream>
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
#include<QSqlQuery>
#include<QSqlQueryModel>
#include <QMainWindow>
#include<QTableView>
#include<QMessageBox>
#include<QPrinter>
#include<QPainter>
#include<QPrintDialog>
#include <QPrintPreviewDialog>
#include <QPdfWriter>
#include <QDesktopServices>
#include <QtCore/QFile>
#include <QtCore/QTextStream>
#include <QSqlTableModel>
#include <QStyledItemDelegate>
#include <QDate>
#include <QDateTime>
#include <QtWidgets>

#include <QFile>
#include <QFileDialog>
#include <QTextDocument>
class beneficier
{ private:
    int id,age;
    QString nom,prenom,date_arriv,sexe,img;
public:
    beneficier();
    beneficier(int,QString,QString,int,QString,QString,QString);
    int getid(){return id;}
    QString getnom(){return nom;}
    QString getprenom(){return prenom;}
    int getage(){return age;}
    QString getsexe(){return sexe;}
    QString getdate_arriv(){return date_arriv;}
    void setid(int id){this->id=id;}
    void setnom(QString nom){this->nom=nom;}
    void setprenom(QString prenom){this->prenom=prenom;}
    void setage(int age){this->age=age;}
    void setdate_arriv(QString sexe){this->sexe=sexe;}
    void setsexe(QString date_arriv){this->date_arriv=date_arriv;}
    bool ajouter();
    QSqlQueryModel *test();
    QSqlQueryModel * afficher();
    bool supprimer(int);
    bool modifier(int);
    bool recherche(int);
    QSqlQueryModel * afficherRSE(QString id);
     QSqlQueryModel * tri();
     bool existeE(int id);
     void insertimage(const QString &fileName, const QString &saveFileName);
 //bool updateImage (int, QString);

};

#endif // BENEFICIER_H
