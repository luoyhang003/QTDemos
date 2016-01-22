#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFontComboBox>
#include <QLabel>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QFontComboBox *fontcombo[5];

   for(int i = 0; i < 5; i++){
        fontcombo[i] = new QFontComboBox(this);
    }

    fontcombo[0]->setFontFilters(QFontComboBox::AllFonts);
    fontcombo[1]->setFontFilters(QFontComboBox::ScalableFonts);
    fontcombo[2]->setFontFilters(QFontComboBox::NonScalableFonts);
    fontcombo[3]->setFontFilters(QFontComboBox::MonospacedFonts);
    fontcombo[4]->setFontFilters(QFontComboBox::ProportionalFonts);

    int ypos = 30;

    for(int i = 0; i < 5; i++){
        fontcombo[i]->setGeometry(10,ypos,300,30);
        ypos += 40;
    }

    QLabel *lb1;
    lb1 = new QLabel("I love QT!",this);
    lb1->setGeometry(10,ypos,200,30);

    connect(fontcombo[0],SIGNAL(currentIndexChanged(int)),this,SLOT(changedIndex(int)));
    connect(fontcombo[0],SIGNAL(currentFontChanged(QFont)),this,SLOT(changedFont(const QFont &)));

    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::changedIndex(int index)
{
//    QDebug("indexChanged");
}

void MainWindow::changedFont(const QFont &f)
{
//    QDebug("fontchanged");
}
