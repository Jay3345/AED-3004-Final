#include "AED.h"
#include <iostream>



AED::AED(QLabel* d, QPushButton* p1) : isOn(false), eletrodesPlaced(false), shockAdvised(false) {
 display=d;
 powerButton = p1;
}

void AED::powerOn() {
    isOn=true;
    display->setText("Power ON!");
    powerButton->setEnabled(false);
}

void AED::placeElectrodes() {
    eletrodesPlaced=true;
}

