#include "tabwidget.h"
#include "ui_tabwidget.h"







TabWidget::TabWidget(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::TabWidget)
{
    ui->setupUi(this);
    TabWidget::prepareTabWidget();

}


void TabWidget::prepareTabWidget(){

    this->setWindowTitle("GESTION DE PARTENARIAT ESPRIT");
    TabWidget::prepareTabMobilite();
    TabWidget::prepareTabPartenariat();
    TabWidget::prepareTabPOC();
    TabWidget::prepareTabInstitution();
    this->PixRedIcon=QPixmap("icones/red.png");
    this->PixGreenIcon=QPixmap("icones/green.png");
}




void TabWidget::prepareTabMobilite(){
    m_pHeaderView = new QHeaderView(Qt::Horizontal);

    ui->tableView_Mobilite->setModel(domMobilite.getModelGlobal());

    m_pHeaderView->setClickable(true);
    ui->tableView_Mobilite->setHorizontalHeader(m_pHeaderView);
    ui->tableView_Mobilite->hideColumn(0);
    ui->tableView_Mobilite->hideColumn(8);
    ui->tableView_Mobilite->resizeColumnsToContents();
    ui->tableView_Mobilite->horizontalHeader()->setStretchLastSection(true);
    ui->tableView_Mobilite->setSortingEnabled(true);
    connect(m_pHeaderView,SIGNAL(sectionClicked(int)),this,SLOT(sectionClicked(int)));

}






void TabWidget::prepareTabInstitution()
{
    ui->tableView_Institution->setModel(domInstitution.getModelGlobal());
    ui->tableView_Institution->hideColumn(0);
    ui->tableView_Institution->resizeColumnsToContents();
    ui->tableView_Institution->horizontalHeader()->setStretchLastSection(true);


}





void TabWidget::prepareTabPOC()
{
    ui->tableView_POC->setModel(domPoc.getModelGlobal());
    ui->tableView_POC->hideColumn(0);
    ui->tableView_POC->hideColumn(8);
    ui->tableView_POC->hideColumn(6);
    ui->tableView_POC->hideColumn(5);
    ui->tableView_POC->hideColumn(4);
    ui->tableView_POC->resizeColumnsToContents();
    ui->tableView_POC->horizontalHeader()->setStretchLastSection(true);
}








void TabWidget::prepareTabPartenariat()
{
    if (ui->checkBox_affichagePartenariatNonActif->isChecked()){
    ui->tableView_Partenariat->setModel(domPartenariat.getModelGlobal());
    }
    else
    {
        ui->tableView_Partenariat->setModel(domPartenariat.getModelPartenariatActif());

    }
    ui->tableView_Partenariat->hideColumn(0);
    ui->tableView_Partenariat->hideColumn(6);
    ui->tableView_Partenariat->hideColumn(10);
    ui->tableView_Partenariat->hideColumn(11);
    ui->tableView_Partenariat->hideColumn(9);
    ui->tableView_Partenariat->hideColumn(7);
    ui->tableView_Partenariat->resizeColumnsToContents();
    ui->tableView_Partenariat->horizontalHeader()->setStretchLastSection(true);

    ui->pushButton_notificationPartenariat->setText("Notfication ("+QString::number(domPartenariat.getNotificationFromDB())+')');



}



TabWidget::~TabWidget()
{
    delete ui;
}




void TabWidget::sectionClicked(int index)
{
    QSortFilterProxyModel *m=new QSortFilterProxyModel(this);
    m->setDynamicSortFilter(true);
    m->setSourceModel(ui->tableView_Mobilite->model());
    ui->tableView_Mobilite->setModel(m);
    ui->tableView_Mobilite->setSortingEnabled(true);

}



