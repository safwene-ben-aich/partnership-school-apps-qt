#include "fichepartenariat.h"
#include "ui_fichepartenariat.h"

fichePartenariat::fichePartenariat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fichePartenariat)
{
    ui->setupUi(this);

    this->Blocked=true;
    this->ajout=false;

    this->setWindowTitle("Fiche partenariat");
    PixTrueIcon=QPixmap("icones/True_icon.png");
    PixFalseIcon=QPixmap("icones/False_icon.png");

    ui->dateEdit_dateDebut->setDate(QDate::fromString("01/01/1800","dd/MM/yyyy"));
}


void fichePartenariat::verifAjout()
{

    if (this->ajout){
        this->setWindowTitle("Nouvelle fiche partenariat");
        ui->pushButton_bloquedPartenariat->setEnabled(false);
        ui->pushButton_supprimerPartenariat->setEnabled(false);
        ui->tableView_commentaire->setEnabled(false);
    }
}


void fichePartenariat::setModalCommentaires(){
    ui->tableView_commentaire->setModel(domPartenariat.getModelCommentaire(IDtoDisplay));

    ui->tableView_commentaire->verticalHeader()->setVisible(false);
    ui->tableView_commentaire->model()->removeColumn(0); // NE PAS AFFICHER ID ET ID_MOBILITE DANS LE MODEL
    ui->tableView_commentaire->model()->removeColumn(0);

    ui->tableView_commentaire->setVisible(false);
    ui->tableView_commentaire->resizeColumnsToContents();
    ui->tableView_commentaire->resizeRowsToContents();
    ui->tableView_commentaire->setVisible(true);
    ui->tableView_commentaire->horizontalHeader()->setStretchLastSection(true);
}


void fichePartenariat::setFichePartenariat(){
    domPartenariat.getData(IDtoDisplay);

    ui->lineEdit_partenaire->setText(domPartenariat.getPartenaire());
    ui->dateEdit_dateDebut->setDate(QDate::fromString(domPartenariat.getDateDebut(),"dd/MM/yyyy"));
    ui->lineEdit_duree->setText(QString::number(domPartenariat.getDuree()));
    ui->lineEdit_type->setText(domPartenariat.getType());
    ui->lineEdit_anneeReconduction->setText(QString::number(domPartenariat.getAnnesReconduction()));
    ui->plainTextEdit_description->setPlainText(domPartenariat.getDescription());
    ui->lineEdit_poc->setText(domPartenariat.getPoc());
    ui->plainTextEdit_realisations->setPlainText(domPartenariat.getRealisations());
    ui->lineEdit_pays->setText(domPartenariat.getPays());
    cleanControlFiche();
}

void fichePartenariat::cleanControlFiche(){

    ui->label_anneeReconductionControl->clear();
    ui->label_commentaireControl->clear();
    ui->label_dateDebutControl->clear();
    ui->label_descriptionControl->clear();
    ui->label_dureeControl->clear();
    ui->label_partenaireControl->clear();
    ui->label_paysControl->clear();
    ui->label_pocControl->clear();
    ui->label_realisationsControl->clear();
    ui->label_typeControl->clear();

}





fichePartenariat::~fichePartenariat()
{
    delete ui;
}

void fichePartenariat::on_pushButton_supprimerPartenariat_clicked()
{
        QMessageBox::StandardButton reply;
        reply = QMessageBox::question(this, "Supprimer Partenariat", "Vous-etes sur de vouloir supprimer cette partenariat ?",
                                      QMessageBox::Yes|QMessageBox::No);
        if (reply == QMessageBox::Yes) {

            if (domPartenariat.supprime(IDtoDisplay)){
                QMessageBox::information(
                            this,
                            tr("PARTENARIAT ESPRIT"),
                            tr("Cette partenariat a été supprimer avec sucées !") );
                            this->hide();


            }
        }

}

/*** PARTIE VERIFICATION DES LINE_EDIT ***/


