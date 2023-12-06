#ifndef PATIENT_H
#define PATIENT_H

#include <string>
using namespace std;

class Patient{

public:
    Patient();

    //getters
    bool getIsHairy() const;       // Check if patient is hairy
    bool getIsResponsive() const;  // Check if patient is responsive
    bool getShockResult() const; // Check if shock result is available


    //setters
    void setHairy(bool value);         // Set hairy status
    void setResponsive(bool value);    // Set responsive status
    void setShockResult(bool value);   // Set shock result status

private:
    bool isHairy;
    bool isResponsive;
    bool shockResult;

};

#endif // PATIENT_H
