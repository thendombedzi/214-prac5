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

bool smartDoorIntegrator::getDoorState() const 
{  return door->getState();
    }

smartDoorIntegrator::~smartDoorIntegrator() 
{
     if (door) 
    {
        delete door;
        door = nullptr;  
    }
}
