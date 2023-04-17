/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *Logo;
    QPushButton *Beneficier;
    QPushButton *Logout;
    QPushButton *Restauration;
    QPushButton *Logement;
    QPushButton *Medication;
    QPushButton *Benevole;
    QPushButton *Employe;
    QTabWidget *QTabBar;
    QWidget *QTabBarPage1_2;
    QLabel *Nom;
    QLabel *Num;
    QLabel *CIN;
    QLabel *Prenom;
    QPushButton *Ajouter;
    QPushButton *Quitter;
    QLabel *Date;
    QLabel *label_5;
    QLabel *CIN_2;
    QLineEdit *Ajouter_id;
    QLineEdit *Ajouter_prenom;
    QLineEdit *Ajouter_nom;
    QLineEdit *Ajouter_date;
    QLineEdit *Ajouter_sexe;
    QLineEdit *Ajouter_age;
    QWidget *Afficher;
    QLabel *label_9;
    QPushButton *tri_4;
    QPushButton *RechercherDon;
    QPushButton *supprimer;
    QTableView *affichage;
    QPushButton *modifier;
    QPushButton *pdf_9;
    QLineEdit *RechercheDon;
    QLabel *AffNum;
    QLabel *AffNom;
    QPushButton *BouttonQuitter_2;
    QLabel *AffMail;
    QLineEdit *le_id;
    QLabel *AffPrenom;
    QLabel *AffCIN;
    QLineEdit *AjouterNom_3;
    QLineEdit *AjouterNom_4;
    QLineEdit *AjouterNom_6;
    QLineEdit *AjouterNom_7;
    QDateEdit *lineeditdateTimeEdit_3;
    QLabel *Date_2;
    QLabel *label_2;
    QWidget *Statistics;
    QLabel *label_3;
    QWidget *Calculatrice;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QWidget *Bilanexcel;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1276, 738);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 141, 631));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QLatin1String("background-color: #FFFFFF;\n"
"color: rgb(170, 0, 0);\n"
"border-radius:20;"));
        label->setFrameShape(QFrame::Panel);
        label->setFrameShadow(QFrame::Plain);
        Logo = new QLabel(centralwidget);
        Logo->setObjectName(QStringLiteral("Logo"));
        Logo->setGeometry(QRect(50, 50, 121, 121));
        Logo->setStyleSheet(QLatin1String("#Logo{\n"
"\n"
"border-radius:16px;\n"
"\n"
"\n"
"background-color: #FFFFFF;\n"
"}\n"
"\n"
"#Logo:hover{\n"
"border-radius:20px;\n"
"font: 12pt 'Century Gothic';\n"
"background:#FFFFFF;\n"
"\n"
"\n"
"}"));
        Logo->setPixmap(QPixmap(QString::fromUtf8("image/logo.png")));
        Logo->setScaledContents(true);
        Beneficier = new QPushButton(centralwidget);
        Beneficier->setObjectName(QStringLiteral("Beneficier"));
        Beneficier->setGeometry(QRect(60, 190, 101, 41));
        Beneficier->setStyleSheet(QLatin1String("#Beneficier{\n"
"\n"
"border-radius:16px;\n"
"\n"
"\n"
"background-color: #4d95ee;\n"
"}\n"
"\n"
"#Beneficier:hover{\n"
"border-radius:20px;\n"
"font: 12pt 'Century Gothic';\n"
"background:#FFFFFF;\n"
"\n"
"\n"
"}"));
        Logout = new QPushButton(centralwidget);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(50, 620, 111, 28));
        Logout->setStyleSheet(QLatin1String("#Logout{\n"
"\n"
"border-radius:20px;\n"
"\n"
"\n"
"background-color: #4d95ee;\n"
"	background-color: rgb(60, 70, 225);\n"
"}\n"
"\n"
"#Logout:hover{\n"
"border-radius:20px;\n"
"background:#FFFFFF;\n"
"\n"
"\n"
"}"));
        Restauration = new QPushButton(centralwidget);
        Restauration->setObjectName(QStringLiteral("Restauration"));
        Restauration->setGeometry(QRect(60, 250, 101, 41));
        Restauration->setStyleSheet(QLatin1String("#Restauration{\n"
"\n"
"border-radius:16px;\n"
"\n"
"\n"
"background-color: #4d95ee;\n"
"}\n"
"\n"
"#Restauration:hover{\n"
"border-radius:20px;\n"
"font: 8pt 'Century Gothic';\n"
"background:#FFFFFF;\n"
"\n"
"\n"
"}"));
        Logement = new QPushButton(centralwidget);
        Logement->setObjectName(QStringLiteral("Logement"));
        Logement->setGeometry(QRect(60, 310, 101, 41));
        Logement->setStyleSheet(QLatin1String("#Logement{\n"
"\n"
"border-radius:16px;\n"
"\n"
"\n"
"background-color: #4d95ee;\n"
"}\n"
"\n"
"#Logement:hover{\n"
"border-radius:20px;\n"
"font: 12pt 'Century Gothic';\n"
"background:#FFFFFF;\n"
"\n"
"\n"
"}"));
        Medication = new QPushButton(centralwidget);
        Medication->setObjectName(QStringLiteral("Medication"));
        Medication->setGeometry(QRect(60, 370, 101, 41));
        Medication->setStyleSheet(QLatin1String("#Medication{\n"
"\n"
"border-radius:16px;\n"
"\n"
"\n"
"background-color: #4d95ee;\n"
"}\n"
"\n"
"#Medication:hover{\n"
"border-radius:20px;\n"
"font: 9pt 'Century Gothic';\n"
"background:#FFFFFF;\n"
"\n"
"\n"
"}"));
        Benevole = new QPushButton(centralwidget);
        Benevole->setObjectName(QStringLiteral("Benevole"));
        Benevole->setGeometry(QRect(60, 430, 101, 41));
        Benevole->setStyleSheet(QLatin1String("#Benevole{\n"
"\n"
"border-radius:16px;\n"
"\n"
"\n"
"background-color: #4d95ee;\n"
"}\n"
"\n"
"#Benevole:hover{\n"
"border-radius:20px;\n"
"font: 12pt 'Century Gothic';\n"
"background:#FFFFFF;\n"
"\n"
"\n"
"}"));
        Employe = new QPushButton(centralwidget);
        Employe->setObjectName(QStringLiteral("Employe"));
        Employe->setGeometry(QRect(60, 490, 101, 41));
        Employe->setStyleSheet(QLatin1String("#Employe{\n"
"\n"
"border-radius:16px;\n"
"\n"
"\n"
"background-color: #4d95ee;\n"
"}\n"
"\n"
"#Employe:hover{\n"
"border-radius:20px;\n"
"font: 12pt 'Century Gothic';\n"
"background:#FFFFFF;\n"
"\n"
"\n"
"}"));
        QTabBar = new QTabWidget(centralwidget);
        QTabBar->setObjectName(QStringLiteral("QTabBar"));
        QTabBar->setGeometry(QRect(240, 50, 941, 611));
        QTabBar->setMinimumSize(QSize(0, 0));
        QFont font;
        font.setFamily(QStringLiteral("Microsoft YaHei UI Light"));
        font.setPointSize(16);
        font.setBold(false);
        font.setItalic(false);
        font.setWeight(50);
        font.setKerning(true);
        QTabBar->setFont(font);
        QTabBar->setCursor(QCursor(Qt::PointingHandCursor));
        QTabBar->setStyleSheet(QLatin1String("\n"
"QTabBar::tab {\n"
"border-radius:16;\n"
"width:150px;\n"
"background: #4d95ee;\n"
"border: 20px  #535353;\n"
"border-bottom-color: #535353; \n"
"border-top-left-radius: 7px;\n"
"border-top-right-radius: 7px;\n"
"min-width: 90px;\n"
"padding: 12px;\n"
"color: rgb(172, 160, 190);\n"
"	color: #FFFFFF;\n"
"font: 12pt 'Century Gothic';\n"
"font-size:14px;Century Gothic, Helvetica, sans-serif;\n"
"font-weight:200;\n"
"}\n"
"QTabBar::tab:selected,QTabBar::tab:hover {\n"
"	\n"
"	font: 10pt 'Century Gothic';\n"
"	color: #3c18c3;\n"
"	background-color: #FFFFFF;\n"
"\n"
"}\n"
"QTabBar::tab:selected {\n"
"font: 12pt 'Century Gothic';\n"
"border-color: #760404;\n"
"border-bottom-color: #760404; /* same as pane color */\n"
"font: 12pt 'Century Gothic';\n"
"color: #3c18c3;\n"
"font-size: 16px;\n"
"font-family:Century Gothic,Solid;\n"
"font-weight:500;\n"
"\n"
"}\n"
"QTabBar::tab:!selected {\n"
"margin-top: 5px; /* make non-selected tabs look smaller */\n"
"}"));
        QTabBar->setUsesScrollButtons(true);
        QTabBarPage1_2 = new QWidget();
        QTabBarPage1_2->setObjectName(QStringLiteral("QTabBarPage1_2"));
        Nom = new QLabel(QTabBarPage1_2);
        Nom->setObjectName(QStringLiteral("Nom"));
        Nom->setGeometry(QRect(10, 90, 111, 31));
        Num = new QLabel(QTabBarPage1_2);
        Num->setObjectName(QStringLiteral("Num"));
        Num->setGeometry(QRect(10, 340, 111, 31));
        CIN = new QLabel(QTabBarPage1_2);
        CIN->setObjectName(QStringLiteral("CIN"));
        CIN->setGeometry(QRect(10, 190, 111, 31));
        Prenom = new QLabel(QTabBarPage1_2);
        Prenom->setObjectName(QStringLiteral("Prenom"));
        Prenom->setGeometry(QRect(10, 140, 111, 31));
        Ajouter = new QPushButton(QTabBarPage1_2);
        Ajouter->setObjectName(QStringLiteral("Ajouter"));
        Ajouter->setGeometry(QRect(580, 510, 131, 31));
        Ajouter->setStyleSheet(QLatin1String("#Ajouter{\n"
"color: rgb(0, 170, 0);\n"
"border-radius:8px;\n"
"\n"
"\n"
"background-color: rgb(172, 160, 190);\n"
"color:white;\n"
"font: 9pt 'Century Gothic';\n"
"}"));
        Quitter = new QPushButton(QTabBarPage1_2);
        Quitter->setObjectName(QStringLiteral("Quitter"));
        Quitter->setGeometry(QRect(750, 510, 131, 31));
        Quitter->setStyleSheet(QLatin1String("#Quitter\n"
"{\n"
"color: rgb(255, 0, 0);\n"
"border-radius:8px;\n"
"\n"
"\n"
"background-color: rgb(172, 160, 190);\n"
"color:white;\n"
"font: 9pt 'Century Gothic';\n"
"}"));
        Date = new QLabel(QTabBarPage1_2);
        Date->setObjectName(QStringLiteral("Date"));
        Date->setGeometry(QRect(10, 250, 101, 16));
        label_5 = new QLabel(QTabBarPage1_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(680, 100, 271, 331));
        label_5->setPixmap(QPixmap(QString::fromUtf8("image/Sdf3.png")));
        label_5->setScaledContents(true);
        CIN_2 = new QLabel(QTabBarPage1_2);
        CIN_2->setObjectName(QStringLiteral("CIN_2"));
        CIN_2->setGeometry(QRect(10, 300, 111, 31));
        Ajouter_id = new QLineEdit(QTabBarPage1_2);
        Ajouter_id->setObjectName(QStringLiteral("Ajouter_id"));
        Ajouter_id->setGeometry(QRect(110, 90, 113, 22));
        Ajouter_prenom = new QLineEdit(QTabBarPage1_2);
        Ajouter_prenom->setObjectName(QStringLiteral("Ajouter_prenom"));
        Ajouter_prenom->setGeometry(QRect(110, 140, 113, 22));
        Ajouter_nom = new QLineEdit(QTabBarPage1_2);
        Ajouter_nom->setObjectName(QStringLiteral("Ajouter_nom"));
        Ajouter_nom->setGeometry(QRect(110, 190, 113, 22));
        Ajouter_date = new QLineEdit(QTabBarPage1_2);
        Ajouter_date->setObjectName(QStringLiteral("Ajouter_date"));
        Ajouter_date->setGeometry(QRect(110, 250, 113, 22));
        Ajouter_sexe = new QLineEdit(QTabBarPage1_2);
        Ajouter_sexe->setObjectName(QStringLiteral("Ajouter_sexe"));
        Ajouter_sexe->setGeometry(QRect(110, 310, 113, 22));
        Ajouter_age = new QLineEdit(QTabBarPage1_2);
        Ajouter_age->setObjectName(QStringLiteral("Ajouter_age"));
        Ajouter_age->setGeometry(QRect(110, 350, 113, 22));
        QTabBar->addTab(QTabBarPage1_2, QString());
        Afficher = new QWidget();
        Afficher->setObjectName(QStringLiteral("Afficher"));
        label_9 = new QLabel(Afficher);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(40, 130, 56, 16));
        tri_4 = new QPushButton(Afficher);
        tri_4->setObjectName(QStringLiteral("tri_4"));
        tri_4->setGeometry(QRect(30, 460, 81, 31));
        tri_4->setStyleSheet(QLatin1String("#tri{\n"
"\n"
"border-radius:8px;\n"
"\n"
"\n"
"background-color: rgb(172, 160, 190);\n"
"color:white;\n"
"font: 9pt 'Century Gothic';\n"
"}\n"
""));
        RechercherDon = new QPushButton(Afficher);
        RechercherDon->setObjectName(QStringLiteral("RechercherDon"));
        RechercherDon->setGeometry(QRect(30, 70, 101, 23));
        RechercherDon->setStyleSheet(QLatin1String("#rechercherClient_4{\n"
"\n"
"border-radius:8px;\n"
"\n"
"\n"
"background-color: rgb(172, 160, 190);\n"
"color:white;\n"
"font: 9pt 'Century Gothic';\n"
"}\n"
""));
        supprimer = new QPushButton(Afficher);
        supprimer->setObjectName(QStringLiteral("supprimer"));
        supprimer->setGeometry(QRect(690, 390, 81, 31));
        supprimer->setStyleSheet(QLatin1String("#supprimer{\n"
"	color: rgb(255, 0, 0);\n"
"	color: rgb(255, 0, 0);\n"
"\n"
"border-radius:8px;\n"
"\n"
"\n"
"background-color: rgb(172, 160, 190);\n"
"color:white;\n"
"font: 9pt 'Century Gothic';\n"
"}\n"
""));
        affichage = new QTableView(Afficher);
        affichage->setObjectName(QStringLiteral("affichage"));
        affichage->setGeometry(QRect(30, 120, 541, 321));
        modifier = new QPushButton(Afficher);
        modifier->setObjectName(QStringLiteral("modifier"));
        modifier->setGeometry(QRect(810, 390, 81, 31));
        modifier->setStyleSheet(QLatin1String("#modifier{\n"
"	color: rgb(0, 170, 0);\n"
"\n"
"border-radius:8px;\n"
"\n"
"\n"
"background-color: rgb(172, 160, 190);\n"
"color:white;\n"
"font: 9pt 'Century Gothic';\n"
"}\n"
""));
        pdf_9 = new QPushButton(Afficher);
        pdf_9->setObjectName(QStringLiteral("pdf_9"));
        pdf_9->setGeometry(QRect(490, 460, 81, 31));
        pdf_9->setStyleSheet(QLatin1String("#pdf_6{\n"
"\n"
"border-radius:8px;\n"
"\n"
"\n"
"background-color: rgb(172, 160, 190);\n"
"color:white;\n"
"font: 9pt 'Century Gothic';\n"
"}\n"
""));
        RechercheDon = new QLineEdit(Afficher);
        RechercheDon->setObjectName(QStringLiteral("RechercheDon"));
        RechercheDon->setGeometry(QRect(150, 70, 231, 21));
        RechercheDon->setStyleSheet(QLatin1String("border:none;\n"
"border-bottom:1px solid #707172;\n"
"background: transparent;"));
        AffNum = new QLabel(Afficher);
        AffNum->setObjectName(QStringLiteral("AffNum"));
        AffNum->setGeometry(QRect(610, 260, 111, 31));
        AffNom = new QLabel(Afficher);
        AffNom->setObjectName(QStringLiteral("AffNom"));
        AffNom->setGeometry(QRect(610, 190, 111, 31));
        BouttonQuitter_2 = new QPushButton(Afficher);
        BouttonQuitter_2->setObjectName(QStringLiteral("BouttonQuitter_2"));
        BouttonQuitter_2->setGeometry(QRect(1110, 470, 131, 31));
        AffMail = new QLabel(Afficher);
        AffMail->setObjectName(QStringLiteral("AffMail"));
        AffMail->setGeometry(QRect(610, 300, 111, 31));
        le_id = new QLineEdit(Afficher);
        le_id->setObjectName(QStringLiteral("le_id"));
        le_id->setGeometry(QRect(760, 110, 161, 21));
        le_id->setStyleSheet(QLatin1String("border:none;\n"
"border-bottom:1px solid #707172;\n"
"background: transparent;"));
        le_id->setClearButtonEnabled(false);
        AffPrenom = new QLabel(Afficher);
        AffPrenom->setObjectName(QStringLiteral("AffPrenom"));
        AffPrenom->setGeometry(QRect(610, 150, 111, 31));
        AffCIN = new QLabel(Afficher);
        AffCIN->setObjectName(QStringLiteral("AffCIN"));
        AffCIN->setGeometry(QRect(610, 110, 111, 31));
        AjouterNom_3 = new QLineEdit(Afficher);
        AjouterNom_3->setObjectName(QStringLiteral("AjouterNom_3"));
        AjouterNom_3->setGeometry(QRect(760, 260, 161, 21));
        AjouterNom_3->setStyleSheet(QLatin1String("border:none;\n"
"border-bottom:1px solid #707172;\n"
"background: transparent;"));
        AjouterNom_3->setClearButtonEnabled(false);
        AjouterNom_4 = new QLineEdit(Afficher);
        AjouterNom_4->setObjectName(QStringLiteral("AjouterNom_4"));
        AjouterNom_4->setGeometry(QRect(760, 300, 161, 21));
        AjouterNom_4->setStyleSheet(QLatin1String("border:none;\n"
"border-bottom:1px solid #707172;\n"
"background: transparent;"));
        AjouterNom_4->setClearButtonEnabled(false);
        AjouterNom_6 = new QLineEdit(Afficher);
        AjouterNom_6->setObjectName(QStringLiteral("AjouterNom_6"));
        AjouterNom_6->setGeometry(QRect(760, 150, 161, 21));
        AjouterNom_6->setStyleSheet(QLatin1String("border:none;\n"
"border-bottom:1px solid #707172;\n"
"background: transparent;"));
        AjouterNom_6->setClearButtonEnabled(false);
        AjouterNom_7 = new QLineEdit(Afficher);
        AjouterNom_7->setObjectName(QStringLiteral("AjouterNom_7"));
        AjouterNom_7->setGeometry(QRect(760, 190, 161, 21));
        AjouterNom_7->setStyleSheet(QLatin1String("border:none;\n"
"border-bottom:1px solid #707172;\n"
"background: transparent;"));
        AjouterNom_7->setClearButtonEnabled(false);
        lineeditdateTimeEdit_3 = new QDateEdit(Afficher);
        lineeditdateTimeEdit_3->setObjectName(QStringLiteral("lineeditdateTimeEdit_3"));
        lineeditdateTimeEdit_3->setGeometry(QRect(760, 230, 161, 22));
        Date_2 = new QLabel(Afficher);
        Date_2->setObjectName(QStringLiteral("Date_2"));
        Date_2->setGeometry(QRect(610, 230, 101, 16));
        label_2 = new QLabel(Afficher);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(600, 10, 91, 71));
        label_2->setPixmap(QPixmap(QString::fromUtf8("image/perso.png")));
        QTabBar->addTab(Afficher, QString());
        Statistics = new QWidget();
        Statistics->setObjectName(QStringLiteral("Statistics"));
        label_3 = new QLabel(Statistics);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 20, 861, 481));
        label_3->setPixmap(QPixmap(QString::fromUtf8("image/finance.jpg")));
        QTabBar->addTab(Statistics, QString());
        Calculatrice = new QWidget();
        Calculatrice->setObjectName(QStringLiteral("Calculatrice"));
        label_6 = new QLabel(Calculatrice);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(150, 100, 101, 31));
        QFont font1;
        font1.setPointSize(18);
        label_6->setFont(font1);
        lineEdit_2 = new QLineEdit(Calculatrice);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(280, 110, 171, 21));
        label_7 = new QLabel(Calculatrice);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(140, 190, 131, 31));
        label_7->setFont(font1);
        lineEdit_3 = new QLineEdit(Calculatrice);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(290, 200, 171, 21));
        QTabBar->addTab(Calculatrice, QString());
        Bilanexcel = new QWidget();
        Bilanexcel->setObjectName(QStringLiteral("Bilanexcel"));
        QTabBar->addTab(Bilanexcel, QString());
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 30, 1181, 671));
        label_4->setStyleSheet(QStringLiteral("background-color: #4d95ee;"));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../Downloads/fond-bleu-degrade-luxe-abstrait-bleu-fonce-lisse-vignette-noire-studio-banner.jpg")));
        MainWindow->setCentralWidget(centralwidget);
        label_4->raise();
        label->raise();
        Logo->raise();
        Beneficier->raise();
        Logout->raise();
        Restauration->raise();
        Logement->raise();
        Medication->raise();
        Benevole->raise();
        Employe->raise();
        QTabBar->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1276, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QTabBar->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        Logo->setText(QString());
        Beneficier->setText(QApplication::translate("MainWindow", "Beneficier", Q_NULLPTR));
        Logout->setText(QApplication::translate("MainWindow", "Logout", Q_NULLPTR));
        Restauration->setText(QApplication::translate("MainWindow", "Restauration", Q_NULLPTR));
        Logement->setText(QApplication::translate("MainWindow", "Logement", Q_NULLPTR));
        Medication->setText(QApplication::translate("MainWindow", "Medication", Q_NULLPTR));
        Benevole->setText(QApplication::translate("MainWindow", "Benevole", Q_NULLPTR));
        Employe->setText(QApplication::translate("MainWindow", "Employ\303\251", Q_NULLPTR));
        Nom->setText(QApplication::translate("MainWindow", "id", Q_NULLPTR));
        Num->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        CIN->setText(QApplication::translate("MainWindow", "nom", Q_NULLPTR));
        Prenom->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        Ajouter->setText(QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        Quitter->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        Date->setText(QApplication::translate("MainWindow", "Date ", Q_NULLPTR));
        label_5->setText(QString());
        CIN_2->setText(QApplication::translate("MainWindow", "sexe", Q_NULLPTR));
        QTabBar->setTabText(QTabBar->indexOf(QTabBarPage1_2), QApplication::translate("MainWindow", "Ajouter", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
        tri_4->setText(QApplication::translate("MainWindow", "Trier (nom)", Q_NULLPTR));
        RechercherDon->setText(QApplication::translate("MainWindow", "Recherche", Q_NULLPTR));
        supprimer->setText(QApplication::translate("MainWindow", "supprimer", Q_NULLPTR));
        modifier->setText(QApplication::translate("MainWindow", "modifier", Q_NULLPTR));
        pdf_9->setText(QApplication::translate("MainWindow", "pdf", Q_NULLPTR));
        AffNum->setText(QApplication::translate("MainWindow", "sexe", Q_NULLPTR));
        AffNom->setText(QApplication::translate("MainWindow", "Nom", Q_NULLPTR));
        BouttonQuitter_2->setText(QApplication::translate("MainWindow", "Quitter", Q_NULLPTR));
        AffMail->setText(QApplication::translate("MainWindow", "Age", Q_NULLPTR));
        le_id->setPlaceholderText(QString());
        AffPrenom->setText(QApplication::translate("MainWindow", "Prenom", Q_NULLPTR));
        AffCIN->setText(QApplication::translate("MainWindow", "Id", Q_NULLPTR));
        AjouterNom_3->setPlaceholderText(QString());
        AjouterNom_4->setPlaceholderText(QString());
        AjouterNom_6->setPlaceholderText(QString());
        AjouterNom_7->setPlaceholderText(QString());
        Date_2->setText(QApplication::translate("MainWindow", "Date ", Q_NULLPTR));
        label_2->setText(QString());
        QTabBar->setTabText(QTabBar->indexOf(Afficher), QApplication::translate("MainWindow", "Afficher", Q_NULLPTR));
        label_3->setText(QString());
        QTabBar->setTabText(QTabBar->indexOf(Statistics), QApplication::translate("MainWindow", "Statistics", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Id_sdf", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "Id_perso", Q_NULLPTR));
        QTabBar->setTabText(QTabBar->indexOf(Calculatrice), QApplication::translate("MainWindow", "Historique", Q_NULLPTR));
        QTabBar->setTabText(QTabBar->indexOf(Bilanexcel), QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
