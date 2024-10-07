#include "Light.h"
#include <iostream>
using namespace std;

Light::Light(): isOn(false) 
{
    state=false;
    }

void Light::update() 
{
    switchOn();
}

void Light::switchOn() {
    if (!isOn) 
    {
        isOn = true;
        state=true;
        std::cout << "Lights turned on." << std::endl;
    }
}

void Light::switchOff() {
    if (isOn) {
        isOn = false;
        state=false;
        std::cout << "Lights turned off." << std::endl;
    }
}
bool Light::getState() const 
{
    return isOn;
}

string Light:: getStatus() 
 {
        return isOn ? "on" : "off" ;
    }
    string getDeviceType()  
    {
        return "Light" ;
    }
    void Light::performAction(const string& action) 
     {
        if (action == "ToggleOn") {
            isOn = true;
        } else if (action == "ToggleOff") {
            isOn = false;
        } else if (action == "Toggle") {
            isOn = !isOn;
        }
    }

    string Light::getDeviceType()  {
    return "Light";
}