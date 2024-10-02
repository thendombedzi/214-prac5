#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "Device.h"
#include <iostream>
using namespace std ;


class DoorLock : public Device { // Reciever
    private :
        bool isOn ;
    public :
    void ToggleOn() override {
        if(isOn){
            cout << "Door is already Locked ." << endl ;
            return ;
        }
        isOn = true  ;
        cout << "Door Locked ." << endl;
    }
    void ToggleOff() override {
        if(!isOn){
            cout << "Door is already UnLocked ." << endl ;
            return ;
        }
        isOn = false  ;
        cout << "Door UnLocked ." << endl;
    }
    string getStatus() override {
        return isOn ? "locked" : "unlocked" ;
    }
    string getDeviceType() override {
        return "DoorLock" ;
    }
    void performAction() override {
        if(isOn){
            ToggleOff() ;
        } else {
            ToggleOn() ;
        }
    }
};

#endif