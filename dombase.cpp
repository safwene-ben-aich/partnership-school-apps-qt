#include "dombase.h"




DomBase::DomBase(){
    //RIEN
}
DomBase::~DomBase(){
    // RIEN
}


int DomBase::getCount()
{

    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM "+ getTableName());
    query.exec();
    query.next();

    return query.value(0).toInt();
}

int DomBase::getLastID()
{

    QSqlQuery query;
    query.prepare("SELECT * FROM "+getTableName());
    query.exec();
    int IDNo = query.record().indexOf("ID");
    query.last();
    return (query.value(IDNo).toInt());
}


QVector <QString> DomBase::getListPays()
{
    QVector <QString> vectPays;
    QSqlQuery query;
    query.prepare("SELECT DISTINCT PAYS FROM "+getTableName());
    query.exec();
    int PAYSNo = query.record().indexOf("PAYS");
    while (query.next()){
        vectPays.push_back(query.value(PAYSNo).toString());
    }
    return vectPays;

}

QVector <QString> DomBase::getListClasse()
{
    QVector <QString> vectClasse;
    QSqlQuery query;
    query.prepare("SELECT DISTINCT CLASSE_ESPRIT FROM "+getTableName());
    query.exec();
    int CLASSENo = query.record().indexOf("CLASSE_ESPRIT");
    while (query.next()){
        vectClasse.push_back(query.value(CLASSENo).toString());
    }

    return vectClasse;
}

int DomBase::getNombreDiplomeParClasse(QString classe,QString diplome){

    QSqlQuery query;
    query.prepare("SELECT COUNT (*) FROM "+getTableName()+" WHERE CLASSE_ESPRIT=:classe AND DIPLOME LIKE '%' || :diplome || '%'");
    query.bindValue(":classe",classe);
    query.bindValue(":diplome",diplome);
    query.exec();
    query.first();
    return (query.value(0).toInt());

}

int DomBase::getNombreDiplomeParAnnee(QString diplome,int annee){

    QSqlQuery query;
    query.prepare("SELECT COUNT (*) FROM "+getTableName()+" WHERE ANNEE=:ANNEE AND DIPLOME LIKE '%' || :diplome || '%'");
    query.bindValue(":ANNEE",annee);
    query.bindValue(":diplome",diplome);
    query.exec();
    query.first();
    return (query.value(0).toInt());

}

int DomBase::getNombreClasseParAnnee(QString classe,int annee)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT (*) FROM "+getTableName()+" WHERE ANNEE=:ANNEE AND CLASSE_ESPRIT=:CLASSE_ESPRIT");
    query.bindValue(":ANNEE",annee);
    query.bindValue(":CLASSE_ESPRIT",classe);
    query.exec();
    query.first();
    return (query.value(0).toInt());


}

int DomBase::getNombrePaysParAnnee(QString pays,int annee)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT (*) FROM "+getTableName()+" WHERE ANNEE=:ANNEE AND PAYS=:PAYS");
    query.bindValue(":ANNEE",annee);
    query.bindValue(":PAYS",pays);
    query.exec();
    query.next();
    qDebug()<<query.value(0).toInt();
    return query.value(0).toInt();


}





QVector <double> DomBase::getCountPays()
{

    QSqlQuery query,queryCount;
    QVector <double> vectorPays;
    query.prepare("SELECT DISTINCT PAYS FROM "+getTableName());
    query.exec();
    int PAYSNo = query.record().indexOf("PAYS");
    while (query.next()){
        queryCount.prepare("SELECT COUNT (*) FROM "+getTableName()+" WHERE PAYS='"+query.value(PAYSNo).toString()+"'");
        queryCount.exec();                                            //METHODE DE TEST, A REMPLACER AVEC UNE REQUETTE SQL
        queryCount.first();
        vectorPays.push_back(queryCount.value(0).toInt());
    }

    return vectorPays;
}











