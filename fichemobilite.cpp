#include "fichemobilite.h"
#include "ui_fichemobilite.h"

ficheMobilite::ficheMobilite(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ficheMobilite)
{

    ui->setupUi(this);
    this->Blocked=true;
    this->ajout=false;

    this->setWindowTitle("Fiche mobilite");
    PixTrueIcon=QPixmap("icones/True_icon.png");
    PixFalseIcon=QPixmap("icones/False_icon.png");
}

ficheMobilite::~ficheMobilite()
{
    delete ui;
}

void ficheMobilite::verifAjout()
{

    if (this->ajout){
        this->setWindowTitle("Nouvelle fiche mobilite");
        ui->pushButton_bloquedMobilite->setEnabled(false);
        ui->pushButton_supprimerMobilite->setEnabled(false);
        ui->tableView->setEnabled(false);
    }
}



void ficheMobilite::setModalCommentaires(){
    ui->tableView->setModel(domMobilite.getModelCommentaire(IDtoDisplay));

    ui->tableView->verticalHeader()->setVisible(false);
    ui->tableView->model()->removeColumn(0); // NE PAS AFFICHER ID ET ID_MOBILITE DANS LE MODEL
    ui->tableView->model()->removeColumn(0);

    ui->tableView->setVisible(false);
    ui->tableView->resizeColumnsToContents();
    ui->tableView->resizeRowsToContents();
    ui->tableView->setVisible(true);
    ui->tableView->horizontalHeader()->setStretchLastSection(true);
}


void ficheMobilite::setFicheMobilite(){
    domMobilite.getData(IDtoDisplay);

    ui->lineEdit_nom->setText(domMobilite.getNom());
    ui->lineEdit_prenom->setText(domMobilite.getPrenom());
    ui->lineEdit_classe->setText(domMobilite.getClasseEsprit());
    ui->lineEdit_ecole->setText(domMobilite.getEcole());
    ui->lineEdit_diplome->setText(domMobilite.getDiplome());
    ui->lineEdit_pays->setText(domMobilite.getPays());
    ui->lineEdit_annee->setText(QString::number(domMobilite.getAnnee()));
    ui->lineEdit_duree->setText(QString::number(domMobilite.getDuree()));
    cleanControlFiche();
}



void ficheMobilite::on_pushButton_supprimerMobilite_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Supprimer Eleve", "Vous-etes sur de vouloir supprimer l'éleve ?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {

        if (domMobilite.supprime(IDtoDisplay)){
            QMessageBox::information(
                        this,
                        tr("PARTENARIAT ESPRIT"),
                        tr("L'Eleve a été supprimer avec sucées !") );


                        this->hide();


        }
    }
}


void ficheMobilite::cleanControlFiche()
{

    ui->label_nomControl->clear();
    ui->label_prenomControl->clear();
    ui->label_classeControl->clear();
    ui->label_ecoleControl->clear();
    ui->label_diplomeControl->clear();
    ui->label_paysControl->clear();
    ui->label_anneeControl->clear();
    ui->label_dureeControl->clear();
}




