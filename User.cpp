#include "User.h"
#include <iostream>
using namespace  std;

User::User(Patient* patient1, QObject *parent) : QObject(parent), patient(patient1) {
}

void User::shavePatient() {
    patient->setHairy(false);
    cout << "USER:[ Has SUCCESSFULLY shaved the victim's chest!]"<< endl;
}

bool User::placeElectrodes() {
    if(patient->getIsHairy() == false){
        cout << "USER:[ Has SUCCESSFULLY placed the electrode!]"<< endl;
        return true;
    }else{
        cout << "USER:[ Victim's Chest is too hairy please shave and REATTACH THE ELECTRODE!]"<< endl;
        emit updateUserButtons("Shave");
        return false;
    }
}

void User::performCPR() {
    if(patient->getShockResult() == false){
        cout << "USER:[ -------------------PERFORMING CPR!-----------------------]"<< endl;
        continueEvaluation();
    }
}

void User::continueEvaluation() {
    cout << "USER:[ -------------------Continous Evaluation-----------------------]"<< endl;
}

Patient* User::getPatient() {
    return patient;
}

