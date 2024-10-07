#include "smartLightIntegrator.h"

smartLightIntegrator::smartLightIntegrator()
{
    light= new legacyLight(false);
}

void smartLightIntegrator::setLightState(bool state) {
    if (state) {
        light->switchOn();
    } else {
        light->switchOff();
    }
}

bool smartLightIntegrator::getLightState() const {
    return light->getState();
}