QSqlQueryModel *DomBase::getModelGlobal(){

    QVector <QString> vectColumns;
    vectColumns=getColumnName();

    QString selectColumns="";
    for (int i=0;i<vectColumns.size();i++){
        selectColumns+=vectColumns[i];
        if (i!=vectColumns.size()-1){
            selectColumns+=',';
        }
    }
    qDebug()<<selectColumns;

    QSqlQueryModel * model= new QSqlQueryModel ();
    model->setQuery("SELECT "+selectColumns+" FROM "+getTableName());
    return model;
}


QSqlQueryModel *DomBase::getModelSpecial(QString inputValue,QString filterChecked){
    QSqlQueryModel * model= new QSqlQueryModel ();
    QSqlQuery query;
    QVector <QString> vectColumns;
    vectColumns=getColumnName();

    QString selectColumns="";
    for (int i=0;i<vectColumns.size();i++){
        selectColumns+=vectColumns[i];
        if (i!=vectColumns.size()-1){
            selectColumns+=',';
        }
    }
    query.prepare("SELECT "+selectColumns+" FROM "+getTableName()+" WHERE "+filterChecked+" LIKE '%' || :inputValue || '%' ");
    query.bindValue(":inputValue",inputValue);
    query.exec();
    model->setQuery(query);
    return model;
}




QSqlQueryModel *DomBase::getModelCommentaire(int ID ){
    QSqlQueryModel * model= new QSqlQueryModel ();
    QSqlQuery query;
    query.prepare("SELECT * FROM COMMENTAIRES_"+getTableName()+" WHERE ID_"+getTableName()+" =:ID");
    query.bindValue(":ID",ID);
    query.exec();


    model->setQuery(query);

    return model;
}

int DomBase::getNombreEtudiantParAnnee(int annee)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT (*) FROM "+getTableName()+" WHERE ANNEE=:ANNEE");
    query.bindValue(":ANNEE",annee);
    query.exec();
    query.first();
    return (query.value(0).toInt());
}





bool DomBase::ajout()
{
    QSqlQuery query=queryPrepareAjout();
    return (query.exec());
}

bool DomBase::supprime(int ID)
{

    QSqlQuery query;
    query.prepare("DELETE FROM "+getTableName()+" WHERE ID=:ID");
    query.bindValue(":ID",ID);
    return (query.exec());

}

bool DomBase::update(int ID){

    QSqlQuery query=queryPrepareUpdate(ID);
    return (query.exec());
}







void DomBase::getData(int ID)
{

    QSqlQuery query;
    query.prepare("SELECT * FROM "+getTableName()+" WHERE ID=:ID");
    query.bindValue(":ID",ID);

    if (query.exec()){
        query.first();
        setData(query);

    }
    else
    {
        qDebug()<<"FALSE";
    }

}

bool DomBase::addComment(int ID,QString coreComment,QString dateComment)
{
    QSqlQuery query;
    query.prepare("INSERT INTO COMMENTAIRES_"+getTableName()+" VALUES (NULL,:ID_"+getTableName()+",:coreComment,:dateComment)");
    query.bindValue(":ID_"+getTableName(),ID);
    query.bindValue(":coreComment",coreComment);
    query.bindValue(":dateComment",dateComment);

    query.exec();
    qDebug()<<query.lastError().text();







}









/***CLASSE MOBILITE****/

DomMobilite::DomMobilite()
{
    this->ID=0;
    this->nom="";
    this->prenom="";
    this->ecole="";
    this->diplome="";
    this->annee=0;
    this->classeEsprit="";
    this->duree=0;
    this->commentairesSuivi="";
    this->pays="";
}

DomMobilite::DomMobilite(int ID, QString nom, QString prenom, QString ecole, QString diplome,  int annee, QString classeEsprit,  int duree, QString commentairesSuivi, QString pays)
{
    this->ID=ID;
    this->nom=nom;
    this->prenom=prenom;
    this->ecole=ecole;
    this->diplome=diplome;
    this->annee=annee;
    this->classeEsprit=classeEsprit;
    this->duree=duree;
    this->commentairesSuivi=commentairesSuivi;
    this->pays=pays;
}


DomMobilite::~DomMobilite()
{
    // Rien à détruire.
}



QString DomMobilite::getTableName()
{
    return "MOBILITE";
}


