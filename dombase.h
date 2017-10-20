#ifndef DOMBASE_H
#define DOMBASE_H
#include "defs.h"



class DomBase
{

public :
    DomBase();
    ~DomBase();

    bool ajout();
    bool supprime(int);
    bool update(int);
    bool addComment(int,QString,QString);
    void getData(int);
    int getCount();
    int getLastID();
    QVector <QString> getListPays();
    QSqlQueryModel *getModelGlobal();
    QSqlQueryModel *getModelSpecial(QString,QString);
    QSqlQueryModel *getModelCommentaire(int);
    virtual QString getTableName() = 0;
    virtual QString getAjoutValues() = 0;
    virtual QString getUpdateValues() = 0;
    virtual QVector <QString> getColumnName() = 0;// Elle peut être déclarer seulement dans DomBase
    virtual QSqlQuery queryPrepareAjout() = 0;
    virtual QSqlQuery queryPrepareUpdate(int) = 0;
    virtual void setData(QSqlQuery) = 0;

    QVector<double> getCountPays();
    QVector<QString> getListClasse();
    int getNombreDiplomeParClasse(QString,QString);
    int getNombreEtudiantParAnnee(int annee);
    int getNombreDiplomeParAnnee(QString diplome, int annee);
    int getNombreClasseParAnnee(QString classe, int annee);
    int getNombrePaysParAnnee(QString pays, int annee);
};




class DomMobilite : public DomBase {

private :

    int ID;
    QString nom;
    QString prenom;
    QString ecole;
    QString diplome;
    int annee;
    QString classeEsprit;
    int duree;
    QString commentairesSuivi;
    QString pays;

public :


    DomMobilite();
    DomMobilite(int,QString,QString,QString,QString, int,QString, int,QString,QString);
    ~DomMobilite();

    QString getTableName();
    QString getAjoutValues();
    QString getUpdateValues();
    QVector <QString>  getColumnName();
    QSqlQuery queryPrepareAjout();
    int found(QString nom, QString prenom, QString classe);
    QSqlQuery queryPrepareUpdate(int);
    void setData(QSqlQuery);

    void setNom(QString nom)
    {
        this->nom = nom;
    }
    QString getNom()
    {
        return this->nom;
    }
    void setPrenom(QString prenom)
    {
        this->prenom = prenom;
    }
    QString getPrenom()
    {
        return this->prenom;
    }
    void setEcole(QString ecole)
    {
        this->ecole = ecole;
    }
    QString getEcole()
    {
        return this->ecole;
    }
    void setDiplome(QString diplome)
    {
        this->diplome = diplome;
    }
    QString getDiplome()
    {
        return this->diplome;
    }
    void setClasseEsprit(QString classeEsprit)
    {
        this->classeEsprit = classeEsprit;
    }
    QString getClasseEsprit()
    {
        return this->classeEsprit;
    }
    void setCommentairesSuivi(QString commentairesSuivi)
    {
        this->commentairesSuivi = commentairesSuivi;
    }
    QString getCommentairesSuivi()
    {
        return this->commentairesSuivi;
    }
    void setPays(QString pays)
    {
        this->pays = pays;
    }
    QString getPays()
    {
        return this->pays;
    }
    void setID( int ID)
    {
        this->ID = ID;
    }
    int getID()
    {
        return this->ID;
    }
    void setAnnee( int annee)
    {
        this->annee = annee;
    }
    int getAnnee()
    {
        return this->annee;
    }
    void setDuree( int duree)
    {
        this->duree = duree;
    }
    int getDuree()
    {
        return this->duree;
    }


};


class DomPartenariat : public DomBase {

private :

    int ID;
    QString partenaire;
    QString dateDebut;
    int duree;
    QString type;
    int annesReconduction;
    QString description;
    QString commentaire;
    QString poc;
    QString realisations;
    QString pays;

public:
    void setAnnesReconduction(int annesReconduction)
    {
        this->annesReconduction = annesReconduction;
    }
    int getAnnesReconduction()
    {
        return this->annesReconduction;
    }
    void setDuree(int duree)
    {
        this->duree = duree;
    }
    int getDuree()
    {
        return this->duree;
    }
    void setID(int ID)
    {
        this->ID = ID;
    }
    int getID()
    {
        return this->ID;
    }

