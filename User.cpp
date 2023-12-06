#include "User.h"
#include <iostream>
using namespace  std;

User::User(AED* aed1, Patient* patient1) : aed(*aed1), patient(*patient1) {

}

void User::shavePatient() {
    patient.setHairy(false);
    cout << "USER:[ Has SUCCESSFULLY shaved the victim's chest!]"<< endl;
}

void User::placeElectrodes() {
    if(patient.getIsHairy() == false){
        cout << "USER:[ Has SUCCESSFULLY placed the electrode!]"<< endl;
    }else{
        cout << "USER:[ Victim's Chest is too hairy please shave and REATTACH THE ELECTRODE!]"<< endl;
    }
}

void User::performCPR() {
    if(patient.getShockResult() == true){
        cout << "USER:[ -------------------PERFORMING CPR!-----------------------]"<< endl;
    }
}

void User::continueEvaluation() {

}
