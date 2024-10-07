#include "legacyLight.h"
#include <iostream>
using namespace std;

legacyLight::legacyLight(): isOn(false) 
{ cout<<"The lights are initially off."<<endl;}

void legacyLight::switchOn() 
{
    isOn = true;
}

void legacyLight::switchOff() 
{
    isOn = false;
}

bool legacyLight::getState() const 
{
    return isOn;
}
