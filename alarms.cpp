#include "alarms.h"
#include <iostream>

alarms::alarms() : activated(false)
{
    state=false;
}

void alarms::update() 
{
    activate();
}

void alarms::activate() 
{
    if (!activated) 
    {
        activated = true;
        state=true;
        std::cout << "Alarm activated!" << std::endl;
    }
}

void alarms::deactivate() 
{
    if (activated) 
    {
        activated = false;
        state=false;
        std::cout << "Alarm reset." << std::endl;
    }
}

bool alarms::getState() const 
{
    return activated;
}