QString DomMobilite::getAjoutValues()
{
    return "VALUES (NULL,:nom,:prenom,:ecole,:diplome,:annee,:classeEsprit,:duree,:commentairesSuivi,:pays)";
}

QString DomMobilite::getUpdateValues()
{
    return "NOM=:nom,PRENOM=:prenom,CLASSE_ESPRIT=:classeEsprit,ECOLE=:ecole,DIPLOME=:diplome,ANNEE=:annee,DUREE=:duree,COMMENTAIRES_SUIVI=:commentairesSuivi,PAYS=:pays";
}



QVector <QString> DomMobilite::getColumnName()
{

    QVector <QString> vectColumns;
    QSqlQuery query;
    query.prepare("PRAGMA table_info("+getTableName()+')');
    query.exec();

    while (query.next()){
        vectColumns.push_back(query.value(1).toString());
    }
    return vectColumns;

}

QSqlQuery DomMobilite::queryPrepareAjout()
{

    QSqlQuery query;
    query.prepare("INSERT INTO  "+getTableName()+" "+getAjoutValues());
    query.bindValue(":nom",this->nom);
    query.bindValue(":prenom",this->prenom);
    query.bindValue(":ecole",this->ecole);
    query.bindValue(":diplome",this->diplome);
    query.bindValue(":annee",this->annee);
    query.bindValue(":classeEsprit",this->classeEsprit);
    query.bindValue(":duree",this->duree);
    query.bindValue(":commentairesSuivi",this->commentairesSuivi);
    query.bindValue(":pays",this->pays);


    return query;

}

QSqlQuery DomMobilite::queryPrepareUpdate(int ID)
{

    QSqlQuery query;
    query.prepare("UPDATE "+getTableName()+" SET "+getUpdateValues()+" WHERE ID=:ID");



    query.bindValue(":ID",ID);
    query.bindValue(":nom",this->nom);
    query.bindValue(":prenom",this->prenom);
    query.bindValue(":ecole",this->ecole);
    query.bindValue(":diplome",this->diplome);
    query.bindValue(":annee",this->annee);
    query.bindValue(":classeEsprit",this->classeEsprit);
    query.bindValue(":duree",this->duree);
    query.bindValue(":commentairesSuivi",this->commentairesSuivi);
    query.bindValue(":pays",this->pays);


    return query;




}



void DomMobilite::setData(QSqlQuery query)
{
    int IDNo = query.record().indexOf("ID");
    int nomNo = query.record().indexOf("NOM");
    int prenomNo = query.record().indexOf("PRENOM");
    int ecoleNo = query.record().indexOf("ECOLE");
    int diplomeNo = query.record().indexOf("DIPLOME");
    int anneeNo = query.record().indexOf("ANNEE");
    int classeNo = query.record().indexOf("CLASSE_ESPRIT");
    int dureeNo = query.record().indexOf("DUREE");
    int commentaireSuiviNo = query.record().indexOf("COMMENTAIRES_SUIVI");
    int paysNo = query.record().indexOf("PAYS");




    this->ID = query.value(IDNo).toInt();
    this->nom = query.value(nomNo).toString();
    this->prenom = query.value(prenomNo).toString();
    this->ecole = query.value(ecoleNo).toString();
    this->diplome = query.value(diplomeNo).toString();
    this->annee = query.value(anneeNo).toInt();
    this->classeEsprit = query.value(classeNo).toString();
    this-> duree = query.value(dureeNo).toInt();
    this->commentairesSuivi = query.value(commentaireSuiviNo).toString();
    this->pays = query.value(paysNo).toString();


}

int DomMobilite::found(QString nom, QString prenom, QString classe)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM "+ getTableName()+ " WHERE NOM=:NOM AND PRENOM=:PRENOM AND CLASSE_ESPRIT=:CLASSE_ESPRIT");
    query.bindValue(":NOM",nom);
    query.bindValue(":PRENOM",prenom);
    query.bindValue(":CLASSE_ESPRIT",classe);
    query.exec();
    query.next();
    qDebug()<<query.value(0).toInt();
    return query.value(0).toInt();
}



/****FIN CLASSE MOBILITE****/

