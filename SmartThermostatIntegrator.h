#ifndef SMARTTHERMOSTATINTEGRATOR_H
#define SMARTTHERMOSTATINTEGRATOR_H

#include "legacyThermostat.h"

class smartThermostatIntegrator 
{
private:
    legacyThermostat* thermostat;
public:
   smartThermostatIntegrator();

    virtual void setTemperature(int temp);
   virtual  int getTemperature() const;
    ~smartThermostatIntegrator();
};

#endif 
