#ifndef MAINWINDOW_H
#define MAINWINDOW_H
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
#include"beneficier.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    int stat_beneficier_part2();
    int stat_beneficier_part3();
    int stat_beneficier_part4();
    int stat_beneficier_part5();

     void paintEvent(QPaintEvent *) ;

     void uploadImage();
    ~MainWindow();

private slots:


    void on_pb_supprimer_clicked();

    void on_pb_ajouter_clicked();




    void on_pb_modifier_clicked();



    void on_RechercherSDF_clicked();

    void on_tri_clicked();

    void on_pdf_9_clicked();

    void on_Actualiser_clicked();



    void on_telecharger_clicked();

    void on_pb_historique_clicked();

    void on_pb_InsertImage_equi_2_clicked();

private:
    Ui::MainWindow *ui;
    QLabel *imageLabel;
QPushButton *uploadButton;
void uploadImage(const QString &filename, const QString &saveFileName);
};
#endif // MAINWINDOW_H
