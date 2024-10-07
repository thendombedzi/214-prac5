#include "legacyThermostat.h"
#include <iostream>
using namespace std;

legacyThermostat::legacyThermostat():temperature(25)
{cout<<"The thermostat is initially at room temperature."<<endl;}

void legacyThermostat::setTemp(int temp) 
{
    temperature = temp;
}

int legacyThermostat::getTemp() const
{
    return temperature;
}
