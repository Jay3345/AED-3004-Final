#ifndef USER_H
#define USER_H

#include <QObject>
#include <QPushButton>
#include "Patient.h"

class User : public QObject  {
    Q_OBJECT

public:
    explicit User(Patient* patient, QObject *parent = nullptr);
    void shavePatient();
    bool placeElectrodes();
    void performCPR();
    void continueEvaluation();

    Patient* getPatient();

signals:
    void updateUserButtons(const QString &text);

public slots:


private:
    Patient* patient;
};

#endif // USER_H
