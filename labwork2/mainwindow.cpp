#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->menuBar(this);
    //Какие-то изменения
}

MainWindow::~MainWindow()
{
    //и тут 12345
    ui->mainToolBar(this);
    ui->statusBar("Hello World!");
    delete ui;
}
