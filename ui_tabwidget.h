/********************************************************************************
** Form generated from reading UI file 'tabwidget.ui'
**
** Created: Thu 3. Sep 18:00:43 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABWIDGET_H
#define UI_TABWIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFrame>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TabWidget
{
public:
    QWidget *MOBILITE;
    QTableView *tableView_Mobilite;
    QLineEdit *lineEdit_rechercheEtudiant;
    QCheckBox *checkBox_pays;
    QCheckBox *checkBox_duree;
    QCheckBox *checkBox_ecole;
    QCheckBox *checkBox_classe;
    QPushButton *pushButton_newMobilite;
    QLabel *label_rechercheEleve;
    QPushButton *pushButton_statistiquesMobilite;
    QPushButton *pushButton_actualiserMobilite;
    QFrame *line_filtreRechercheMobilite;
    QLabel *label_filtreRechercheMobilite;
    QWidget *PARTENRIAT;
    QTableView *tableView_Partenariat;
    QPushButton *pushButton_newPartenariat;
    QPushButton *pushButton_actualiserPartenariat;
    QLabel *label_recherchePartenariat;
    QLineEdit *lineEdit_recherchePartenariat;
    QPushButton *pushButton_notificationPartenariat;
    QCheckBox *checkBox_partenariatType;
    QCheckBox *checkBox_partenariatPays;
    QCheckBox *checkBox_partenariatAnnee;
    QCheckBox *checkBox_partenariatPoc;
    QLabel *label_etatPartenariat;
    QLabel *label_etatPartenariatColor;
    QFrame *line_filtreRechercherPartenariat;
    QLabel *label_filtreRecherchePartenariat;
    QFrame *line_8;
    QLabel *label_optionsPartenariat;
    QCheckBox *checkBox_affichagePartenariatNonActif;
    QCheckBox *checkBox_affiachagePartenariatNonActifMois;
    QLineEdit *lineEdit_PartenariatNonActifMois;
    QLabel *label_moisAffichage;
    QWidget *POC;
    QLineEdit *lineEdit_recherchePOC;
    QPushButton *pushButton_newPOC;
    QPushButton *pushButton_actualiserPOC;
    QLabel *label_recherchePOC;
    QTableView *tableView_POC;
    QCheckBox *checkBox_pocFax;
    QFrame *line_filtreRechercherPartenariat_2;
    QCheckBox *checkBox_pocInstitution;
    QLabel *label_filtreRecherchePartenariat_2;
    QCheckBox *checkBox_pocFonction;
    QCheckBox *checkBox_pocTelephone;
    QWidget *Institution;
    QTableView *tableView_Institution;
    QPushButton *pushButton_actualiserInstitution;
    QLabel *label_rechercheInstitution;
    QPushButton *pushButton_newInstitution;
    QLineEdit *lineEdit_rechercheInstitution;
    QCheckBox *checkBox_institutionPays;
    QFrame *line_filtreRechercherInstitution;
    QLabel *label_filtreRechercheInstitution;

    void setupUi(QTabWidget *TabWidget)
    {
        if (TabWidget->objectName().isEmpty())
            TabWidget->setObjectName(QString::fromUtf8("TabWidget"));
        TabWidget->resize(1051, 481);
        TabWidget->setStyleSheet(QString::fromUtf8("QTabWidget::pane { /* The tab widget frame */\n"
