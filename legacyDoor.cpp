#include "legacyDoor.h"
#include <iostream>
using namespace std;

legacyDoor::legacyDoor():isLocked(false)
{
    cout<<"The door is initially unlocked."<<endl;
}

void legacyDoor::lock() 
{
    isLocked = true;
}

void legacyDoor::unlock() 
{
    isLocked = false;
}

bool legacyDoor::getState() const 
{
    return isLocked;
}
