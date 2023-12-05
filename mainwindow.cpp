#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <iostream>
#include <QMovie>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ECGDisplay(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ECGDisplay(int testCase) {
    QMovie *movie = new QMovie("/home/student/AED-3004-Final/ECGImages/Dead.gif"); // Default(FlatLine)

    switch (testCase){
        case 1: {
            movie = new QMovie("/home/student/AED-3004-Final/ECGImages/Asystole.gif"); // Replace with your GIF path
            break;
        } case 2:{
            movie = new QMovie("/home/student/AED-3004-Final/ECGImages/Sinus.gif"); // Replace with your GIF path
            break;
        } case 3:{
            movie = new QMovie("/home/student/AED-3004-Final/ECGImages/VF.gif"); // Replace with your GIF path
            break;
        }case 4: {
            movie = new QMovie("/home/student/AED-3004-Final/ECGImages/VT.gif"); // Replace with your GIF path
            break;
        }
    }

    ui->ECGLabel->setMovie(movie);
    ui->ECGLabel->setScaledContents(true);
    movie->start();

}
