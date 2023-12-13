#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QMovie>


MainWindow::MainWindow(QWidget *parent): QMainWindow(parent), ui(new Ui::MainWindow)
    {
        ui->setupUi(this);

        ui->attachPadsButton->setEnabled(false);
        ui->shockButton->setEnabled(false);
        ui->shaveButton->setEnabled(false);
        ui->cprButton->setEnabled(false);
        updateECG("/home/student/AED-3004-Final/ECGImages/Dead.gif");


        patient = new Patient();
        user = new User(patient);

        speaker = new AEDSpeaker();
        aed= new AED(speaker, user);

        aedThread = new QThread();
        aed->moveToThread(aedThread);

        //------------------------TEST CASES---------------------------------
        int chooseTestCaseNum = 4;
        switch (chooseTestCaseNum) {
            //Patient is not hairy, has a ventricular fibrillation(VF) heart rhythm---------------------
            case 1:
                patient->setHairy(false);
                patient->setHeartRhythm(3);
                break;

            //Patient is hairy, has a ventricular tachycardia(VT) heart rhythm---------------------
            case 2:
                patient->setHairy(true);
                patient->setHeartRhythm(4);
                break;

            //Patient is not hairy, has a Sinus heart rhythm ---------------------
            case 3:
                patient->setHairy(false);
                patient->setHeartRhythm(2);
                break;

            //Patient is hairy, has a Asystole heart rhythm---------------------
            case 4:
                patient->setHairy(true);
                patient->setHeartRhythm(1);
                break;
        }


        connect(aed, &AED::updateECGDisplay, this, &MainWindow::updateECG);  //update ECG
        connect(aed, &AED::updateAEDDisplay, this, &MainWindow::updateAED);  //update AED
        connect(aed, &AED::updateBatteryCharge, this, &MainWindow::updateBattery);

        connect(user, &User::updateUserButtons, this, &MainWindow::updateUser);  //update User Screen


        //Call from buttons
        connect(ui->powerButton, &QPushButton::clicked, aed, &AED::powerOn);
        connect(ui->attachPadsButton, &QPushButton::clicked, aed, &AED::placeElectrodes);
        connect(ui->shockButton, &QPushButton::clicked, aed, &AED::Shock);
        connect(ui->shaveButton, &QPushButton::clicked, user, &User::shavePatient);
        connect(ui->cprButton, &QPushButton::clicked, user, &User::performCPR);


        aedThread->start();
    }

MainWindow::~MainWindow()
{
    delete patient;
    delete user;
    delete speaker;
    delete aed;
    delete ui;
    delete ECGgif;
}


void MainWindow::updateECG(const QString& gifPath){
    ECGgif = new QMovie(gifPath);
    ui->ECGLabel->setMovie(ECGgif);
    ECGgif->start();
}

void MainWindow::updateAED(const QString& AEDText){
    ui->AEDDisplayLabel->setText(AEDText);


    //Change  button visibillity conditions
    if(AEDText == "Self Test Succesful!"){
        ui->attachPadsButton->setEnabled(true);
    }
    else if(AEDText =="Power off!"){
        ui->attachPadsButton->setEnabled(false);
        ui->shockButton->setEnabled(false);
        ui->shaveButton->setEnabled(false);
        ui->cprButton->setEnabled(false);
    }
    else if(AEDText=="Shockable Rhythm Detected."){
        ui->attachPadsButton->setEnabled(false);
        ui->shockButton->setEnabled(true);
    }
    else if(AEDText=="Not a shockable Rhythm."){
        ui->attachPadsButton->setEnabled(false);
        ui->cprButton->setEnabled(true);
    }
    else if(AEDText=="Shock Administered"){
        ui->shaveButton->setEnabled(false);
    }
    else if(AEDText=="Perform CPR"){
        ui->cprButton->setEnabled(true);
    }
}

void MainWindow::updateBattery(const QString& newBattery){
    ui->batteryLabel->setText(newBattery);
}

void MainWindow::updateUser(const QString& Text){
    if(Text == "Shave"){
        ui->shaveButton->setEnabled(true);
    }
}
