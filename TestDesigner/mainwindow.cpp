#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_input1_valueChanged(int value)
{
    ui->output->setText(QString::number(value + ui->input2->value()));
}

void MainWindow::on_input2_valueChanged(int value)
{
    ui->output->setText(QString::number(value + ui->input1->value()));
}

