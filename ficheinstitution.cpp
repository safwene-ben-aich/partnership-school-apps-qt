#include "ficheinstitution.h"
#include "ui_ficheinstitution.h"

ficheInstitution::ficheInstitution(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ficheInstitution)
{
    ui->setupUi(this);

    this->Blocked=true;
    this->ajout=false;

    this->setWindowTitle("Fiche Institution");
    PixTrueIcon=QPixmap("icones/True_icon.png");
    PixFalseIcon=QPixmap("icones/False_icon.png");
}

ficheInstitution::~ficheInstitution()
{
    delete ui;
}

void ficheInstitution::verifAjout()
{

    if (this->ajout){
        this->setWindowTitle("Nouvelle fiche Institution");
        ui->pushButton_bloquedInstitution->setEnabled(false);
        ui->pushButton_supprimerInstitution->setEnabled(false);
    }
}

void ficheInstitution::setFicheInstitution(){
    domInstitution.getData(IDtoDisplay);

    ui->lineEdit_nom->setText(domInstitution.getNom());
    ui->lineEdit_pays->setText(domInstitution.getPays());
    cleanControlFiche();
}


void ficheInstitution::cleanControlFiche()
{
    ui->label_nomInstitutionControl->clear();
    ui->label_paysInstitutionControl->clear();
}

bool ficheInstitution::VerifNom()
{

    if (ui->lineEdit_nom->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->lineEdit_nom->text().isEmpty())
    {
        ui->label_nomInstitutionControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_nomInstitutionControl->setPixmap(PixTrueIcon);
        return true;
    }

}

bool ficheInstitution::VerifPays()
{

    if (ui->lineEdit_pays->text().contains(QRegExp("[^a-zA-Z ]") ) || ui->lineEdit_pays->text().isEmpty())
    {
        ui->label_paysInstitutionControl->setPixmap(PixFalseIcon);
        return false;
    }

    else
    {
        ui->label_paysInstitutionControl->setPixmap(PixTrueIcon);
        return true;
    }

}

void ficheInstitution::on_lineEdit_nom_cursorPositionChanged(int arg1, int arg2)
{
    VerifNom();
}


void ficheInstitution::on_lineEdit_pays_cursorPositionChanged(int arg1, int arg2)
{
    VerifPays();
}

void ficheInstitution::on_pushButton_sauvegarderInstitution_clicked()
{
    if (!this->ajout)
    {

        domInstitution.setNom(ui->lineEdit_nom->text());
        domInstitution.setPays(ui->lineEdit_pays->text());



        if (this->Blocked)
        {
            QMessageBox::critical(this,
                                  tr("PARTENARIAT ESPRIT"),
                                  tr("L'interface est bloqu�e, Veuillez la d�bloquer !") );
        }

        else
        {


            VerifNom();
            VerifPays();



            if (VerifNom() && VerifPays())
            {

                if (domInstitution.update(IDtoDisplay))
                {
                    QMessageBox::information(this,
                                             tr("PARTENARIAT ESPRIT"),
                                             tr("INSTITUTION modifi� avec suc�es!"));

                }
                else
                {


                    QMessageBox::critical(this,
                                          tr("PARTENARIAT ESPRIT"),
                                          tr("Institution n'as pas �t� modifi�, Un erreur s'est produit lors de l'ins�rtion de l'institution � la base de donn�es !"));


                }
            }

            else
            {

                QMessageBox::critical(this,
                                      tr("PARTENARIAT ESPRIT"),
                                      tr("institution n'as pas �t� modifi�e, Veuillez verifier les champs � saisir !"));

            }



        }
    }

    else
    {

        domInstitution.setNom(ui->lineEdit_nom->text());
        domInstitution.setPays(ui->lineEdit_pays->text());
        VerifNom();
        VerifPays();



        if (VerifNom() && VerifPays())
        {

            if (domInstitution.found(domInstitution.getNom(),domInstitution.getPays())<1)
            {
                if (domInstitution.ajout())
                {
                    QMessageBox::information(this,
                                             tr("PARTENARIAT ESPRIT"),
                                             tr("INSTITUTION ajout�e avec suc�es!"));
                }
            }

            else
            {
                QMessageBox::critical(this,
                                      tr("PARTENARIAT ESPRIT"),
                                      tr("Institution n'as pas �t� ajout�, Cette institution existe d�j� dans la base de donn�es !") );
            }

        }
        else
        {
            QMessageBox::critical(this,
                                  tr("PARTENARIAT ESPRIT"),
                                  tr("Institution n'as pas �t� ajout�, Veuillez verifier les champs � saisir !") );

        }



    }

}







void ficheInstitution::on_pushButton_bloquedInstitution_clicked()
{
    if (this->Blocked){
        ui->pushButton_bloquedInstitution->setText("Bloquer");
    }
    else {
        ui->pushButton_bloquedInstitution->setText("Debloquer");

    }
    this->Blocked=!Blocked;
}



void ficheInstitution::on_pushButton_supprimerInstitution_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Supprimer institution", "Vous-etes sur de vouloir supprimer le POC ?",
                                  QMessageBox::Yes|QMessageBox::No);
    if (reply == QMessageBox::Yes) {

        if (domInstitution.supprime(IDtoDisplay)){
            QMessageBox::information(
                        this,
                        tr("PARTENARIAT ESPRIT"),
                        tr("L'institution a �t� supprimer avec suc�es !") );
                        this->hide();


        }
    }
}
