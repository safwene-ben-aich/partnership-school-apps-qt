#ifndef FICHEPARTENARIAT_H
#define FICHEPARTENARIAT_H

#include <QDialog>
#include <dombase.h>
#include <defs.h>
namespace Ui {
class fichePartenariat;
}

class fichePartenariat : public QDialog
{
    Q_OBJECT
    
public:
    explicit fichePartenariat(QWidget *parent = 0);
    ~fichePartenariat();
    
    void setModalCommentaires();
    void verifAjout();
    void setFichePartenariat();
    void cleanControlFiche();

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

    bool VerifPartenaire();

    bool VerifDuree();
    bool VerifdateDebut();
    bool VerifType();
    bool VerifAnneeReconduction();
    bool VerifPays();
    bool VerifPoc();

private slots:
    void on_pushButton_supprimerPartenariat_clicked();

    void on_pushButton_sauvegarderPartenariat_clicked();

    void on_pushButton_bloquedPartenariat_clicked();

private:
    QPixmap PixFalseIcon,PixTrueIcon;
    int IDtoDisplay;
    bool Blocked;
    bool ajout;
    DomPartenariat domPartenariat;
    Ui::fichePartenariat *ui;
};

#endif // FICHEPARTENARIAT_H
