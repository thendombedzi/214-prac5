#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "Device.h"
#include <iostream>
using namespace std ;


class DoorLock : public Device { // Reciever
    private :
        bool isLocked;
    public :
    
    std::string getStatus() override {
        return isLocked ? "locked" : "unlocked";
    }

    void performAction(const std::string& action) override {
        if (action == "Lock") {
            isLocked = true;
        } else if (action == "Unlock") {
            isLocked = false;
        }
    }

    std::string getDeviceType() override {
        return "DoorLock";
    }

};

#endif