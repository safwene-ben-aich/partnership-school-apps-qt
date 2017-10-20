#include "fichepoc.h"
#include "ui_fichepoc.h"

fichePOC::fichePOC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fichePOC)
{
    ui->setupUi(this);
    this->Blocked=true;
    this->ajout=false;
    PixTrueIcon=QPixmap("icones/True_icon.png");
    PixFalseIcon=QPixmap("icones/False_icon.png");
}

fichePOC::~fichePOC()
{
    delete ui;
}


void fichePOC::verifAjout()
{

    if (this->ajout){
        this->setWindowTitle("Nouvelle fiche POC");
        ui->pushButton_bloquedPOC->setEnabled(false);
        ui->pushButton_supprimerPOC->setEnabled(false);
        ui->tableView_commentairePOC->setEnabled(false);
    }
}


void fichePOC::setModalCommentaires(){
    ui->tableView_commentairePOC->setModel(domPOC.getModelCommentaire(IDtoDisplay));

    ui->tableView_commentairePOC->verticalHeader()->setVisible(false);
    ui->tableView_commentairePOC->model()->removeColumn(0); // NE PAS AFFICHER ID ET ID_MOBILITE DANS LE MODEL
    ui->tableView_commentairePOC->model()->removeColumn(0);

    ui->tableView_commentairePOC->setVisible(false);
    ui->tableView_commentairePOC->resizeColumnsToContents();
    ui->tableView_commentairePOC->resizeRowsToContents();
    ui->tableView_commentairePOC->setVisible(true);
    ui->tableView_commentairePOC->horizontalHeader()->setStretchLastSection(true);
}

void fichePOC::setFichePOC(){
    domPOC.getData(IDtoDisplay);

    ui->lineEdit_nomPOC->setText(domPOC.getNom());
    ui->lineEdit_prenomPOC->setText(domPOC.getPrenom());
    ui->lineEdit_institutionPOC->setText(domPOC.getInstitution());
    ui->lineEdit_mailPOC->setText(domPOC.getEMail());
    ui->lineEdit_telephonePOC->setText(domPOC.getTelephone());
    ui->lineEdit_FAXPOC->setText(domPOC.getFax());
    ui->plainTextEdit_fonctionPOC->setPlainText(domPOC.getFonction());
    ui->plainTextEdit_commentairePOC->setPlainText(domPOC.getCommentaire());


    cleanControlFiche();
}

void fichePOC::cleanControlFiche()
{
    ui->label_nomPOCControl->clear();
    ui->label_prenomPOCControl->clear();
    ui->label_institutionControl->clear();
    ui->label_mailControl->clear();
    ui->label_telephoneControl->clear();
    ui->label_faxControl->clear();
    ui->label_fonctionControl->clear();
    ui->label_commentairePOCControl->clear();
}



