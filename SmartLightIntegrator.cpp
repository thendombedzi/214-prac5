#include "smartLightIntegrator.h"

smartLightIntegrator::smartLightIntegrator()
{
    light= new Light();
}

void smartLightIntegrator::setLightState(bool state) 
{
    if (state) 
    {
        light->switchOn();
    } 
    else 
    {
        light->switchOff();
    }
}

bool smartLightIntegrator::getLightState() const 
{
    return light->getState();
}

smartLightIntegrator::~smartLightIntegrator()
{
    if(light)
    {
        delete light;
        light=nullptr;
    }
}
