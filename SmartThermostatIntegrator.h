#ifndef SMARTTHERMOSTATINTEGRATOR_H
#define SMARTTHERMOSTATINTEGRATOR_H

#include "Thermostat.h"

class smartThermostatIntegrator 
{
private:
    Thermostat* thermostat;
public:
   smartThermostatIntegrator();

    virtual void setTemperature(int temp);
   virtual  int getTemperature() const;
    ~smartThermostatIntegrator();
};

#endif 
