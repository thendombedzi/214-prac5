#ifndef THERMOSTAT_H
#define THERMOSTAT_H

#include<string>
#include<iostream>
#include "Device.h"

class Thermostat : public Device {  // Reciever
    private :
        bool isOn ;
    public :
    void ToggleOn() override {
        if(isOn){
            cout << "Thermostat is already On ." << endl; 
            return ;
        }
        isOn = true ;
        cout <<" Thermostat turned On ." << endl ;
    }
    void ToggleOff() override {
        if(!isOn){
            cout << "Thermostat is already Off ." << endl; 
            return ;
        }
        isOn = false ;
        cout <<" Thermostat turned Off ." << endl ;
    }
    string getStatus() override{
        return isOn ? "On" : "Off" ;
    }
    string getDeviceType() override {
        return "Thermostat" ;
    }
    void performAction() override {
        if(isOn){
            ToggleOff();
        } else {
            ToggleOff() ;
        }
    }
};

#endif