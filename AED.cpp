#include "AED.h"

AED::AED(AEDSpeaker *s, User* u, QObject *parent) : QObject(parent) {
    isOn = false;
    electrodesPlaced = false;
    shockAdvised = false;
    currentCharge=0;
    speaker = s;
    user = u;
}

void AED::powerOn() {
    if(isOn==false){
        isOn = true;
        emit updateAEDDisplay("Power On!");
        speaker->powerOnWarning();
        ECGDisplay(0);
        initiateSelfTest();
    }
    else if(isOn==true){
          isOn = false;
          emit updateAEDDisplay("Power off!");
          ECGDisplay(0);
    }
}

void AED::initiateSelfTest(){
    usleep(2000000);
    emit updateAEDDisplay("Running self test!");
    speaker->selfTestWarning();
    usleep(2000000);
    emit updateAEDDisplay("Self Test Succesful!");
    chargeBattery();

}


void AED::placeElectrodes() {
    if(user->placeElectrodes() == true){
        analyzeHeartRhythm(user->getPatient());
    }
}

void AED::analyzeHeartRhythm(Patient* patient){
    emit updateAEDDisplay("Stand Clear");
    usleep(2000000);
    emit updateAEDDisplay("Analyzing Heart Rhythm");
    speaker->analyzingHeartRhythm();
    usleep(2000000);

    int heartRhythm = patient->getHeartRhythm();
    ECGDisplay(heartRhythm);


    if(heartRhythm==1 || heartRhythm==2){
        emit updateAEDDisplay("Not a shockable Rhythm.");
        usleep(2000000);
        emit updateAEDDisplay("Please Perform CPR!");
    }
    if(heartRhythm==3 || heartRhythm==4){
        emit updateAEDDisplay("Shockable Rhythm Detected.");
        speaker->shockAdvisedWarning();
    }
}

void AED::chargeBattery(){
    for(int i=0; i<=100; i++){
        QString s = QString::number(i);
        emit updateBatteryCharge(s+"%");
        usleep(25000);
    }
    currentCharge=100;
}

void AED::Shock(){
    if (currentCharge==100){
        emit updateAEDDisplay("Shock Administered");
        ECGDisplay(2); //I don't know how this functionality should work..
        usleep(2000000);
        emit updateAEDDisplay("Perform CPR");
        currentCharge=0;
    }else{
        emit updateAEDDisplay("Not enough power!");
    }

}


void AED::ECGDisplay(int heartRhythm) {
    switch (heartRhythm){
        case 0:{ emit updateECGDisplay("/home/student/AED-3004-Final/ECGImages/Dead.gif"); break; }
        case 1:{ emit updateECGDisplay("/home/student/AED-3004-Final/ECGImages/Asystole.gif"); break; }
        case 2:{ emit updateECGDisplay("/home/student/AED-3004-Final/ECGImages/Sinus.gif"); break; }
        case 3:{ emit updateECGDisplay("/home/student/AED-3004-Final/ECGImages/VF.gif"); break; }
        case 4:{ emit updateECGDisplay("/home/student/AED-3004-Final/ECGImages/VT.gif"); break; }
    }
}

