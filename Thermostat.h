#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include<string>
#include<iostream>
#include "Device.h"

class Thermostat : public Device { // Reciever
    private :
        int temperature ;
    public :
        Thermostat() : temperature(22) {}
        
    string getStatus() override{
        return "Temperature: " + to_string(temperature) + "°C";
    }
    string getDeviceType() override {
        return "Thermostat" ;
    }
    void performAction(const string& action) override {
        if (action == "IncreaseTemp") {
            temperature += 1;
        } else if (action == "DecreaseTemp") {
            temperature -= 1;
        }
    }
};

#endif


// class daigram - must combine thendos and mine 