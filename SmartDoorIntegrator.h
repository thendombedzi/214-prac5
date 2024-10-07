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
    virtual  std::string getDoorState() const ;
    ~smartDoorIntegrator();
};

#endif 
