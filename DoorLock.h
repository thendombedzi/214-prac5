#ifndef DOORLOCK_H
#define DOORLOCK_H

#include "Device.h"
#include <iostream>
using namespace std ;


class DoorLock : public Device { // Reciever
    private :
        bool isLocked;
    public :

    DoorLock();
    bool getState() const;
     std::string getStatus() override ;

    void performAction(const std::string& action) override;

    std::string getDeviceType() override;

    void update() override {
    }

};

#endif