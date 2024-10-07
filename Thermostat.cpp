#include "Thermostat.h"
using namespace std;

Thermostat::Thermostat():temperature(22)
{}

void Thermostat::setTemp(int temp) 
{
    temperature = temp;
}

int Thermostat::getTemp() const
{
    return temperature;
}

string Thermostat:: getStatus() 
{
        return "Temperature: " + to_string(temperature) + "°C";
    }

    string Thermostat:: getDeviceType()  
    {
        return "Thermostat" ;
    }
    void Thermostat:: performAction(const string& action)  
    {
        if (action == "IncreaseTemp") {
            temperature += 1;
        } else if (action == "DecreaseTemp") {
            temperature -= 1;
        }
    }

