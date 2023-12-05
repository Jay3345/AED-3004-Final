#ifndef AED_H
#define AED_H
#include <QLabel>
#include "Patient.h"

class AED{

public:
    AED(QLabel* display);
    void powerOn();
    void initiateSelfTest();
    void analyzeHeartRhythm();
    void deliverShock();

private:
    bool isOn;
    bool eletrodesPlaced;
    bool shockAdvised;
    QLabel* display;
};
#endif // AED_H
