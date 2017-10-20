#include "connection.h"
bool connection_db()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("partneriats.internship.sqlite");
    QFileInfo info_database("partneriats.internship.sqlite");

    QString fileName="erreur.txt";
    QFile file(fileName);
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);

    if (info_database.isFile())
    {

        if (db.open())
        {
            return true;
        }
        else {
            out <<"Connection non-�tablie avec la base de donn�es : "+db.lastError().text()<<endl;
            return false;
        }
    }
    else
    {

        out<<"Connection non-�tablie avec la base de donnn�es : Le fichier n'existe pas " <<endl;
        return false;

    }

}
