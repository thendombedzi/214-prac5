#include "alarms.h"
#include <iostream>

Alarms::Alarms() : activated(false)
{
    state=false;
}

void Alarms::update() 
{   if(!activated)
    {activate();}
    else 
    deactivate();
}

void Alarms::activate() 
{
    if (!activated) 
    {
        activated = true;
        state=true;
        std::cout << "Alarm activated!" << std::endl;
    }
}

void Alarms::deactivate() 
{
    if (activated) 
    {
        activated = false;
        state=false;
        std::cout << "Alarm reset." << std::endl;
    }
}

bool Alarms::getState() const 
{
    return activated;
}

    void Alarms::performAction(const string& action) 
     {}

         string Alarms::getDeviceType()  {
    return "Alarm";
}

string Alarms::getStatus(){  return activated ? "activated" : "deactivated" ;}