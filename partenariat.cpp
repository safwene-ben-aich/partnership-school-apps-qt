#include "partenariat.h"

partenariat::partenariat()
{
    this->ID=0;
    this->partenaire="";
    this->dateDebut="";
    this->duree=0;
    this->type="";
    this->annesReconduction=0;
    this->description="";
    this->commentaire="";
    this->poc="";
    this->realisations="";
    this->pays="";

}
partenariat::partenariat(int ID,QString partenaire,QString dateDebut,int duree,QString type,int annesReconduction,QString description,QString commentaire,QString poc,QString realisations,QString pays)
{

    this->ID=ID;
    this->partenaire=partenaire;
    this->dateDebut=dateDebut;
    this->duree=duree;
    this->type=type;
    this->annesReconduction=annesReconduction;
    this->description=description;
    this->commentaire=commentaire;
    this->poc=poc;
    this->realisations=realisations;
    this->pays=pays;


}

partenariat::~partenariat()
{
    // RIEN
}

bool partenariat::AjoutPartenaire()
{

    QSqlQuery query;

    query.prepare("INSERT INTO PARTENARIAT VALUES (NULL,:partenaire,:dateDebut,:duree,:type,:annesReconduction,:description,:commentaire,:poc,:realisations,:pays)");

    query.bindValue(":partenaire",this->partenaire);
    query.bindValue(":dateDebut",this->dateDebut);
    query.bindValue(":duree",this->duree);
    query.bindValue(":type",this->type);
    query.bindValue(":annesReconduction",this->annesReconduction);
    query.bindValue(":description",this->description);
    query.bindValue(":commentaire",this->commentaire);
    query.bindValue(":poc",this->poc);
    query.bindValue(":realisations",this->realisations);
    query.bindValue(":pays",this->pays);

    return (query.exec());


}


bool partenariat::ModifPartenaire()
{
  QSqlQuery query;

 query.prepare("UPDATE PARTENARIAT SET PARTENAIRE=:partenaire,DATE_DEBUT=:dateDebut,DUREE=:duree,TYPE=:type,ANNEES_RECONDUCTION=:annesReconduction,DESCRIPTION=:description,COMMENTAIRE=:commentaire,POC=:poc,REALISATIONS=:realisations,Pays=:pays WHERE ID=:ID");

 query.bindValue(":ID",this->ID);
 query.bindValue(":partenaire",this->partenaire);
 query.bindValue(":dateDebut",this->dateDebut);
 query.bindValue(":duree",this->duree);
 query.bindValue(":type",this->type);
 query.bindValue(":annesReconduction",this->annesReconduction);
 query.bindValue(":description",this->description);
 query.bindValue(":commentaire",this->commentaire);
 query.bindValue(":poc",this->poc);
 query.bindValue(":realisations",this->realisations);
 query.bindValue(":pays",this->pays);




return (query.exec());


}


bool partenariat::SupprimePartenaire()
{
    QSqlQuery query;
    query.prepare("DELETE FROM PARTENARIAT WHERE ID=:ID");
    query.bindValue(":ID",this->ID);
    return (query.exec());
}



std::vector <QString>  partenariat::GetTypes()
{
    std::vector <QString> vectorTypes;
    QSqlQuery query;
    int NomTypeNo;
    query.prepare("SELECT NOM_TYPE FROM TYPE");
    query.exec();
      NomTypeNo=query.record().indexOf("NOM_TYPE");
    while (query.next()){
        vectorTypes.push_back(query.value(NomTypeNo).toString());

    }

    return vectorTypes;
}

std::vector <QString>  partenariat::GetPOCS()
{
    std::vector <QString> vectorPOCS;
    QSqlQuery query;
    int FonctionPOCNo;
    query.prepare("SELECT FONCTION FROM POC");
    query.exec();
      FonctionPOCNo=query.record().indexOf("FONCTION");
      while (query.next()){
        vectorPOCS.push_back(query.value(FonctionPOCNo).toString());

    }

    return vectorPOCS;
}


