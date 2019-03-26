#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "my_qlabel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    ui->lblMouse->setMouseTracking(true);

        connect(ui->lblMouse, SIGNAL(Mouse_Pos()), this, SLOT(Mouse_Current_Pos()));
        connect(ui->lblMouse, SIGNAL(Mouse_Pressed()), this, SLOT(Mouse_Pressed()));
        connect(ui->lblMouse, SIGNAL(Mouse_Left()), this, SLOT(Mouse_Left()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Mouse_Current_Pos()
{
    ui->lblMouse_Current_Pos->setText(QString("x = %1, y = %2").arg(ui->lblMouse->x).arg(ui->lblMouse->y));
}

void MainWindow::Mouse_Pressed()
{
    ui->lblMouse_Current_Event->setText("Mouse Pressed");
}

void MainWindow::Mouse_Left()
{
    ui->lblMouse_Current_Event->setText("Mouse Left!");
}

