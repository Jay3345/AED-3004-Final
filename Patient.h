#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

class Patient{

public:
    Patient();
    void isResponsive();

private:
    string name;
    bool isHairy;
    bool responsive;
    bool shockResult;

};

#endif // PATIENT_H
