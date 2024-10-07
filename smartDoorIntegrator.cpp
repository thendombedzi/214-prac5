#include "smartDoorIntegrator.h"

smartDoorIntegrator::smartDoorIntegrator() 
{
    door = new legacyDoor(); 
}

void smartDoorIntegrator::setLockUnlock(bool state) 
{
    if (state) 
    {}
        door->lock();   
    } 
    else 
    {
        door->unlock(); 
    }
}

bool smartDoorIntegrator::getDoorState() const 
{
    return door->getState(); 
    }

smartDoorIntegrator::~smartDoorIntegrator() 
{
     if (door) 
    {
        delete door;
        door = nullptr;  
    }
}
