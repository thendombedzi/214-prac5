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
    void ToggleOn() override {
        if(isOn){
            cout << "Light already on ." << endl ;
            return ;
        }
        isOn = true ;
        cout << "Light turned on ." << endl ;
    }
    void ToggleOff() override {
        if(!isOn){
            cout << "Light is alread off" << endl ;
            return ;
        }
        isOn = false ;
        cout << " Light turned off ." << endl;
    }
    string getStatus() override {
        return isOn ? "on" : "off" ;
    }
    string getDeviceType() override {
        return "Light" ;
    }
    void performAction() override {
        if(isOn){
            ToggleOn ;
        } else {
            ToggleOff ;
        }
    }
};

#endif