#include "legacyLight.h"
#include <iostream>
using namespace std;

legacyLight::legacyLight(): isOn(false) 
{
    state=false;
     cout<<"The lights are initially off."<<endl;}

void legacyLight::update() 
{
    switchOn();
}

void legacyLight::switchOn() {
    if (!isOn) 
    {
        isOn = true;
        state=true;
        std::cout << "Lights turned on." << std::endl;
    }
}

void legacyLight::switchOff() {
    if (isOn) {
        isOn = false;
        state=false;
        std::cout << "Lights turned off." << std::endl;
    }
}
bool legacyLight::getState() const 
{
    return isOn;
}