void TabWidget::on_lineEdit_rechercheEtudiant_cursorPositionChanged(int arg1, int arg2) //Amélioration possible
{
    QString inputValue,filterChecked;
    inputValue=ui->lineEdit_rechercheEtudiant->text();
    filterChecked="NOM";

    if (ui->checkBox_classe->isChecked()){
        filterChecked="CLASSE_ESPRIT";
    }
    if (ui->checkBox_duree->isChecked()){
        filterChecked="DUREE";
    }
    if (ui->checkBox_ecole->isChecked()){
        filterChecked="ECOLE";
    }
    if (ui->checkBox_pays->isChecked()){
        filterChecked="PAYS";
    }
    ui->tableView_Mobilite->setModel(domMobilite.getModelSpecial(inputValue,filterChecked));


}

void TabWidget::on_tableView_Mobilite_doubleClicked(const QModelIndex &index)
{
    ficheMobilite *ficheMob= new ficheMobilite();
    ficheMob->setIDtoDisplay(ui->tableView_Mobilite->currentIndex().sibling(ui->tableView_Mobilite->currentIndex().row(),0).data().toInt());
    ficheMob->setModalCommentaires();
    ficheMob->setFicheMobilite();
    ficheMob->show();

}

void TabWidget::on_pushButton_newMobilite_clicked()
{

    ficheMobilite *ficheMob = new ficheMobilite();
    ficheMob->setAjout(true);
    ficheMob->verifAjout();
    ficheMob->show();


}

void TabWidget::on_pushButton_statistiquesMobilite_clicked()
{
    statistiquesMobilite *statMobilite = new statistiquesMobilite();
    statMobilite->show();

}

void TabWidget::on_pushButton_actualiserMobilite_clicked()
{
    ui->tableView_Mobilite->setModel(domMobilite.getModelGlobal());
}

void TabWidget::on_tableView_Mobilite_clicked(const QModelIndex &index)
{

    qDebug()<<"CLICKED";
}

void TabWidget::on_tableView_Partenariat_doubleClicked(const QModelIndex &index)
{
    fichePartenariat *fichePart= new fichePartenariat();
    fichePart->setIDtoDisplay(ui->tableView_Partenariat->currentIndex().sibling(ui->tableView_Partenariat->currentIndex().row(),0).data().toInt());
    fichePart->setModalCommentaires();
    fichePart->setFichePartenariat();
    fichePart->show();
}

void TabWidget::on_pushButton_newPartenariat_clicked()
{
    fichePartenariat *fichePart = new fichePartenariat();
    fichePart->setAjout(true);
    fichePart->verifAjout();
    fichePart->show();
}

void TabWidget::on_lineEdit_recherchePartenariat_cursorPositionChanged(int arg1, int arg2)
{
    QString inputValue,filterChecked;
    inputValue=ui->lineEdit_recherchePartenariat->text();
    filterChecked="PARTENAIRE";

    if (ui->checkBox_partenariatAnnee->isChecked()){
        filterChecked="ANNEES_RECONDUCTION";
    }
    if (ui->checkBox_partenariatPays->isChecked()){
        filterChecked="PAYS";
    }
    if (ui->checkBox_partenariatPoc->isChecked()){
        filterChecked="POC";
    }
    if (ui->checkBox_partenariatType->isChecked()){
        filterChecked="TYPE";
    }
    if (ui->checkBox_affichagePartenariatNonActif->isChecked()){
    ui->tableView_Partenariat->setModel(domPartenariat.getModelSpecial(inputValue,filterChecked));
    }
    else
    {
        ui->tableView_Partenariat->setModel(domPartenariat.getModelSpecialActif(inputValue,filterChecked));

    }
    }

void TabWidget::on_pushButton_actualiserPartenariat_clicked()
{
    TabWidget::prepareTabPartenariat();
}

void TabWidget::on_pushButton_notificationPartenariat_clicked()
{
    notificationPartenariat *notificationPart = new notificationPartenariat();
    notificationPart->show();

}


