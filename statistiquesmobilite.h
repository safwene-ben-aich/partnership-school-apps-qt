#ifndef STATISTIQUESMOBILITE_H
#define STATISTIQUESMOBILITE_H

#include <QDialog>
#include "dombase.h"
namespace Ui {
class statistiquesMobilite;
}

class statistiquesMobilite : public QDialog
{
    Q_OBJECT
    
public:
    explicit statistiquesMobilite(QWidget *parent = 0);
    ~statistiquesMobilite();


private slots :
    void makeTableView();
    void makeSecondPlot();
    void makePlot();


    void on_pushButton_capturerCustomPlot_clicked();

    void on_pushButton_capturerCustomPlot_2_clicked();

    void on_pushButton_capturerTableauStat_clicked();

private:
    Ui::statistiquesMobilite *ui;
};

#endif // STATISTIQUESMOBILITE_H
