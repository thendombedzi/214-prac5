#ifndef LOCKDOORS_H
#define LOCKDOORS_H
#include "Device.h"
#include "Command.h"

class LockDoors : public Device {
    private :
        Device* device ;
    public :
        LockDoors(Device* dev):device(dev){}
        void execute(){
            device->performAction("Lock");
        }
};

#endif