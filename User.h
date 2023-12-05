#ifndef USER_H
#define USER_H

#include "AED.h"
#include "Patient.h"

class User{
public:
    User();
    void powerOn();
    void shave();
    void placeElectrodes();
    void performCPR();
    void continueEvaluation();
private:
    AED aed;
    Patient patient;
};

#endif // USER_H
