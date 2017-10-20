/********************************************************************************
** Form generated from reading UI file 'ficheinstitution.ui'
**
** Created: Sat 29. Aug 17:28:14 2015
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FICHEINSTITUTION_H
#define UI_FICHEINSTITUTION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ficheInstitution
{
public:
    QLabel *label_nom;
    QLabel *label_pays;
    QLineEdit *lineEdit_nom;
    QLineEdit *lineEdit_pays;
    QPushButton *pushButton_supprimerInstitution;
    QPushButton *pushButton_bloquedInstitution;
    QPushButton *pushButton_sauvegarderInstitution;
    QLabel *label_nomInstitutionControl;
    QLabel *label_paysInstitutionControl;

    void setupUi(QDialog *ficheInstitution)
    {
        if (ficheInstitution->objectName().isEmpty())
            ficheInstitution->setObjectName(QString::fromUtf8("ficheInstitution"));
        ficheInstitution->resize(406, 154);
        label_nom = new QLabel(ficheInstitution);
        label_nom->setObjectName(QString::fromUtf8("label_nom"));
        label_nom->setGeometry(QRect(55, 40, 51, 16));
        label_pays = new QLabel(ficheInstitution);
        label_pays->setObjectName(QString::fromUtf8("label_pays"));
        label_pays->setGeometry(QRect(50, 73, 53, 16));
        lineEdit_nom = new QLineEdit(ficheInstitution);
        lineEdit_nom->setObjectName(QString::fromUtf8("lineEdit_nom"));
        lineEdit_nom->setGeometry(QRect(100, 40, 171, 22));
        lineEdit_pays = new QLineEdit(ficheInstitution);
        lineEdit_pays->setObjectName(QString::fromUtf8("lineEdit_pays"));
        lineEdit_pays->setGeometry(QRect(100, 70, 171, 22));
        pushButton_supprimerInstitution = new QPushButton(ficheInstitution);
        pushButton_supprimerInstitution->setObjectName(QString::fromUtf8("pushButton_supprimerInstitution"));
        pushButton_supprimerInstitution->setGeometry(QRect(210, 120, 93, 28));
        pushButton_bloquedInstitution = new QPushButton(ficheInstitution);
        pushButton_bloquedInstitution->setObjectName(QString::fromUtf8("pushButton_bloquedInstitution"));
        pushButton_bloquedInstitution->setGeometry(QRect(310, 120, 93, 28));
        pushButton_sauvegarderInstitution = new QPushButton(ficheInstitution);
        pushButton_sauvegarderInstitution->setObjectName(QString::fromUtf8("pushButton_sauvegarderInstitution"));
        pushButton_sauvegarderInstitution->setGeometry(QRect(110, 120, 93, 28));
        label_nomInstitutionControl = new QLabel(ficheInstitution);
        label_nomInstitutionControl->setObjectName(QString::fromUtf8("label_nomInstitutionControl"));
        label_nomInstitutionControl->setGeometry(QRect(280, 40, 20, 20));
        label_paysInstitutionControl = new QLabel(ficheInstitution);
        label_paysInstitutionControl->setObjectName(QString::fromUtf8("label_paysInstitutionControl"));
        label_paysInstitutionControl->setGeometry(QRect(280, 70, 20, 20));

        retranslateUi(ficheInstitution);

        QMetaObject::connectSlotsByName(ficheInstitution);
    } // setupUi

    void retranslateUi(QDialog *ficheInstitution)
    {
        ficheInstitution->setWindowTitle(QApplication::translate("ficheInstitution", "Dialog", 0, QApplication::UnicodeUTF8));
        label_nom->setText(QApplication::translate("ficheInstitution", "Nom :", 0, QApplication::UnicodeUTF8));
        label_pays->setText(QApplication::translate("ficheInstitution", "Pays  :", 0, QApplication::UnicodeUTF8));
        pushButton_supprimerInstitution->setText(QApplication::translate("ficheInstitution", "Supprimer", 0, QApplication::UnicodeUTF8));
        pushButton_bloquedInstitution->setText(QApplication::translate("ficheInstitution", "Debloquer", 0, QApplication::UnicodeUTF8));
        pushButton_sauvegarderInstitution->setText(QApplication::translate("ficheInstitution", "Sauvegarder", 0, QApplication::UnicodeUTF8));
        label_nomInstitutionControl->setText(QString());
        label_paysInstitutionControl->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class ficheInstitution: public Ui_ficheInstitution {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FICHEINSTITUTION_H
