#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include <QMouseEvent>

#include <QEvent>
#include <QDebug>

namespace Ui {
class MainWindow;
class lblMouse;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    //mouseDoubleClickEvent(QMouseEvent *event) override;


public:
    explicit MainWindow(QWidget *parent = 0);

    ~MainWindow();

private slots:
    void Mouse_Current_Pos();
    void Mouse_Pressed();
    void Mouse_Left();


signals:


private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
