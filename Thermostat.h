#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include<string>
#include<iostream>
#include "Device.h"

class Thermostat : public Device { // Reciever
    private :
        int temperature ;
    public :

    Thermostat();
    string getStatus() override;
    string getDeviceType() override;
    void performAction(const string& action) override;
    void setTemp(int temp);
    int getTemp() const;
    void update() override {
    }
    };

    


#endif