/***CLASSE PARTENARIAT****/


DomPartenariat::DomPartenariat()
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
DomPartenariat::DomPartenariat(int ID,QString partenaire,QString dateDebut,int duree,QString type,int annesReconduction,QString description,QString commentaire,QString poc,QString realisations,QString pays)
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

DomPartenariat::~DomPartenariat()
{
    // RIEN
}




QString DomPartenariat::getTableName()
{
    return "PARTENARIAT";
}


QString DomPartenariat::getAjoutValues()
{
    return "VALUES (NULL,:partenaire,:dateDebut,:duree,:type,:annesReconduction,:description,:commentaire,:poc,:realisations,:pays)";
}



QVector <QString> DomPartenariat::getColumnName()
{

    QVector <QString> vectColumns;
    QSqlQuery query;
    query.prepare("PRAGMA table_info("+getTableName()+')');
    query.exec();

    while (query.next()){
        vectColumns.push_back(query.value(1).toString());
    }
    return vectColumns;

}

QSqlQuery DomPartenariat::queryPrepareAjout()
{

    QSqlQuery query;
    query.prepare("INSERT INTO  "+getTableName()+" "+getAjoutValues());


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


    return query;
}


QString DomPartenariat::getUpdateValues()
{
    return "PARTENAIRE=:partenaire,DATE_DEBUT=:dateDebut,DUREE=:duree,TYPE=:type,ANNEES_RECONDUCTION=:annesReconduction,DESCRIPTION=:description,COMMENTAIRE=:commentaire,POC=:poc,REALISATIONS=:realisations,PAYS=:pays";
}

QSqlQuery DomPartenariat::queryPrepareUpdate(int ID)
{

    QSqlQuery query;
    query.prepare("UPDATE "+getTableName()+" SET "+getUpdateValues()+" WHERE ID=:ID");



    query.bindValue(":ID",ID);
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

    return query;




}



void DomPartenariat::setData(QSqlQuery query)
{
    int IDNo = query.record().indexOf("ID");
    int partenaireNo= query.record().indexOf("PARTENAIRE");
    int dateDebutNo = query.record().indexOf("DATE_DEBUT");
    int dureeNo = query.record().indexOf("DUREE");
    int typeNo = query.record().indexOf("TYPE");
    int anneeReconductionNo = query.record().indexOf("ANNEES_RECONDUCTION");
    int descriptionNo = query.record().indexOf("DESCRIPTION");
    int commentaireNo = query.record().indexOf("COMMENTAIRE");
    int pocNo = query.record().indexOf("POC");
    int realisationsNo = query.record().indexOf("REALISATIONS");
    int paysNo = query.record().indexOf("PAYS");



    this->ID = query.value(IDNo).toInt();
    this->partenaire = query.value(partenaireNo).toString();
    this->dateDebut = query.value(dateDebutNo).toString();
    this->duree = query.value(dureeNo).toInt();
    this->type = query.value(typeNo).toString();
    this->annesReconduction = query.value(anneeReconductionNo).toInt();
    this->description = query.value(descriptionNo).toString();
    this->commentaire = query.value(commentaireNo).toString();
    this->poc = query.value(pocNo).toString();
    this->realisations = query.value(realisationsNo).toString();
    this->pays = query.value(paysNo).toString();

}



int DomPartenariat::found(QString partenaireAtester)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM "+ getTableName()+ " WHERE PARTENAIRE=:partenaire ");
    query.bindValue(":partenaire",partenaireAtester);
    query.exec();
    query.next();
    qDebug()<<query.value(0).toInt();
    return query.value(0).toInt();
}