    void setPartenaire(QString partenaire)
    {
        this->partenaire = partenaire;
    }
    QString getPartenaire()
    {
        return this->partenaire;
    }
    void setDateDebut(QString dateDebut)
    {
        this->dateDebut = dateDebut;
    }
    QString getDateDebut()
    {
        return this->dateDebut;
    }
    void setType(QString type)
    {
        this->type = type;
    }
    QString getType()
    {
        return this->type;
    }
    void setDescription(QString description)
    {
        this->description = description;
    }
    QString getDescription()
    {
        return this->description;
    }
    void setCommentaire(QString commentaire)
    {
        this->commentaire = commentaire;
    }
    QString getCommentaire()
    {
        return this->commentaire;
    }
    void setPoc(QString poc)
    {
        this->poc = poc;
    }
    QString getPoc()
    {
        return this->poc;
    }
    void setRealisations(QString realisations)
    {
        this->realisations = realisations;
    }
    QString getRealisations()
    {
        return this->realisations;
    }
    void setPays(QString pays)
    {
        this->pays = pays;
    }
    QString getPays()
    {
        return this->pays;
    }
    int getNotification();
    void setNotification(int);




    DomPartenariat();
    DomPartenariat(int,QString,QString,int,QString,int,QString,QString,QString,QString,QString);
    ~DomPartenariat();
    QString getTableName();
    QString getAjoutValues();
    QVector <QString>  getColumnName();
    QString getUpdateValues();
    QSqlQuery queryPrepareAjout();
    int found(QString partenaireAtester);
    QSqlQuery queryPrepareUpdate(int);
    void setData(QSqlQuery);
    int getNotificationFromDB();
    QMap<QString, QString> getMapNotification();
    bool getStatePartenariat();
    QVector<QString> getListPartenariatActif();
    QSqlQueryModel *getModelPartenariatActif();
    QSqlQueryModel *getModelSpecialActif(QString inputValue, QString filterChecked);
};

class DomPoc : public DomBase {

private :

    int ID;
    QString nom;
    QString prenom;
    QString institution;
    QString eMail;
    QString telephone;
    QString fax;
    QString fonction;
    QString commentaire;

public:

    DomPoc();

    DomPoc(int,QString,QString,QString,QString,QString,QString,QString,QString);
    ~DomPoc();



    void setID(int ID)
    {
        this->ID=ID;
    }
    int getID()
    {
        return this->ID;
    }

    void setNom(QString nom)
    {
        this->nom = nom;
    }
    QString getNom()
    {
        return this->nom;
    }
    void setPrenom(QString prenom)
    {
        this->prenom = prenom;
    }
    QString getPrenom()
    {
        return this->prenom;
    }
    void setInstitution(QString institution)
    {
        this->institution = institution;
    }
    QString getInstitution()
    {
        return this->institution;
    }
    void setEMail(QString eMail)
    {
        this->eMail = eMail;
    }
    QString getEMail()
    {
        return this->eMail;
    }
    void setTelephone(QString telephone)
    {
        this->telephone = telephone;
    }
    QString getTelephone()
    {
        return this->telephone;
    }
    void setFax(QString fax)
    {
        this->fax = fax;
    }
    QString getFax()
    {
        return this->fax;
    }
    void setFonction(QString fonction)
    {
        this->fonction = fonction;
    }
    QString getFonction()
    {
        return this->fonction;
    }
    void setCommentaire(QString commentaire)
    {
        this->commentaire = commentaire;
    }
    QString getCommentaire()
    {
        return this->commentaire;
    }


    QString getTableName();
    QString getAjoutValues();
    QVector <QString>  getColumnName();
    QString getUpdateValues();
    QSqlQuery queryPrepareAjout();
    QSqlQuery queryPrepareUpdate(int ID);
    void setData(QSqlQuery);
    int found(QString,QString,QString);
};

class DomInstitution : public DomBase {

private :
    int ID;
    QString nom;
    QString pays;

public :
    DomInstitution();
    DomInstitution(int,QString,QString);
    ~DomInstitution();

    void setID(int ID){
        this->ID=ID;
    }
    void setNom(QString nom){
        this->nom=nom;
    }
    void setPays(QString pays){
        this->pays=pays;
    }
    int getID(){
        return this->ID;
    }
    QString getNom(){
        return this->nom;
    }
    QString getPays(){
        return this->pays;
    }

    QString getTableName();
    QString getAjoutValues();
    QString getUpdateValues();
    QVector <QString>  getColumnName();
    QSqlQuery queryPrepareAjout();
    QSqlQuery queryPrepareUpdate(int ID);
    void setData(QSqlQuery query);
    int found(QString,QString);

};





#endif // DOMBASE_H