std::vector <QString>  partenariat::GetPays()
{
    std::vector <QString> vectorPays;
    QSqlQuery query;
    int nomFRNo;
    query.prepare("SELECT nom_fr_fr FROM PAYS");
    query.exec();
    nomFRNo=query.record().indexOf("nom_fr_fr");
    while (query.next()){
        vectorPays.push_back(query.value(nomFRNo).toString());

    }

    return vectorPays;
}


std::vector <partenariat *>  partenariat::VectorPartenaire()
{
    std::vector <partenariat *> vectorPartenaire;
    QSqlQuery query;
    int IDNo;
    query.prepare("SELECT * FROM PARTENARIAT");
    query.exec();
    IDNo = query.record().indexOf("ID");
    while (query.next()){

            partenariat nouveauPartenaire;
            nouveauPartenaire.RecherchePartenaireParID(query.value(IDNo).toInt());
            partenariat *pc= new partenariat(nouveauPartenaire);
            vectorPartenaire.push_back(pc);

    }


    return vectorPartenaire;


}


bool partenariat::RecherchePartenaireParID(int IDrecherche)
{
    QSqlQuery query;

    query.prepare("SELECT * FROM PARTENARIAT WHERE ID=:IDrecherche");
    query.bindValue(":IDrecherche",IDrecherche);
    query.exec();
    if (!query.first()){
        return false;
    }
    else
    {
        int IDNo = query.record().indexOf("ID");
        int partenaireNo=query.record().indexOf("PARTENAIRE");
        int dateDebutNo=query.record().indexOf("DATE_DEBUT");
        int dureeNo=query.record().indexOf("DUREE");
        int typeNo=query.record().indexOf("TYPE");
        int anneesReconductionNo=query.record().indexOf("ANNES_RECONDUCTION");
        int descriptionNo=query.record().indexOf("DESCRIPTION");
        int commentaireNo = query.record().indexOf("COMMENTAIRE");
        int pocNo = query.record().indexOf("POC");
        int realisationNo=query.record().indexOf("REALISATIONS");
        int paysNo =query.record().indexOf("PAYS");

        ID=query.value(IDNo).toInt();
        partenaire=query.value(partenaireNo).toString();
        dateDebut=query.value(dateDebutNo).toString();
        duree=query.value(dureeNo).toInt();
        type=query.value(typeNo).toString();
        annesReconduction=query.value(anneesReconductionNo).toInt();
        description=query.value(descriptionNo).toString();
        commentaire=query.value(commentaireNo).toString();
        poc=query.value(pocNo).toString();
        realisations=query.value(realisationNo).toString();
        pays=query.value(paysNo).toString();



        return true;
    }

}



bool partenariat::RecherchePartenaireParNomPrenom(int currentIndex)
{


    int i=-1;
    QSqlQuery query;

    query.prepare("SELECT * FROM PARTENARIAT");
    query.exec();


    while (query.next())
    {
        i++;

        int IDNo = query.record().indexOf("ID");
        int partenaireNo=query.record().indexOf("PARTENAIRE");
        int dateDebutNo=query.record().indexOf("DATE_DEBUT");
        int dureeNo=query.record().indexOf("DUREE");
        int typeNo=query.record().indexOf("TYPE");
        int anneesReconductionNo=query.record().indexOf("ANNEES_RECONDUCTION");
        int descriptionNo=query.record().indexOf("DESCRIPTION");
        int commentaireNo = query.record().indexOf("COMMENTAIRE");
        int pocNo = query.record().indexOf("POC");
        int realisationNo=query.record().indexOf("REALISATIONS");
        int paysNo =query.record().indexOf("PAYS");




            if (i==currentIndex){


                ID=query.value(IDNo).toInt();
                partenaire=query.value(partenaireNo).toString();
                dateDebut=query.value(dateDebutNo).toString();
                duree=query.value(dureeNo).toInt();
                type=query.value(typeNo).toString();
                annesReconduction=query.value(anneesReconductionNo).toInt();
                description=query.value(descriptionNo).toString();
                commentaire=query.value(commentaireNo).toString();
                poc=query.value(pocNo).toString();
                realisations=query.value(realisationNo).toString();
                pays=query.value(paysNo).toString();


        return true;
        }



    }
    return false;

}