int DomPartenariat::getNotificationFromDB()
{
    QSqlQuery query;

    QString fileName="notification.txt";
    QFile file(fileName);
    file.open(QIODevice::WriteOnly|QIODevice::Text);
    QTextStream out(&file);



    query.prepare("SELECT * FROM "+getTableName());
    query.exec();

    int dateDebutNo = query.record().indexOf("DATE_DEBUT");
    int anneeReconductionNo = query.record().indexOf("ANNEES_RECONDUCTION");
    int partenaireNo= query.record().indexOf("PARTENAIRE");
    int notificationNo = query.record().indexOf("NOTIFICATION");
    int numberOfNotification=0;
    QDate currentDate=QDate::currentDate();
    int dateReconduction;

    while (query.next()){
        dateReconduction=query.value(anneeReconductionNo).toInt();
        if (query.value(notificationNo).toInt()) {// ==1
            if (dateReconduction<currentDate.year()){
                numberOfNotification++;
                out<<"La partenariat signée avec "+query.value(partenaireNo).toString()+" est expirée."<<endl;

            }
            else if (dateReconduction==currentDate.year()){
                numberOfNotification++;
                out<<"La partenariat signée avec "+query.value(partenaireNo).toString()+" touche à sa fin."<<endl;
            }
        }


    }


    file.close();

    return numberOfNotification;
}

QMap <QString,QString> DomPartenariat::getMapNotification(){

    QMap <QString,QString> mapNotification;
    QSqlQuery query;
    query.prepare("SELECT * FROM "+getTableName());
    query.exec();
    int anneeReconductionNo = query.record().indexOf("ANNEES_RECONDUCTION");
    int partenaireNo= query.record().indexOf("PARTENAIRE");
    int dateReconduction;
    QDate currentDate=QDate::currentDate();

    while (query.next()){
        dateReconduction=query.value(anneeReconductionNo).toInt();

        if (dateReconduction<currentDate.year()){
            mapNotification["La partenariat signée avec "+query.value(partenaireNo).toString()+" est expirée."]=query.value(partenaireNo).toString();
        }
        else if (dateReconduction==currentDate.year()){
            mapNotification["La partenariat signée avec "+query.value(partenaireNo).toString()+" touche à sa fin."]=query.value(partenaireNo).toString();
        }
    }

    return mapNotification;
}

int DomPartenariat::getNotification()
{
    QSqlQuery query;
    query.prepare("SELECT NOTIFICATION FROM "+getTableName()+" WHERE PARTENAIRE=:partenaire");
    query.bindValue(":partenaire",this->partenaire);
    query.exec();
    int notificationNo = query.record().indexOf("NOTIFICATION");
    query.first();
    return query.value(notificationNo).toInt();
}
void DomPartenariat::setNotification(int notification){
    QSqlQuery query;
    query.prepare("UPDATE "+getTableName()+" SET NOTIFICATION=:notification WHERE PARTENAIRE=:partenaire");
    query.bindValue(":notification",notification);
    query.bindValue(":partenaire",this->partenaire);
    query.exec();
}

bool DomPartenariat::getStatePartenariat(){
    QSqlQuery query;
    QDate currentDate=QDate::currentDate();
    query.prepare("SELECT * FROM "+getTableName()+" WHERE PARTENAIRE=:partenaire");
    query.bindValue(":partenaire",this->partenaire);
    query.exec();
    int anneeReconductionNo = query.record().indexOf("ANNEES_RECONDUCTION");
    query.first();
    int dateReconduction=query.value(anneeReconductionNo).toInt();

    if (dateReconduction<currentDate.year())
            return false;
   else

        return true;

}

QVector <QString> DomPartenariat::getListPartenariatActif(){

    QVector <QString> vectPartenariatActif;
    QSqlQuery query;
    query.prepare("SELECT * FROM "+getTableName());
    query.exec();
    int anneeReconductionNo = query.record().indexOf("ANNEES_RECONDUCTION");
    int partenaireNo= query.record().indexOf("PARTENAIRE");
    int dateReconduction;
    QDate currentDate=QDate::currentDate();

    while (query.next()){
        dateReconduction=query.value(anneeReconductionNo).toInt();

        if (dateReconduction>=currentDate.year()){
            vectPartenariatActif.push_back(query.value(partenaireNo).toString());
        }

    }

    return vectPartenariatActif;
}




