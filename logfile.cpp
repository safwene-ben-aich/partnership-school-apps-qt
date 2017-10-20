#include "logfile.h"

logfile::logfile()
{
    this->fileName="historique.log";
    this->file.setFileName(this->fileName);

}

void logfile::writeFile(int ID,QString classe,QString operation){

    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);
    QString type("un enregistrement");

    if (classe=="MOBILITE"){
        type = "un elève";
    }
    else if  (classe=="PARTENARIAT"){
        type = "une partenariat";
    }

    else if (classe=="POC"){
        type = "un POC";
    }
    else if("INSTITUTION") {
        type = "une institution";
    }






        out<<"INTERFACE "+classe+" : "+type+" à été "+operation+ " le "+QDateTime::currentDateTime().toString()<<endl;
        file.close();
}
