#ifndef SMARTDOORINTEGRATOR_H
#define SMARTDOORINTEGRATOR_H

#include "smartDoor.h"
#include "legacyDoor.h"

class smartDoorIntegrator : public smartDoor {
private:
    legacyDoor* door;
public:
    smartDoorIntegrator();
    virtual void setLockUnlock(bool state) ;
    virtual  bool getDoorState() const ;
    ~smartDoorIntegrator();
};

#endif 