QSqlQueryModel *DomPartenariat::getModelPartenariatActif(){

    QVector <QString> vectColumns,vectPartenaireActif;

    vectColumns=getColumnName();
    vectPartenaireActif=getListPartenariatActif();

    QString selectColumns="";
    QString partenaireActif="";
    for (int i=0;i<vectColumns.size();i++){
        selectColumns+=vectColumns[i];
        if (i!=vectColumns.size()-1){
            selectColumns+=',';
        }
    }
    for (int i=0;i<vectPartenaireActif.size();i++){
        partenaireActif+="PARTENAIRE='"+vectPartenaireActif[i]+"'";
        if (i!=vectPartenaireActif.size()-1){
            partenaireActif+=" OR ";
        }
    }
    qDebug()<<partenaireActif;


    QSqlQueryModel * model= new QSqlQueryModel ();
    model->setQuery("SELECT "+selectColumns+" FROM "+getTableName()+" WHERE "+partenaireActif);
    return model;
}


QSqlQueryModel *DomPartenariat::getModelSpecialActif(QString inputValue,QString filterChecked){
    QSqlQueryModel * model= new QSqlQueryModel ();
    QSqlQuery query;
    QVector <QString> vectColumns,vectPartenaireActif;
    vectColumns=getColumnName();
    vectPartenaireActif=getListPartenariatActif();
    QString selectColumns="",partenaireActif="AND (";
    for (int i=0;i<vectColumns.size();i++){
        selectColumns+=vectColumns[i];
        if (i!=vectColumns.size()-1){
            selectColumns+=',';
        }
    }
    for (int i=0;i<vectPartenaireActif.size();i++){
        partenaireActif+="PARTENAIRE='"+vectPartenaireActif[i]+"'";
        if (i!=vectPartenaireActif.size()-1){
            partenaireActif+=" OR ";
        }
    }
    partenaireActif+=')';
    query.prepare("SELECT "+selectColumns+" FROM "+getTableName()+" WHERE "+filterChecked+" LIKE '%' || :inputValue || '%' "+partenaireActif);
    query.bindValue(":inputValue",inputValue);
    query.exec();
    model->setQuery(query);
    return model;
}
/***DEBUT CLASSE DomPOC ***/

DomPoc::DomPoc()
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

DomPoc::DomPoc(int ID,QString nom,QString prenom,QString institution,QString eMail,QString telephone,QString fax,QString fonction,QString commentaire)
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

DomPoc::~DomPoc()
{
    //RIEN
}


QString DomPoc::getTableName(){
    return "POC";
}


QString DomPoc::getAjoutValues()
{
    return "VALUES (NULL,:nom,:prenom,:institution,:eMail,:telephone,:fax,:fonction,:commentaire)";
}



QVector <QString> DomPoc::getColumnName()
{

    QVector <QString> vectColumns;
    QSqlQuery query;
    query.prepare("PRAGMA table_info("+getTableName()+')');
    query.exec();

    while (query.next()){
        vectColumns.push_back(query.value(1).toString());
    }
    return vectColumns;

}

QSqlQuery DomPoc::queryPrepareAjout()
{

    QSqlQuery query;
    query.prepare("INSERT INTO  "+getTableName()+" "+getAjoutValues());

    query.bindValue(":nom",this->nom);
    query.bindValue(":prenom",this->prenom);
    query.bindValue(":institution",this->institution);
    query.bindValue(":eMail",this->eMail);
    query.bindValue(":telephone",this->telephone);
    query.bindValue(":fax",this->fax);
    query.bindValue(":fonction",this->fonction);
    query.bindValue(":commentaire",this->commentaire);


    return query;
}


QString DomPoc::getUpdateValues()
{
    return "NOM=:nom,PRENOM=:prenom,INSTITUTION=:institution,EMAIL=:eMail,TELEPHONE=:telephone,FAX=:fax,FONCTION=:fonction,COMMENT=:commentaire";
}


QSqlQuery DomPoc::queryPrepareUpdate(int ID)
{

    QSqlQuery query;
    query.prepare("UPDATE "+getTableName()+" SET "+getUpdateValues()+" WHERE ID=:ID");

    query.bindValue(":ID",ID);
    query.bindValue(":nom",this->nom);
    query.bindValue(":prenom",this->prenom);
    query.bindValue(":institution",this->institution);
    query.bindValue(":eMail",this->eMail);
    query.bindValue(":telephone",this->telephone);
    query.bindValue(":fax",this->fax);
    query.bindValue(":fonction",this->fonction);
    query.bindValue(":commentaire",this->commentaire);


    return query;
}