bool fichePartenariat::VerifPartenaire()
{

    if (ui->lineEdit_partenaire->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->lineEdit_partenaire->text().isEmpty())
    {
        ui->label_partenaireControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_partenaireControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool fichePartenariat::VerifdateDebut()
{
    if (ui->dateEdit_dateDebut->date()==QDate::fromString("01/01/1800","dd/MM/yyyy"))
    {
        ui->label_dateDebutControl->setPixmap(PixFalseIcon);
        return false;
    }
    else
    {

        ui->label_dateDebutControl->setPixmap(PixTrueIcon);
        return true;
    }
}

bool fichePartenariat::VerifDuree()
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

bool fichePartenariat::VerifType()
{

    if (ui->lineEdit_type->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->lineEdit_type->text().isEmpty())
    {
        ui->label_typeControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_typeControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool fichePartenariat::VerifAnneeReconduction()
{

    if (ui->lineEdit_anneeReconduction->text().contains(QRegExp("[^0-9]") ) || ui->lineEdit_anneeReconduction->text().isEmpty())
    {
        ui->label_anneeReconductionControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_anneeReconductionControl->setPixmap(PixTrueIcon);
        return true;
    }

}
bool fichePartenariat::VerifPays()
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

bool fichePartenariat::VerifPoc()
{

    if (ui->lineEdit_poc->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->lineEdit_poc->text().isEmpty())
    {
        ui->label_pocControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_pocControl->setPixmap(PixTrueIcon);
        return true;
    }

}





/*** FIN PARTIE VERIFICATION DES LINE_EDIT ***/






void fichePartenariat::on_pushButton_sauvegarderPartenariat_clicked()
{

    if (!this->ajout){


     domPartenariat.setPartenaire(ui->lineEdit_partenaire->text());
     domPartenariat.setDateDebut(ui->dateEdit_dateDebut->text());
     domPartenariat.setDuree(ui->lineEdit_duree->text().toInt());
     domPartenariat.setType(ui->lineEdit_type->text());
     domPartenariat.setAnnesReconduction(ui->lineEdit_anneeReconduction->text().toInt());
     domPartenariat.setDescription(ui->plainTextEdit_description->toPlainText());
     domPartenariat.setPoc(ui->lineEdit_poc->text());
     domPartenariat.setRealisations(ui->plainTextEdit_realisations->toPlainText());
     domPartenariat.setPays(ui->lineEdit_pays->text());



        if (this->Blocked){
            QMessageBox::critical(this,
                                  tr("PARTENARIAT ESPRIT"),
                                  tr("L'interface est bloquée, Veuillez la débloquer !") );
        }
        else{

            VerifPartenaire();
            VerifDuree();
            VerifdateDebut();
            VerifType();
            VerifAnneeReconduction();
            VerifPays();
            VerifPoc();




            if (VerifPartenaire() && VerifDuree() && VerifdateDebut() && VerifType() && VerifAnneeReconduction() && VerifPays() && VerifPoc()){

                if (domPartenariat.update(IDtoDisplay)){
                QMessageBox::information(this,
                                         tr("PARTENARIAT ESPRIT"),
                                         tr("Partenariat modifiée avec sucées!"));

            }
                else {


                    QMessageBox::critical(this,
                                          tr("PARTENARIAT ESPRIT"),
                                          tr("Partenariat n'as pas été modifié, Un erreur s'est produit lors de l'insértion à la base de données !"));


                }
                }

            else {

                QMessageBox::critical(this,
                                      tr("PARTENARIAT ESPRIT"),
                                      tr("Eleve n'as pas été modifié, Veuillez verifier les champs à saisir !"));

            }
            if (!ui->plainTextEdit_commentaire->toPlainText().isEmpty()){
                         domPartenariat.addComment(IDtoDisplay,ui->plainTextEdit_commentaire->toPlainText(),QDate::currentDate().toString("dd/MM/yyyy"));
                     }



        }
    }
        else
        {



        domPartenariat.setPartenaire(ui->lineEdit_partenaire->text());
        domPartenariat.setDateDebut(ui->dateEdit_dateDebut->text());
        domPartenariat.setDuree(ui->lineEdit_duree->text().toInt());
        domPartenariat.setType(ui->lineEdit_type->text());
        domPartenariat.setAnnesReconduction(ui->lineEdit_anneeReconduction->text().toInt());
        domPartenariat.setDescription(ui->plainTextEdit_description->toPlainText());
        domPartenariat.setPoc(ui->lineEdit_poc->text());
        domPartenariat.setRealisations(ui->plainTextEdit_realisations->toPlainText());
        domPartenariat.setPays(ui->lineEdit_pays->text());

        VerifPartenaire();
        VerifDuree();
        VerifdateDebut();
        VerifType();
        VerifAnneeReconduction();
        VerifPays();
        VerifPoc();





            if (VerifPartenaire() && VerifDuree() && VerifdateDebut() && VerifType() && VerifAnneeReconduction() && VerifPays() && VerifPoc()){

                if (domPartenariat.found(domPartenariat.getPartenaire())<1){
                if (domPartenariat.ajout()){
                    QMessageBox::information(this,
                                             tr("PARTENARIAT ESPRIT"),
                                             tr("Partenariat ajoutée avec sucées!"));
                }
            }

                else {
                    QMessageBox::critical(this,
                                          tr("PARTENARIAT ESPRIT"),
                                          tr("Partenariat n'as pas été ajouté, Elle existe déjà dans la base de données !") );
                }

            }
            else{
                QMessageBox::critical(this,
                                      tr("PARTENARIAT ESPRIT"),
                                      tr("Partenariat n'as pas été ajouté, Veuillez verifier les champs à saisir !") );

            }


            if (!ui->plainTextEdit_commentaire->toPlainText().isEmpty()){
                domPartenariat.addComment(domPartenariat.getLastID(),ui->plainTextEdit_commentaire->toPlainText(),QDate::currentDate().toString("dd/MM/yyyy"));
            }



        }

}

void fichePartenariat::on_pushButton_bloquedPartenariat_clicked()
{

    if (this->Blocked){
        ui->pushButton_bloquedPartenariat->setText("Bloquer");
    }
    else {
        ui->pushButton_bloquedPartenariat->setText("Debloquer");

    }
    this->Blocked=!Blocked;
}
