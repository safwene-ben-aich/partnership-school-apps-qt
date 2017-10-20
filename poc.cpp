#include "poc.h"

POC::POC()
{
    this->ID=0;
    this->nom="";
    this->prenom="";
    this->institution="";
    this->eMail="";
    this->telephone="";
    this->fax="";
    this->fonction="";
    this->commentaire="";
}

POC::POC(int ID,QString nom,QString prenom,QString institution,QString eMail,QString telephone,QString fax,QString fonction,QString commentaire)
{
    this->ID=ID;
    this->nom=nom;
    this->prenom=prenom;
    this->institution=institution;
    this->eMail=eMail;
    this->telephone=telephone;
    this->fax=fax;
    this->fonction=fonction;
    this->commentaire=commentaire;

}

POC::~POC()
{
    //RIEN
}



bool POC::AjoutPOC()
{

    QSqlQuery query;

    query.prepare("INSERT INTO POC VALUES (NULL,:nom,:prenom,:institution,:eMail,:telephone,:fax,:fonction,:commentaire)");


    query.bindValue(":nom",this->nom);
    query.bindValue(":prenom",this->prenom);
    query.bindValue(":institution",this->institution);
    query.bindValue(":eMail",this->eMail);
    query.bindValue(":telephone",this->telephone);
    query.bindValue(":fax",this->fax);
    query.bindValue(":fonction",this->fonction);
    query.bindValue(":commentaire",this->commentaire);

    return (query.exec());

}




bool POC::ModifPOC()
{
    QSqlQuery query;

    query.prepare("UPDATE POC SET NOM=:nom,PRENOM=:prenom,INSTITUTION=:institution,EMAIL=:eMail,TELEPHONE=:telephone,FAX=:fax,FONCTION=:fonction,COMMENT=:commentaire WHERE ID=:ID");

    query.bindValue(":ID",this->ID);
    query.bindValue(":nom",this->nom);
    query.bindValue(":prenom",this->prenom);
    query.bindValue(":institution",this->institution);
    query.bindValue(":eMail",this->eMail);
    query.bindValue(":telephone",this->telephone);
    query.bindValue(":fax",this->fax);
    query.bindValue(":fonction",this->fonction);
    query.bindValue(":commentaire",this->commentaire);

    query.exec();
    qDebug()<<query.lastError();

}


bool POC::SupprimePOC()
{
    QSqlQuery query;
    query.prepare("DELETE FROM POC WHERE ID=:ID");
    query.bindValue(":ID",this->ID);
    return (query.exec());
}




bool POC::RecherchePOCParID(int IDrecherche)
{
    QSqlQuery query;

    query.prepare("SELECT * FROM POC WHERE ID=:IDrecherche");
    query.bindValue(":IDrecherche",IDrecherche);
    query.exec();
    if (!query.first()){
        return false;
    }
    else
    {
        int IDNo = query.record().indexOf("ID");
        int nomNo = query.record().indexOf("NOM");
        int prenomNo = query.record().indexOf("PRENOM");
        int institutionNo = query.record().indexOf("INSTITUTION");
        int eMailNo = query.record().indexOf("EMAIL");
        int telephoneNo = query.record().indexOf("TELEPHONE");
        int faxNo = query.record().indexOf("FAX");
        int fonctionNo = query.record().indexOf("FONCTION");
        int commentaireNo = query.record().indexOf("COMMENTAIRE");

        ID=query.value(IDNo).toInt();
        nom=query.value(nomNo).toString();
        prenom=query.value(prenomNo).toString();
        institution=query.value(institutionNo).toString();
        eMail=query.value(eMailNo).toString();
        telephone=query.value(telephoneNo).toString();
        fax=query.value(faxNo).toString();
        fonction=query.value(fonctionNo).toString();
        commentaire=query.value(commentaireNo).toString();

        return true;
    }

}



bool POC::RecherchePOCParNomPrenom(int currentIndex)
{


    int i=-1;
    QSqlQuery query;

    query.prepare("SELECT * FROM POC");
    query.exec();
    QString nomQuery,prenomQuery;

    while (query.next())
    {
        i++;

        int IDNo = query.record().indexOf("ID");
        int nomNo = query.record().indexOf("NOM");
        int prenomNo = query.record().indexOf("PRENOM");
        int institutionNo = query.record().indexOf("INSTITUTION");
        int eMailNo = query.record().indexOf("EMAIL");
        int telephoneNo = query.record().indexOf("TELEPHONE");
        int faxNo = query.record().indexOf("FAX");
        int fonctionNo = query.record().indexOf("FONCTION");
        int commentaireNo = query.record().indexOf("COMMENTAIRE");

        nomQuery=query.value(nomNo).toString();
        prenomQuery=query.value(prenomNo).toString();


            if (i==currentIndex){

                ID=query.value(IDNo).toInt();
                nom=query.value(nomNo).toString();
                prenom=query.value(prenomNo).toString();
                institution=query.value(institutionNo).toString();
                eMail=query.value(eMailNo).toString();
                telephone=query.value(telephoneNo).toString();
                fax=query.value(faxNo).toString();
                fonction=query.value(fonctionNo).toString();
                commentaire=query.value(commentaireNo).toString();

        return true;
        }



    }
    return false;

}



std::vector <POC *>  POC::VectorPOC()
{
   std::vector <POC *> vectorPOC;
   QSqlQuery query;
   int IDNo;
   query.prepare("SELECT * FROM POC");
   query.exec();
   IDNo = query.record().indexOf("ID");
   while (query.next()){

           POC nouveauPOC;
           nouveauPOC.RecherchePOCParID(query.value(IDNo).toInt());
           POC *pc= new POC(nouveauPOC);
           vectorPOC.push_back(pc);

   }


   return vectorPOC;

}









