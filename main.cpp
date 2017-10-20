#include <QtGui/QApplication>
#include "mainwindow.h"
#include "connection.h"
int main(int argc, char *argv[])
{
    QCoreApplication::addLibraryPath(QCoreApplication::applicationDirPath());
    QApplication a(argc, argv);
    connection_db();
 //    MainWindow w;
//   w.show();


    TabWidget t;
    t.show();





    return a.exec();
}
