#ifndef USER_H
#define USER_H

#include "AED.h"
#include "Patient.h"

class User{

public:
    User(AED* aed, Patient* patient);
    void shavePatient();
    void placeElectrodes();
    void performCPR();
    void continueEvaluation();

private:
    AED aed;
    Patient patient;
};

#endif // USER_H