bool ficheMobilite::VerifNom()
{

    if (ui->lineEdit_nom->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->lineEdit_nom->text().isEmpty())
    {
        ui->label_nomControl->setPixmap(PixFalseIcon);
        ui->label_nomControl->setToolTip( tr("Le nom de l'eleve doit comporté seulement des lettres alphabétique !"));
        return false;
    }

    else
    {
        ui->label_nomControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool ficheMobilite::VerifPrenom()
{

    if (ui->lineEdit_prenom->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->lineEdit_prenom->text().isEmpty())
    {
        ui->label_prenomControl->setPixmap(PixFalseIcon);
        ui->label_prenomControl->setToolTip( tr("Le nom de l'eleve doit comporté seulement des lettres alphabétique !"));
        return false;
    }

    else
    {
        ui->label_prenomControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool ficheMobilite::VerifClasse()
{

    if (ui->lineEdit_classe->text().isEmpty() || ui->lineEdit_classe->text().contains(QRegExp("[^0-9a-zA-Z]")))
    {
        ui->label_classeControl->setPixmap(PixFalseIcon);
        return false;
    }
    else
    {
        ui->label_classeControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool ficheMobilite::VerifEcole()
{

    if (ui->lineEdit_ecole->text().isEmpty() || ui->lineEdit_ecole->text().contains(QRegExp("[^a-zA-Z0-9ÀÁÂÃÄÅàáâãäåÒÓÔÕÖØòóôõöøÈÉÊËèéêëÇçÌÍÎÏìíîïÙÚÛÜùúûüÿÑñ_- ]")))
    {
        ui->label_ecoleControl->setPixmap(PixFalseIcon);
        return false;
    }
    else
    {
        ui->label_ecoleControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool ficheMobilite::VerifDiplome()
{

    if (ui->lineEdit_diplome->text().isEmpty() || ui->lineEdit_diplome->text().contains(QRegExp("[^a-zA-Z0-9ÀÁÂÃÄÅàáâãäåÒÓÔÕÖØòóôõöøÈÉÊËèéêëÇçÌÍÎÏìíîïÙÚÛÜùúûüÿÑñ_- ]")))
    {
        ui->label_diplomeControl->setPixmap(PixFalseIcon);
        return false;
    }
    else
    {
        ui->label_diplomeControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool ficheMobilite::VerifPays()
{

    if (ui->lineEdit_pays->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->lineEdit_pays->text().isEmpty())
    {
        ui->label_paysControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_paysControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool ficheMobilite::VerifAnnee()
{

    if (ui->lineEdit_annee->text().contains(QRegExp("[^0-9]") ) || ui->lineEdit_annee->text().isEmpty())
    {
        ui->label_anneeControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_anneeControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool ficheMobilite::VerifDuree()
{

    if (ui->lineEdit_duree->text().contains(QRegExp("[^0-9]") ) || ui->lineEdit_duree->text().isEmpty())
    {
        ui->label_dureeControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_dureeControl->setPixmap(PixTrueIcon);
        return true;
    }

}




void ficheMobilite::on_lineEdit_nom_cursorPositionChanged(int arg1, int arg2)
{

    //ui->lineEdit_nom->setStyleSheet("QLineEdit { background: rgb(220, 0, 0); }"); FAIRE CHANGER LA COULEUR DE L'INPUT SELON LES CONDITIONS DE SAISIE
    VerifNom();
}

void ficheMobilite::on_lineEdit_prenom_cursorPositionChanged(int arg1, int arg2)
{
    VerifPrenom();
}

void ficheMobilite::on_lineEdit_classe_cursorPositionChanged(int arg1, int arg2)
{
    VerifClasse();
}

void ficheMobilite::on_lineEdit_ecole_cursorPositionChanged(int arg1, int arg2)
{
    VerifEcole();
}

void ficheMobilite::on_lineEdit_diplome_cursorPositionChanged(int arg1, int arg2)
{
    VerifDiplome();
}

void ficheMobilite::on_lineEdit_pays_cursorPositionChanged(int arg1, int arg2)
{
    VerifPays();
}

void ficheMobilite::on_lineEdit_annee_cursorPositionChanged(int arg1, int arg2)
{
    VerifAnnee();
}

void ficheMobilite::on_lineEdit_duree_cursorPositionChanged(int arg1, int arg2)
{
    VerifDuree();
}




void ficheMobilite::on_pushButton_sauvegarderMobilite_clicked()
{


    if (!this->ajout){


        domMobilite.setNom(ui->lineEdit_nom->text());
        domMobilite.setPrenom(ui->lineEdit_prenom->text());
        domMobilite.setClasseEsprit(ui->lineEdit_classe->text());
        domMobilite.setEcole(ui->lineEdit_ecole->text());
        domMobilite.setDiplome(ui->lineEdit_diplome->text());
        domMobilite.setPays(ui->lineEdit_pays->text());
        domMobilite.setAnnee(ui->lineEdit_annee->text().toInt());
        domMobilite.setDuree(ui->lineEdit_duree->text().toInt());
        if (this->Blocked){
            QMessageBox::critical(this,
                                  tr("PARTENARIAT ESPRIT"),
                                  tr("L'interface est bloquée, Veuillez la débloquer !") );
        }
        else{


            VerifNom();
            VerifPrenom();
            VerifClasse();
            VerifEcole();
            VerifDiplome();
            VerifPays();
            VerifAnnee();
            VerifDuree();




            if (VerifNom() && VerifPrenom() && VerifClasse() && VerifEcole() && VerifDiplome() && VerifPays() && VerifAnnee() && VerifDuree()){

                if (domMobilite.update(IDtoDisplay)){
                QMessageBox::information(this,
                                         tr("PARTENARIAT ESPRIT"),
                                         tr("Eleve modifié avec sucées!"));

            }
                else {


                    QMessageBox::critical(this,
                                          tr("PARTENARIAT ESPRIT"),
                                          tr("Eleve n'as pas été modifié, Un erreur s'est produit lors de l'insértion de l'eleve à la base de données !"));


                }
                }

            else {

                QMessageBox::critical(this,
                                      tr("PARTENARIAT ESPRIT"),
                                      tr("Eleve n'as pas été modifié, Veuillez verifier les champs à saisir !"));

            }
            if (!ui->plainTextEdit_commentaire->toPlainText().isEmpty()){
                         domMobilite.addComment(IDtoDisplay,ui->plainTextEdit_commentaire->toPlainText(),QDate::currentDate().toString("dd/MM/yyyy"));
                     }



        }
    }
        else
        {

            domMobilite.setNom(ui->lineEdit_nom->text());
            domMobilite.setPrenom(ui->lineEdit_prenom->text());
            domMobilite.setClasseEsprit(ui->lineEdit_classe->text());
            domMobilite.setEcole(ui->lineEdit_ecole->text());
            domMobilite.setDiplome(ui->lineEdit_diplome->text());
            domMobilite.setPays(ui->lineEdit_pays->text());
            domMobilite.setAnnee(ui->lineEdit_annee->text().toInt());
            domMobilite.setDuree(ui->lineEdit_duree->text().toInt());

            VerifNom();
            VerifPrenom();
            VerifClasse();
            VerifEcole();
            VerifDiplome();
            VerifPays();
            VerifAnnee();
            VerifDuree();




            if (VerifNom() && VerifPrenom() && VerifClasse() && VerifEcole() && VerifDiplome() && VerifPays() && VerifAnnee() && VerifDuree()){

                if (domMobilite.found(domMobilite.getNom(),domMobilite.getPrenom(),domMobilite.getClasseEsprit())<1){
                if (domMobilite.ajout()){
                    QMessageBox::information(this,
                                             tr("PARTENARIAT ESPRIT"),
                                             tr("Eleve ajouté avec sucées!"));
                }
            }

                else {
                    QMessageBox::critical(this,
                                          tr("PARTENARIAT ESPRIT"),
                                          tr("Eleve n'as pas été ajouté, Cet Elève existe déjà dans la base de données !") );
                }

            }
            else{
                QMessageBox::critical(this,
                                      tr("PARTENARIAT ESPRIT"),
                                      tr("Eleve n'as pas été ajouté, Veuillez verifier les champs à saisir !") );

            }


            if (!ui->plainTextEdit_commentaire->toPlainText().isEmpty()){
                domMobilite.addComment(domMobilite.getLastID(),ui->plainTextEdit_commentaire->toPlainText(),QDate::currentDate().toString("dd/MM/yyyy"));
            }



        }

    }


    void ficheMobilite::on_pushButton_bloquedMobilite_clicked()
    {

        if (this->Blocked){
            ui->pushButton_bloquedMobilite->setText("Bloquer");
        }
        else {
            ui->pushButton_bloquedMobilite->setText("Debloquer");

        }
        this->Blocked=!Blocked;


    }
