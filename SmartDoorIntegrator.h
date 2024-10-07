#ifndef SMARTDOORINTEGRATOR_H
#define SMARTDOORINTEGRATOR_H

#include "smartDoor.h"
#include "DoorLock.h"

class smartDoorIntegrator : public SmartDoor {
private:
    DoorLock* door;
public:
    smartDoorIntegrator();
    virtual void setLockUnlock(bool state) ;
    virtual  bool getDoorState() const ;
    ~smartDoorIntegrator();
};

#endif 