bool fichePOC::VerifNom()
{

    if (ui->lineEdit_nomPOC->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->lineEdit_nomPOC->text().isEmpty())
    {
        ui->label_nomPOCControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_nomPOCControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool fichePOC::VerifPrenom()
{

    if (ui->lineEdit_prenomPOC->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->lineEdit_prenomPOC->text().isEmpty())
    {
        ui->label_prenomPOCControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_prenomPOCControl->setPixmap(PixTrueIcon);
        return true;
    }

}


bool fichePOC::VerifInstitution()
{

    if (ui->lineEdit_institutionPOC->text().isEmpty() || ui->lineEdit_institutionPOC->text().contains(QRegExp("[^a-zA-Z0-9ÀÁÂÃÄÅàáâãäåÒÓÔÕÖØòóôõöøÈÉÊËèéêëÇçÌÍÎÏìíîïÙÚÛÜùúûüÿÑñ_- ]")))
    {
        ui->label_institutionControl->setPixmap(PixFalseIcon);
        return false;
    }
    else
    {
        ui->label_institutionControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool fichePOC::VerifMail(){

    if (ui->lineEdit_mailPOC->text().isEmpty() || (ui->lineEdit_mailPOC->text().lastIndexOf("@",-1)>ui->lineEdit_mailPOC->text().lastIndexOf(".",-1)) || ui->lineEdit_mailPOC->text().lastIndexOf("@",-1)==-1 || ui->lineEdit_mailPOC->text().lastIndexOf("@",-1)==-1)
    {
        ui->label_mailControl->setPixmap(PixFalseIcon);
        return false;

    }
    else
    {
        ui->label_mailControl->setPixmap(PixTrueIcon);
        return true;


    }
}

bool fichePOC::VerifTelephone()
{

    if (ui->lineEdit_telephonePOC->text().isEmpty() || ui->lineEdit_telephonePOC->text().contains(QRegExp("[^a-zA-Z0-9ÀÁÂÃÄÅàáâãäåÒÓÔÕÖØòóôõöøÈÉÊËèéêëÇçÌÍÎÏìíîïÙÚÛÜùúûüÿÑñ_- ]")))
    {
        ui->label_telephoneControl->setPixmap(PixFalseIcon);
        return false;
    }
    else
    {
        ui->label_telephoneControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool fichePOC::VerifFax()
{

    if (ui->lineEdit_FAXPOC->text().isEmpty() || ui->lineEdit_FAXPOC->text().contains(QRegExp("[^a-zA-Z0-9ÀÁÂÃÄÅàáâãäåÒÓÔÕÖØòóôõöøÈÉÊËèéêëÇçÌÍÎÏìíîïÙÚÛÜùúûüÿÑñ_- ]")))
    {
        ui->label_faxControl->setPixmap(PixFalseIcon);
        return false;
    }
    else
    {
        ui->label_faxControl->setPixmap(PixTrueIcon);
        return true;
    }

}
bool fichePOC::VerifFonction()
{

    if (ui->plainTextEdit_fonctionPOC->toPlainText().isEmpty()) {

        ui->label_fonctionControl->setPixmap(PixFalseIcon);
        return false;
    }
    else
    {
        ui->label_fonctionControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool fichePOC::VerifCommentaire()
{
    ui->label_commentairePOCControl->setPixmap(PixTrueIcon);
    return true;
}






void fichePOC::on_lineEdit_nomPOC_cursorPositionChanged(int arg1, int arg2)
{
    VerifNom();
}

void fichePOC::on_lineEdit_prenomPOC_cursorPositionChanged(int arg1, int arg2)
{
    VerifPrenom();
}

void fichePOC::on_lineEdit_institutionPOC_cursorPositionChanged(int arg1, int arg2)
{
    VerifInstitution();
}

void fichePOC::on_lineEdit_mailPOC_cursorPositionChanged(int arg1, int arg2)
{
    VerifMail();
}

void fichePOC::on_lineEdit_telephonePOC_cursorPositionChanged(int arg1, int arg2)
{
    VerifTelephone();
}

void fichePOC::on_lineEdit_FAXPOC_cursorPositionChanged(int arg1, int arg2)
{
    VerifFax();
}

void fichePOC::on_plainTextEdit_fonctionPOC_cursorPositionChanged()
{
    VerifFonction();
}

void fichePOC::on_plainTextEdit_commentairePOC_cursorPositionChanged()
{
    VerifCommentaire();
}



void fichePOC::on_pushButton_sauvegarderPOC_clicked()
{


    if (!this->ajout)
    {

        domPOC.setNom(ui->lineEdit_nomPOC->text());
        domPOC.setPrenom(ui->lineEdit_prenomPOC->text());
        domPOC.setInstitution(ui->lineEdit_institutionPOC->text());
        domPOC.setEMail(ui->lineEdit_mailPOC->text());
        domPOC.setTelephone(ui->lineEdit_telephonePOC->text());
        domPOC.setFax(ui->lineEdit_FAXPOC->text());
        domPOC.setFonction(ui->plainTextEdit_fonctionPOC->toPlainText());

        if (this->Blocked)
        {
            QMessageBox::critical(this,
                                  tr("PARTENARIAT ESPRIT"),
                                  tr("L'interface est bloquée, Veuillez la débloquer !") );
        }

        else
        {


            VerifNom();
            VerifPrenom();
            VerifInstitution();
            VerifMail();
            VerifTelephone();
            VerifFax();
            VerifFonction();
            VerifCommentaire();




            if (VerifNom() && VerifPrenom() && VerifInstitution() && VerifMail() && VerifTelephone() && VerifFax() && VerifFonction() && VerifCommentaire())
            {

                if (domPOC.update(IDtoDisplay))
                {
                    QMessageBox::information(this,
                                             tr("PARTENARIAT ESPRIT"),
                                             tr("POC modifié avec sucées!"));

                }
                else
                {


                    QMessageBox::critical(this,
                                          tr("PARTENARIAT ESPRIT"),
                                          tr("POC n'as pas été modifié, Un erreur s'est produit lors de l'insértion du POC  à la base de données !"));


                }
            }

            else
            {

                QMessageBox::critical(this,
                                      tr("PARTENARIAT ESPRIT"),
                                      tr("POC n'as pas été modifié, Veuillez verifier les champs à saisir !"));

            }
            if (!ui->plainTextEdit_commentairePOC->toPlainText().isEmpty())
            {
                domPOC.addComment(IDtoDisplay,ui->plainTextEdit_commentairePOC->toPlainText(),QDate::currentDate().toString("dd/MM/yyyy"));
            }



        }
    }

    else
    {

        domPOC.setNom(ui->lineEdit_nomPOC->text());
        domPOC.setPrenom(ui->lineEdit_prenomPOC->text());
        domPOC.setInstitution(ui->lineEdit_institutionPOC->text());
        domPOC.setEMail(ui->lineEdit_mailPOC->text());
        domPOC.setTelephone(ui->lineEdit_telephonePOC->text());
        domPOC.setFax(ui->lineEdit_FAXPOC->text());
        domPOC.setFonction(ui->plainTextEdit_fonctionPOC->toPlainText());

        VerifNom();
        VerifPrenom();
        VerifInstitution();
        VerifMail();
        VerifTelephone();
        VerifFax();
        VerifFonction();
        VerifCommentaire();




        if (VerifNom() && VerifPrenom() && VerifInstitution() && VerifMail() && VerifTelephone() && VerifFax() && VerifFonction() && VerifCommentaire())
        {

            if (domPOC.found(domPOC.getNom(),domPOC.getPrenom(),domPOC.getEMail())<1)
            {
                if (domPOC.ajout())
                {
                    QMessageBox::information(this,
                                             tr("PARTENARIAT ESPRIT"),
                                             tr("POC ajouté avec sucées!"));
                }
            }

            else
            {
                QMessageBox::critical(this,
                                      tr("PARTENARIAT ESPRIT"),
                                      tr("POC n'as pas été ajouté, Cet POC existe déjà dans la base de données !") );
            }

        }
        else
        {
            QMessageBox::critical(this,
                                  tr("PARTENARIAT ESPRIT"),
                                  tr("POC n'as pas été ajouté, Veuillez verifier les champs à saisir !") );

        }


        if (!ui->plainTextEdit_commentairePOC->toPlainText().isEmpty())
        {
            domPOC.addComment(domPOC.getLastID(),ui->plainTextEdit_commentairePOC->toPlainText(),QDate::currentDate().toString("dd/MM/yyyy"));
        }

    }



}








void fichePOC::on_pushButton_bloquedPOC_clicked()
{
    if (this->Blocked){
        ui->pushButton_bloquedPOC->setText("Bloquer");
    }
    else {
        ui->pushButton_bloquedPOC->setText("Debloquer");

    }
    this->Blocked=!Blocked;
}

void fichePOC::on_pushButton_supprimerPOC_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Supprimer POC", "Vous-etes sur de vouloir supprimer le POC ?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {

        if (domPOC.supprime(IDtoDisplay)){
            QMessageBox::information(
                        this,
                        tr("PARTENARIAT ESPRIT"),
                        tr("Le POC a été supprimer avec sucées !") );
                        this->hide();


        }
    }
}