"    border-top: 2px solid #C2C7CB;\n"
"}"));
        MOBILITE = new QWidget();
        MOBILITE->setObjectName(QString::fromUtf8("MOBILITE"));
        tableView_Mobilite = new QTableView(MOBILITE);
        tableView_Mobilite->setObjectName(QString::fromUtf8("tableView_Mobilite"));
        tableView_Mobilite->setGeometry(QRect(0, 71, 1051, 281));
        lineEdit_rechercheEtudiant = new QLineEdit(MOBILITE);
        lineEdit_rechercheEtudiant->setObjectName(QString::fromUtf8("lineEdit_rechercheEtudiant"));
        lineEdit_rechercheEtudiant->setGeometry(QRect(150, 46, 221, 21));
        checkBox_pays = new QCheckBox(MOBILITE);
        checkBox_pays->setObjectName(QString::fromUtf8("checkBox_pays"));
        checkBox_pays->setGeometry(QRect(10, 402, 151, 21));
        checkBox_duree = new QCheckBox(MOBILITE);
        checkBox_duree->setObjectName(QString::fromUtf8("checkBox_duree"));
        checkBox_duree->setGeometry(QRect(10, 430, 151, 21));
        checkBox_ecole = new QCheckBox(MOBILITE);
        checkBox_ecole->setObjectName(QString::fromUtf8("checkBox_ecole"));
        checkBox_ecole->setGeometry(QRect(180, 403, 151, 21));
        checkBox_classe = new QCheckBox(MOBILITE);
        checkBox_classe->setObjectName(QString::fromUtf8("checkBox_classe"));
        checkBox_classe->setGeometry(QRect(180, 430, 151, 21));
        pushButton_newMobilite = new QPushButton(MOBILITE);
        pushButton_newMobilite->setObjectName(QString::fromUtf8("pushButton_newMobilite"));
        pushButton_newMobilite->setGeometry(QRect(790, 39, 121, 28));
        label_rechercheEleve = new QLabel(MOBILITE);
        label_rechercheEleve->setObjectName(QString::fromUtf8("label_rechercheEleve"));
        label_rechercheEleve->setGeometry(QRect(10, 48, 131, 16));
        pushButton_statistiquesMobilite = new QPushButton(MOBILITE);
        pushButton_statistiquesMobilite->setObjectName(QString::fromUtf8("pushButton_statistiquesMobilite"));
        pushButton_statistiquesMobilite->setGeometry(QRect(920, 38, 121, 28));
        pushButton_actualiserMobilite = new QPushButton(MOBILITE);
        pushButton_actualiserMobilite->setObjectName(QString::fromUtf8("pushButton_actualiserMobilite"));
        pushButton_actualiserMobilite->setGeometry(QRect(690, 38, 93, 28));
        line_filtreRechercheMobilite = new QFrame(MOBILITE);
        line_filtreRechercheMobilite->setObjectName(QString::fromUtf8("line_filtreRechercheMobilite"));
        line_filtreRechercheMobilite->setGeometry(QRect(10, 380, 401, 20));
        line_filtreRechercheMobilite->setFrameShape(QFrame::HLine);
        line_filtreRechercheMobilite->setFrameShadow(QFrame::Sunken);
        label_filtreRechercheMobilite = new QLabel(MOBILITE);
        label_filtreRechercheMobilite->setObjectName(QString::fromUtf8("label_filtreRechercheMobilite"));
        label_filtreRechercheMobilite->setGeometry(QRect(20, 370, 151, 16));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_filtreRechercheMobilite->setFont(font);
        TabWidget->addTab(MOBILITE, QString());
        PARTENRIAT = new QWidget();
        PARTENRIAT->setObjectName(QString::fromUtf8("PARTENRIAT"));
        tableView_Partenariat = new QTableView(PARTENRIAT);
        tableView_Partenariat->setObjectName(QString::fromUtf8("tableView_Partenariat"));
        tableView_Partenariat->setGeometry(QRect(0, 70, 1051, 281));
        pushButton_newPartenariat = new QPushButton(PARTENRIAT);
        pushButton_newPartenariat->setObjectName(QString::fromUtf8("pushButton_newPartenariat"));
        pushButton_newPartenariat->setGeometry(QRect(780, 38, 131, 28));
        pushButton_actualiserPartenariat = new QPushButton(PARTENRIAT);
        pushButton_actualiserPartenariat->setObjectName(QString::fromUtf8("pushButton_actualiserPartenariat"));
        pushButton_actualiserPartenariat->setGeometry(QRect(680, 39, 93, 28));
        label_recherchePartenariat = new QLabel(PARTENRIAT);
        label_recherchePartenariat->setObjectName(QString::fromUtf8("label_recherchePartenariat"));
        label_recherchePartenariat->setGeometry(QRect(10, 48, 161, 16));
        lineEdit_recherchePartenariat = new QLineEdit(PARTENRIAT);
        lineEdit_recherchePartenariat->setObjectName(QString::fromUtf8("lineEdit_recherchePartenariat"));
        lineEdit_recherchePartenariat->setGeometry(QRect(180, 46, 221, 21));
        pushButton_notificationPartenariat = new QPushButton(PARTENRIAT);
        pushButton_notificationPartenariat->setObjectName(QString::fromUtf8("pushButton_notificationPartenariat"));
        pushButton_notificationPartenariat->setGeometry(QRect(920, 38, 121, 28));
        checkBox_partenariatType = new QCheckBox(PARTENRIAT);
        checkBox_partenariatType->setObjectName(QString::fromUtf8("checkBox_partenariatType"));
        checkBox_partenariatType->setGeometry(QRect(180, 430, 151, 21));
        checkBox_partenariatPays = new QCheckBox(PARTENRIAT);
        checkBox_partenariatPays->setObjectName(QString::fromUtf8("checkBox_partenariatPays"));
        checkBox_partenariatPays->setGeometry(QRect(10, 402, 151, 21));
        checkBox_partenariatAnnee = new QCheckBox(PARTENRIAT);
        checkBox_partenariatAnnee->setObjectName(QString::fromUtf8("checkBox_partenariatAnnee"));
        checkBox_partenariatAnnee->setGeometry(QRect(10, 430, 151, 21));
        checkBox_partenariatPoc = new QCheckBox(PARTENRIAT);
        checkBox_partenariatPoc->setObjectName(QString::fromUtf8("checkBox_partenariatPoc"));
        checkBox_partenariatPoc->setGeometry(QRect(180, 403, 151, 21));
        label_etatPartenariat = new QLabel(PARTENRIAT);
        label_etatPartenariat->setObjectName(QString::fromUtf8("label_etatPartenariat"));
        label_etatPartenariat->setGeometry(QRect(40, 10, 311, 21));
        label_etatPartenariatColor = new QLabel(PARTENRIAT);
        label_etatPartenariatColor->setObjectName(QString::fromUtf8("label_etatPartenariatColor"));
        label_etatPartenariatColor->setGeometry(QRect(10, 10, 21, 21));
        line_filtreRechercherPartenariat = new QFrame(PARTENRIAT);
        line_filtreRechercherPartenariat->setObjectName(QString::fromUtf8("line_filtreRechercherPartenariat"));
        line_filtreRechercherPartenariat->setGeometry(QRect(10, 380, 401, 20));
        line_filtreRechercherPartenariat->setFrameShape(QFrame::HLine);
        line_filtreRechercherPartenariat->setFrameShadow(QFrame::Sunken);
        label_filtreRecherchePartenariat = new QLabel(PARTENRIAT);
        label_filtreRecherchePartenariat->setObjectName(QString::fromUtf8("label_filtreRecherchePartenariat"));
        label_filtreRecherchePartenariat->setGeometry(QRect(20, 370, 151, 16));
        label_filtreRecherchePartenariat->setFont(font);
        line_8 = new QFrame(PARTENRIAT);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(630, 380, 401, 20));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label_optionsPartenariat = new QLabel(PARTENRIAT);
        label_optionsPartenariat->setObjectName(QString::fromUtf8("label_optionsPartenariat"));
        label_optionsPartenariat->setGeometry(QRect(640, 370, 151, 16));
        label_optionsPartenariat->setFont(font);
        checkBox_affichagePartenariatNonActif = new QCheckBox(PARTENRIAT);
        checkBox_affichagePartenariatNonActif->setObjectName(QString::fromUtf8("checkBox_affichagePartenariatNonActif"));
        checkBox_affichagePartenariatNonActif->setGeometry(QRect(630, 400, 221, 21));
        checkBox_affiachagePartenariatNonActifMois = new QCheckBox(PARTENRIAT);
        checkBox_affiachagePartenariatNonActifMois->setObjectName(QString::fromUtf8("checkBox_affiachagePartenariatNonActifMois"));
        checkBox_affiachagePartenariatNonActifMois->setGeometry(QRect(630, 430, 321, 21));
        lineEdit_PartenariatNonActifMois = new QLineEdit(PARTENRIAT);
        lineEdit_PartenariatNonActifMois->setObjectName(QString::fromUtf8("lineEdit_PartenariatNonActifMois"));
        lineEdit_PartenariatNonActifMois->setGeometry(QRect(950, 428, 31, 22));
        label_moisAffichage = new QLabel(PARTENRIAT);
        label_moisAffichage->setObjectName(QString::fromUtf8("label_moisAffichage"));
        label_moisAffichage->setGeometry(QRect(990, 431, 41, 16));
        TabWidget->addTab(PARTENRIAT, QString());
        POC = new QWidget();
        POC->setObjectName(QString::fromUtf8("POC"));
        lineEdit_recherchePOC = new QLineEdit(POC);
        lineEdit_recherchePOC->setObjectName(QString::fromUtf8("lineEdit_recherchePOC"));
        lineEdit_recherchePOC->setGeometry(QRect(140, 46, 221, 21));
        pushButton_newPOC = new QPushButton(POC);
        pushButton_newPOC->setObjectName(QString::fromUtf8("pushButton_newPOC"));
        pushButton_newPOC->setGeometry(QRect(910, 38, 131, 28));
        pushButton_actualiserPOC = new QPushButton(POC);
        pushButton_actualiserPOC->setObjectName(QString::fromUtf8("pushButton_actualiserPOC"));
        pushButton_actualiserPOC->setGeometry(QRect(810, 39, 93, 28));
        label_recherchePOC = new QLabel(POC);
        label_recherchePOC->setObjectName(QString::fromUtf8("label_recherchePOC"));
        label_recherchePOC->setGeometry(QRect(10, 48, 131, 16));
        tableView_POC = new QTableView(POC);
        tableView_POC->setObjectName(QString::fromUtf8("tableView_POC"));
        tableView_POC->setGeometry(QRect(0, 71, 1051, 281));
        checkBox_pocFax = new QCheckBox(POC);
        checkBox_pocFax->setObjectName(QString::fromUtf8("checkBox_pocFax"));
        checkBox_pocFax->setGeometry(QRect(200, 430, 151, 21));
        line_filtreRechercherPartenariat_2 = new QFrame(POC);
        line_filtreRechercherPartenariat_2->setObjectName(QString::fromUtf8("line_filtreRechercherPartenariat_2"));
        line_filtreRechercherPartenariat_2->setGeometry(QRect(10, 380, 401, 20));
        line_filtreRechercherPartenariat_2->setFrameShape(QFrame::HLine);
        line_filtreRechercherPartenariat_2->setFrameShadow(QFrame::Sunken);
        checkBox_pocInstitution = new QCheckBox(POC);
        checkBox_pocInstitution->setObjectName(QString::fromUtf8("checkBox_pocInstitution"));
        checkBox_pocInstitution->setGeometry(QRect(10, 402, 181, 21));
        label_filtreRecherchePartenariat_2 = new QLabel(POC);
        label_filtreRecherchePartenariat_2->setObjectName(QString::fromUtf8("label_filtreRecherchePartenariat_2"));
        label_filtreRecherchePartenariat_2->setGeometry(QRect(20, 370, 151, 16));
        label_filtreRecherchePartenariat_2->setFont(font);
        checkBox_pocFonction = new QCheckBox(POC);
        checkBox_pocFonction->setObjectName(QString::fromUtf8("checkBox_pocFonction"));
        checkBox_pocFonction->setGeometry(QRect(10, 430, 161, 21));
        checkBox_pocTelephone = new QCheckBox(POC);
        checkBox_pocTelephone->setObjectName(QString::fromUtf8("checkBox_pocTelephone"));
        checkBox_pocTelephone->setGeometry(QRect(200, 403, 181, 21));
        TabWidget->addTab(POC, QString());
        Institution = new QWidget();
        Institution->setObjectName(QString::fromUtf8("Institution"));
        tableView_Institution = new QTableView(Institution);
        tableView_Institution->setObjectName(QString::fromUtf8("tableView_Institution"));
        tableView_Institution->setGeometry(QRect(0, 71, 1051, 281));
        pushButton_actualiserInstitution = new QPushButton(Institution);
        pushButton_actualiserInstitution->setObjectName(QString::fromUtf8("pushButton_actualiserInstitution"));
        pushButton_actualiserInstitution->setGeometry(QRect(810, 39, 93, 28));
        label_rechercheInstitution = new QLabel(Institution);
        label_rechercheInstitution->setObjectName(QString::fromUtf8("label_rechercheInstitution"));
        label_rechercheInstitution->setGeometry(QRect(10, 48, 161, 16));
        pushButton_newInstitution = new QPushButton(Institution);
        pushButton_newInstitution->setObjectName(QString::fromUtf8("pushButton_newInstitution"));
        pushButton_newInstitution->setGeometry(QRect(910, 38, 131, 28));
        lineEdit_rechercheInstitution = new QLineEdit(Institution);
        lineEdit_rechercheInstitution->setObjectName(QString::fromUtf8("lineEdit_rechercheInstitution"));
        lineEdit_rechercheInstitution->setGeometry(QRect(170, 46, 221, 21));
        checkBox_institutionPays = new QCheckBox(Institution);
        checkBox_institutionPays->setObjectName(QString::fromUtf8("checkBox_institutionPays"));
        checkBox_institutionPays->setGeometry(QRect(10, 402, 181, 21));
        line_filtreRechercherInstitution = new QFrame(Institution);
        line_filtreRechercherInstitution->setObjectName(QString::fromUtf8("line_filtreRechercherInstitution"));
        line_filtreRechercherInstitution->setGeometry(QRect(10, 380, 401, 20));
        line_filtreRechercherInstitution->setFrameShape(QFrame::HLine);
        line_filtreRechercherInstitution->setFrameShadow(QFrame::Sunken);
        label_filtreRechercheInstitution = new QLabel(Institution);
        label_filtreRechercheInstitution->setObjectName(QString::fromUtf8("label_filtreRechercheInstitution"));
        label_filtreRechercheInstitution->setGeometry(QRect(20, 370, 151, 16));
        label_filtreRechercheInstitution->setFont(font);
        TabWidget->addTab(Institution, QString());

        retranslateUi(TabWidget);

        TabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(TabWidget);
    } // setupUi

    void retranslateUi(QTabWidget *TabWidget)
    {
        TabWidget->setWindowTitle(QApplication::translate("TabWidget", "TabWidget", 0, QApplication::UnicodeUTF8));
        checkBox_pays->setText(QApplication::translate("TabWidget", "Recherche par pays", 0, QApplication::UnicodeUTF8));
        checkBox_duree->setText(QApplication::translate("TabWidget", "Recherche par duree", 0, QApplication::UnicodeUTF8));
        checkBox_ecole->setText(QApplication::translate("TabWidget", "Recherche par ecole", 0, QApplication::UnicodeUTF8));
        checkBox_classe->setText(QApplication::translate("TabWidget", "Recherche par classe", 0, QApplication::UnicodeUTF8));
        pushButton_newMobilite->setText(QApplication::translate("TabWidget", "Nouvelle Mobilite", 0, QApplication::UnicodeUTF8));
        label_rechercheEleve->setText(QApplication::translate("TabWidget", "Rechercher un \303\251l\303\250ve :", 0, QApplication::UnicodeUTF8));
        pushButton_statistiquesMobilite->setText(QApplication::translate("TabWidget", "Statistiques", 0, QApplication::UnicodeUTF8));
        pushButton_actualiserMobilite->setText(QApplication::translate("TabWidget", "Actualiser", 0, QApplication::UnicodeUTF8));
        label_filtreRechercheMobilite->setText(QApplication::translate("TabWidget", "Filtre recherche", 0, QApplication::UnicodeUTF8));
        TabWidget->setTabText(TabWidget->indexOf(MOBILITE), QApplication::translate("TabWidget", "Mobilite", 0, QApplication::UnicodeUTF8));
        pushButton_newPartenariat->setText(QApplication::translate("TabWidget", "Nouvelle partenariat", 0, QApplication::UnicodeUTF8));
        pushButton_actualiserPartenariat->setText(QApplication::translate("TabWidget", "Actualiser", 0, QApplication::UnicodeUTF8));
        label_recherchePartenariat->setText(QApplication::translate("TabWidget", "Rechercher un partenaire :", 0, QApplication::UnicodeUTF8));
        pushButton_notificationPartenariat->setText(QString());
        checkBox_partenariatType->setText(QApplication::translate("TabWidget", "Recherche par type", 0, QApplication::UnicodeUTF8));
        checkBox_partenariatPays->setText(QApplication::translate("TabWidget", "Recherche par pays", 0, QApplication::UnicodeUTF8));
        checkBox_partenariatAnnee->setText(QApplication::translate("TabWidget", "Recherche par annee", 0, QApplication::UnicodeUTF8));
        checkBox_partenariatPoc->setText(QApplication::translate("TabWidget", "Recherche par poc", 0, QApplication::UnicodeUTF8));
        label_etatPartenariat->setText(QString());
        label_etatPartenariatColor->setText(QString());
        label_filtreRecherchePartenariat->setText(QApplication::translate("TabWidget", "Filtre recherche", 0, QApplication::UnicodeUTF8));
        label_optionsPartenariat->setText(QApplication::translate("TabWidget", "Options", 0, QApplication::UnicodeUTF8));
        checkBox_affichagePartenariatNonActif->setText(QApplication::translate("TabWidget", "Afficher les partenariats non-actif", 0, QApplication::UnicodeUTF8));
        checkBox_affiachagePartenariatNonActifMois->setText(QApplication::translate("TabWidget", "Afficher les partenariats qui ne sont plus actif dans ", 0, QApplication::UnicodeUTF8));
        label_moisAffichage->setText(QApplication::translate("TabWidget", "mois", 0, QApplication::UnicodeUTF8));
        TabWidget->setTabText(TabWidget->indexOf(PARTENRIAT), QApplication::translate("TabWidget", "Partenariat", 0, QApplication::UnicodeUTF8));
        pushButton_newPOC->setText(QApplication::translate("TabWidget", "Nouveau POC", 0, QApplication::UnicodeUTF8));
        pushButton_actualiserPOC->setText(QApplication::translate("TabWidget", "Actualiser", 0, QApplication::UnicodeUTF8));
        label_recherchePOC->setText(QApplication::translate("TabWidget", "Rechercher un POC  :", 0, QApplication::UnicodeUTF8));
        checkBox_pocFax->setText(QApplication::translate("TabWidget", "Recherche par fax", 0, QApplication::UnicodeUTF8));
        checkBox_pocInstitution->setText(QApplication::translate("TabWidget", "Recherche par institution", 0, QApplication::UnicodeUTF8));
        label_filtreRecherchePartenariat_2->setText(QApplication::translate("TabWidget", "Filtre recherche", 0, QApplication::UnicodeUTF8));
        checkBox_pocFonction->setText(QApplication::translate("TabWidget", "Recherche par fonction", 0, QApplication::UnicodeUTF8));
        checkBox_pocTelephone->setText(QApplication::translate("TabWidget", "Recherche par telephone", 0, QApplication::UnicodeUTF8));
        TabWidget->setTabText(TabWidget->indexOf(POC), QApplication::translate("TabWidget", "POC", 0, QApplication::UnicodeUTF8));
        pushButton_actualiserInstitution->setText(QApplication::translate("TabWidget", "Actualiser", 0, QApplication::UnicodeUTF8));
        label_rechercheInstitution->setText(QApplication::translate("TabWidget", "Rechercher une Institution : ", 0, QApplication::UnicodeUTF8));
        pushButton_newInstitution->setText(QApplication::translate("TabWidget", "Nouvelle Institution", 0, QApplication::UnicodeUTF8));
        checkBox_institutionPays->setText(QApplication::translate("TabWidget", "Recherche par pays", 0, QApplication::UnicodeUTF8));
        label_filtreRechercheInstitution->setText(QApplication::translate("TabWidget", "Filtre recherche", 0, QApplication::UnicodeUTF8));
        TabWidget->setTabText(TabWidget->indexOf(Institution), QApplication::translate("TabWidget", "Institution", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class TabWidget: public Ui_TabWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABWIDGET_H
