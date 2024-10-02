#ifndef LIGHT_H
#define LIGHT_H

#include "Device.h"
#include <string>
#include <iostream>

using namespace std ;

class Light : public Device { // Reciever 
    private :
    bool isOn ;
    public :
    
    Light() : isOn(false) {}
    string getStatus() override {
        return isOn ? "on" : "off" ;
    }
    string getDeviceType() override {
        return "Light" ;
    }
    void performAction(const string& action) override {
        if (action == "ToggleOn") {
            isOn = true;
        } else if (action == "ToggleOff") {
            isOn = false;
        } else if (action == "Toggle") {
            isOn = !isOn;
        }
    }
};

#endif