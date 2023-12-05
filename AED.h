#ifndef AED_H
#define AED_H

class AED{
public:
    AED();
    void powerOn();
    void initiateSelfTest();
    void analyzeHeartRhythm();
    void deliverShock();
private:
    bool isOn;
    bool eletrodesPlaced;
    bool shockAdvised;
};

#endif // AED_H
