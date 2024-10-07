#ifndef SMARTTHERMOSTATINTEGRATOR_H
#define SMARTTHERMOSTATINTEGRATOR_H

#include "legacyThermostat.h"

class smartThermostatIntegrator 
{
private:
    legacyThermostat* thermostat;
public:
   smartThermostatIntegrator();

    void setTemperature(int temp);
    int getTemperature() const;
    ~smartThermostatIntegrator();
};

#endif 
