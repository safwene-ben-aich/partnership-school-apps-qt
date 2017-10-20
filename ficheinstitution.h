#ifndef FICHEINSTITUTION_H
#define FICHEINSTITUTION_H

#include <QDialog>
#include <dombase.h>
namespace Ui {
class ficheInstitution;
}

class ficheInstitution : public QDialog
{
    Q_OBJECT
    
public:
    explicit ficheInstitution(QWidget *parent = 0);
    ~ficheInstitution();
    
    void cleanControlFiche();
    void setFicheInstitution();
    void verifAjout();
    bool VerifNom();
    bool VerifPays();

    void setAjout(bool ajout){
        this->ajout=ajout;
    }
    bool getAjout(){
        return this->ajout;
    }


    void setIDtoDisplay(int IDtoDisplay){
        this->IDtoDisplay=IDtoDisplay;
    }
    int getIDtoDisplay(){
        return this->IDtoDisplay;
    }

private slots:
    void on_lineEdit_nom_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_pays_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_sauvegarderInstitution_clicked();

    void on_pushButton_bloquedInstitution_clicked();

    void on_pushButton_supprimerInstitution_clicked();

private:

    QPixmap PixFalseIcon,PixTrueIcon;
    int IDtoDisplay;
    bool Blocked;
    bool ajout;

    DomInstitution domInstitution;

    Ui::ficheInstitution *ui;
};

#endif // FICHEINSTITUTION_H
