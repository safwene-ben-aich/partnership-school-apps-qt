#ifndef LOGFILE_H
#define LOGFILE_H
#include "defs.h"
class logfile
{
private :
    QString fileName;
    QFile file;
public:
    logfile();
    void writeFile(int,QString,QString);
    QVector <QString> ReadFile();
    void makeFile();
};

#endif // LOGFILE_H
