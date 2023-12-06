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
    aed= new AED(ui->AEDDisplayLabel, ui->powerButton);
    connect(ui->powerButton, &QPushButton::clicked, this, &MainWindow::powerButtonClicked);
    connect(ui->attachPadsButton, &QPushButton::clicked, this, &MainWindow::attachPadsClicked);
    connect(ui->shockButton, &QPushButton::clicked, this, &MainWindow::shockClicked);
    connect(ui->shaveButton, &QPushButton::clicked, this, &MainWindow::shaveClicked);
    connect(ui->performCPRButton, &QPushButton::clicked, this, &MainWindow::cprClicked);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ECGDisplay(int testCase) {
    QMovie *movie = new QMovie("/home/student/AED-3004-Final/ECGImages/Dead.gif"); // Default(FlatLine)

    switch (testCase){
        case 1: {
            movie = new QMovie("/home/student/AED-3004-Final/ECGImages/Asystole.gif"); // Asystole Rhythm
            break;
        } case 2:{
            movie = new QMovie("/home/student/AED-3004-Final/ECGImages/Sinus.gif"); // Sinus Rhythm
            break;
        } case 3:{
            movie = new QMovie("/home/student/AED-3004-Final/ECGImages/VF.gif"); // VF Rhythm
            break;
        }case 4: {
            movie = new QMovie("/home/student/AED-3004-Final/ECGImages/VT.gif"); // VT Rhythm
            break;
        }
    }

    ui->ECGLabel->setMovie(movie);
    ui->ECGLabel->setScaledContents(true);
    movie->start();
}

void MainWindow::powerButtonClicked(){
    aed->powerOn();
}


void MainWindow::attachPadsClicked(){
    user->placeElectrodes();
}
void MainWindow::shockClicked(){
    //aed->deliverShock();
}
void MainWindow::shaveClicked(){
    user->shavePatient();
}
void MainWindow::cprClicked(){
    aed->powerOn();
}