void DomPoc::setData(QSqlQuery query)
{
    int IDNo = query.record().indexOf("ID");
    int nomNo = query.record().indexOf("NOM");
    int prenomNo = query.record().indexOf("PRENOM");
    int institutionNo = query.record().indexOf("INSTITUTION");
    int emailNo = query.record().indexOf("EMAIL");
    int telephoneNo = query.record().indexOf("TELEPHONE");
    int faxNo  = query.record().indexOf("FAX");
    int fonctionNo = query.record().indexOf("FONCTION");
    int commentNo = query.record().indexOf("COMMENT");


    this->ID = query.value(IDNo).toInt();
    this->nom = query.value(nomNo).toString();
    this->prenom = query.value(prenomNo).toString();
    this->institution = query.value(institutionNo).toString();
    this->eMail = query.value(emailNo).toString();
    this->telephone = query.value(telephoneNo).toString();
    this->fax = query.value(faxNo).toString();
    this->fonction = query.value(fonctionNo).toString();
    this->commentaire = query.value(commentNo).toString();

}


int DomPoc::found(QString nom, QString prenom, QString mail)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM "+ getTableName()+ " WHERE NOM=:nom AND PRENOM=:prenom AND EMAIL=:mail ");
    query.bindValue(":nom",nom);
    query.bindValue(":prenom",prenom);
    query.bindValue(":mail",mail);
    query.exec();
    query.next();
    qDebug()<<query.value(0).toInt();
    return query.value(0).toInt();
}


/***FIN CLASSE POC***/

DomInstitution::DomInstitution(){

    this->ID=0;
    this->nom="";
    this->pays="";
}
DomInstitution::DomInstitution(int ID, QString nom, QString pays){

    this->ID=ID;
    this->nom=nom;
    this->pays=pays;

}
DomInstitution::~DomInstitution(){
    // RIEN
}

QString DomInstitution::getTableName(){
    return "INSTITUTION";
}
QString DomInstitution::getAjoutValues(){
    return "VALUES (NULL,:nom,:pays)";
}
QString DomInstitution::getUpdateValues(){
    return "NOM=:nom,PAYS=:pays";
}



QVector <QString> DomInstitution::getColumnName()
{

    QVector <QString> vectColumns;
    QSqlQuery query;
    query.prepare("PRAGMA table_info("+getTableName()+')');
    query.exec();

    while (query.next()){
        vectColumns.push_back(query.value(1).toString());
    }
    return vectColumns;

}

QSqlQuery DomInstitution::queryPrepareUpdate(int ID)
{

    QSqlQuery query;
    query.prepare("UPDATE "+getTableName()+" SET "+getUpdateValues()+" WHERE ID=:ID");

    query.bindValue(":ID",ID);
    query.bindValue(":nom",this->nom);
    query.bindValue(":pays",this->pays);


    return query;
}

QSqlQuery DomInstitution::queryPrepareAjout()
{

    QSqlQuery query;
    query.prepare("INSERT INTO  "+getTableName()+" "+getAjoutValues());
    query.bindValue(":nom",this->nom);
    query.bindValue(":pays",this->pays);
    return query;

}

void DomInstitution::setData(QSqlQuery query)
{
    int IDNo = query.record().indexOf("ID");
    int nomNo = query.record().indexOf("NOM");
    int paysNo = query.record().indexOf("PAYS");


    this->ID = query.value(IDNo).toInt();
    this->nom = query.value(nomNo).toString();
    this->pays = query.value(paysNo).toString();


}

int DomInstitution::found(QString nom, QString pays)
{
    QSqlQuery query;
    query.prepare("SELECT COUNT(*) FROM "+ getTableName()+ " WHERE NOM=:nom AND PAYS=:pays ");
    query.bindValue(":nom",nom);
    query.bindValue(":pays",pays);
    query.exec();
    query.next();
    qDebug()<<query.value(0).toInt();
    return query.value(0).toInt();
}









