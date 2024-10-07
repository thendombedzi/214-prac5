#include "smartThermostatIntegrator.h"

smartThermostatIntegrator::smartThermostatIntegrator() 
 { 
    thermostat= new legacyThermostat(25);
    }

void smartThermostatIntegrator::setTemperature(int temp) {
    thermostat->setTemp(temp);
}

int smartThermostatIntegrator::getTemperature() const {
    return thermostat->getTemp();
}

smartThermostatIntegrator::~smartThermostatIntegrator() {
    if (thermostat) 
    {
        delete thermostat;
        thermostat = nullptr;  
    }
}