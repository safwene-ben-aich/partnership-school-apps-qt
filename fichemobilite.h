#ifndef FICHEMOBILITE_H
#define FICHEMOBILITE_H

#include <QDialog>
#include <dombase.h>
#include <logfile.h>

namespace Ui {
class ficheMobilite;
}

class ficheMobilite : public QDialog
{
    Q_OBJECT
    
public:
    void setModalCommentaires();
    void setFicheMobilite();

    void cleanControlFiche();

    void verifAjout();

    bool VerifNom();
    bool VerifPrenom();
    bool VerifClasse();
    bool VerifEcole();
    bool VerifDiplome();
    bool VerifPays();
    bool VerifAnnee();
    bool VerifDuree();




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


    explicit ficheMobilite(QWidget *parent = 0);
    ~ficheMobilite();
    
private slots:
    void on_pushButton_supprimerMobilite_clicked();

    void on_lineEdit_nom_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_prenom_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_classe_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_ecole_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_diplome_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_pays_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_annee_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_duree_cursorPositionChanged(int arg1, int arg2);

    void on_pushButton_sauvegarderMobilite_clicked();

    void on_pushButton_bloquedMobilite_clicked();

private:
    QPixmap PixFalseIcon,PixTrueIcon;
    int IDtoDisplay;
    bool Blocked;
    bool ajout;
    DomMobilite domMobilite;
    Ui::ficheMobilite *ui;
};

#endif // FICHEMOBILITE_H
