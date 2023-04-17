#include "connection.h"

connection::connection()
{

}
bool connection::createconnect()
{bool test=false;
QSqlDatabase db = QSqlDatabase::addDatabase("QODBC");
db.setDatabaseName("ProjetSdf");
db.setUserName("amin");//inserer nom de l'utilisateur
db.setPassword("amin12");//inserer mot de passe de cet utilisateur

if (db.open())
test=true;





    return  test;
}
void connection::closeConnection(){db.close();}
