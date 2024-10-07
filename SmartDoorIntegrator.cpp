#include "smartDoorIntegrator.h"

smartDoorIntegrator::smartDoorIntegrator() 
{
    door = new DoorLock(); 
}

void smartDoorIntegrator::setLockUnlock(bool state) 
{     if(state)
        door->performAction("Lock");   
      else{
        door->performAction("Unlock");
      }
   
}

std::string smartDoorIntegrator::getDoorState() const 
{
    return door->getStatus(); 
    }

smartDoorIntegrator::~smartDoorIntegrator() 
{
     if (door) 
    {
        delete door;
        door = nullptr;  
    }
}