void TabWidget::on_tableView_Partenariat_clicked(const QModelIndex &index)
{
    domPartenariat.setPartenaire(ui->tableView_Partenariat->currentIndex().sibling(ui->tableView_Partenariat->currentIndex().row(),1).data().toString());
    if (domPartenariat.getStatePartenariat()){
        ui->label_etatPartenariat->setText(domPartenariat.getPartenaire()+" EST UNE PARTENARIAT ACTIF");
        ui->label_etatPartenariatColor->setPixmap(this->PixGreenIcon);

    }
    else{
        ui->label_etatPartenariat->setText(domPartenariat.getPartenaire()+" EST UNE PARTENARIAT NON-ACTIF");
        ui->label_etatPartenariatColor->setPixmap(this->PixRedIcon);
    }
}

void TabWidget::on_checkBox_affichagePartenariatNonActif_clicked()
{
    if (ui->checkBox_affichagePartenariatNonActif->isChecked())
    ui->tableView_Partenariat->setModel(domPartenariat.getModelGlobal());
    else
    ui->tableView_Partenariat->setModel(domPartenariat.getModelPartenariatActif());
}

void TabWidget::on_lineEdit_recherchePOC_cursorPositionChanged(int arg1, int arg2)
{
    QString inputValue,filterChecked;
    inputValue=ui->lineEdit_recherchePOC->text();
    filterChecked="NOM";

    if (ui->checkBox_pocFonction->isChecked()){
        filterChecked="FONCTION";
    }
    if (ui->checkBox_pocInstitution->isChecked()){
        filterChecked="INSTITUTION";
    }
    if (ui->checkBox_pocTelephone->isChecked()){
        filterChecked="TELEPHONE";
    }
    if (ui->checkBox_pocFax->isChecked()){
        filterChecked="FAX";
    }
    ui->tableView_POC->setModel(domPoc.getModelSpecial(inputValue,filterChecked));
}

void TabWidget::on_pushButton_actualiserPOC_clicked()
{
     ui->tableView_POC->setModel(domPoc.getModelGlobal());
}

void TabWidget::on_tableView_POC_doubleClicked(const QModelIndex &index)
{
    fichePOC *fichePoc = new fichePOC();
    fichePoc->setIDtoDisplay(ui->tableView_POC->currentIndex().sibling(ui->tableView_POC->currentIndex().row(),0).data().toInt());
    fichePoc->setModalCommentaires();
    fichePoc->setFichePOC();
    fichePoc->show();

}

void TabWidget::on_pushButton_newPOC_clicked()
{
    fichePOC *fichePoc = new fichePOC();
    fichePoc->setAjout(true);
    fichePoc->verifAjout();
    fichePoc->show();
}

void TabWidget::on_lineEdit_rechercheInstitution_cursorPositionChanged(int arg1, int arg2)
{
    QString inputValue,filterChecked;
    inputValue=ui->lineEdit_rechercheInstitution->text();
    filterChecked="NOM";

    if (ui->checkBox_institutionPays->isChecked()){
        filterChecked="PAYS";
    }
    ui->tableView_Institution->setModel(domInstitution.getModelSpecial(inputValue,filterChecked));
}

void TabWidget::on_pushButton_actualiserInstitution_clicked()
{
    ui->tableView_Institution->setModel(domInstitution.getModelGlobal());
}

void TabWidget::on_tableView_Institution_doubleClicked(const QModelIndex &index)
{
    ficheInstitution *ficheInstit = new ficheInstitution();
    ficheInstit->setIDtoDisplay(ui->tableView_Institution->currentIndex().sibling(ui->tableView_Institution->currentIndex().row(),0).data().toInt());
    ficheInstit->setFicheInstitution();
    ficheInstit->show();
}


void TabWidget::on_pushButton_newInstitution_clicked()
{
    ficheInstitution *ficheInstit = new ficheInstitution();
    ficheInstit->setAjout(true);
    ficheInstit->verifAjout();
    ficheInstit->show();
}
