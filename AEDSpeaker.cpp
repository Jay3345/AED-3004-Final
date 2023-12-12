#include "AEDSpeaker.h"
#include <iostream>

using namespace std;


AEDSpeaker::AEDSpeaker(){
}

void AEDSpeaker::powerOnWarning() {
    cout << "SPEAKER:[ POWER ON WARNING ]"<< endl;
}

void AEDSpeaker::selfTestWarning() {
    cout << "SPEAKER:[ SELF-TEST WARNING ]"<< endl;
}

void AEDSpeaker::analyzingHeartRhythm() {
    cout << "SPEAKER:[ ANALYZING HEART RHYTHM ]"<< endl;
}

void AEDSpeaker::shockAdvisedWarning() {
    cout << "SPEAKER:[ SHOCK ADVISED ]"<< endl;
}
