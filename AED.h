#ifndef AED_H
#define AED_H
#include <QLabel>
#include <QPushButton>
#include "Patient.h"

class AED{

public:
    AED(QLabel* display, QPushButton* powerButton);
    void powerOn();
    void initiateSelfTest();
    void placeElectrodes();
    void analyzeHeartRhythm();
    void deliverShock();

private:
    bool isOn;
    bool eletrodesPlaced;
    bool shockAdvised;
    QLabel* display;
    QPushButton* powerButton;

};
#endif // AED_H
