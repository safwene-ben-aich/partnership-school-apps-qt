#ifndef FICHEPOC_H
#define FICHEPOC_H

#include <QDialog>
#include "defs.h"
#include "dombase.h"
namespace Ui {
class fichePOC;
}

class fichePOC : public QDialog
{
    Q_OBJECT
    
public:
    explicit fichePOC(QWidget *parent = 0);
    ~fichePOC();
    
    void verifAjout();
    void setModalCommentaires();
    void setFichePOC();
    void cleanControlFiche();

    bool VerifNom();
    bool VerifPrenom();
    bool VerifInstitution();
    bool VerifMail();
    bool VerifTelephone();
    bool VerifFax();
    bool VerifFonction();
    bool VerifCommentaire();


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
    void on_lineEdit_nomPOC_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_prenomPOC_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_institutionPOC_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_mailPOC_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_telephonePOC_cursorPositionChanged(int arg1, int arg2);

    void on_lineEdit_FAXPOC_cursorPositionChanged(int arg1, int arg2);



    void on_plainTextEdit_fonctionPOC_cursorPositionChanged();

    void on_plainTextEdit_commentairePOC_cursorPositionChanged();

    void on_pushButton_sauvegarderPOC_clicked();

    void on_pushButton_bloquedPOC_clicked();

    void on_pushButton_supprimerPOC_clicked();

private:
    QPixmap PixFalseIcon,PixTrueIcon;
    int IDtoDisplay;
    DomPoc domPOC;
    bool ajout;
    bool Blocked;
    Ui::fichePOC *ui;
};

#endif // FICHEPOC_H
