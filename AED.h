#ifndef AED_H
#define AED_H

#include <QObject>
#include <QLabel>
#include <QPushButton>
#include <QMovie>
#include <QTimer>

#include <QThread>
#include <unistd.h>
#include "AEDSpeaker.h"
#include "User.h"




class AED : public QObject  {
    Q_OBJECT

public:
    explicit AED(AEDSpeaker* speaker, User* user, QObject *parent = nullptr);
    void ECGDisplay(int heartRhythm);
    void initiateSelfTest();
    void placeElectrodes();
    void analyzeHeartRhythm(Patient* patient);
    void Shock();

signals:
    void updateECGDisplay(const QString &gifPath);
    void updateAEDDisplay(const QString &aedText);


public slots:
    void powerOn();


private:
    bool isOn;
    bool electrodesPlaced;
    bool shockAdvised;
    AEDSpeaker* speaker;
    User* user;


};

#endif // AED_H
