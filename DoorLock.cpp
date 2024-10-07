#include "DoorLock.h"
#include <iostream>
using namespace std;

DoorLock::DoorLock():isLocked(false)
{
    cout<<"The door is initially unlocked."<<endl;
}
std::string DoorLock::getStatus() 
{
        return isLocked ? "locked" : "unlocked";
    }

bool DoorLock::getState() const
{
    return isLocked;
}
void DoorLock:: performAction(const std::string& action)  
{
        if (action == "Lock") {
            isLocked = true;
        } else if (action == "Unlock") {
            isLocked = false;
        }
    }

    std::string DoorLock::getDeviceType()  {
        return "DoorLock";
    }
