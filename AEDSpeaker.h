#ifndef AEDSPEAKER_H
#define AEDSPEAKER_H
#include "AED.h"

class AEDSpeaker{

public:
    AEDSpeaker();
    void powerOnWarning();
    void selfTestWarning();
    void analyzingHeartRhythm();
    void shockAdvisedWarning();

private:
    AED aed;
};

#endif // AEDSPEAKER_H
