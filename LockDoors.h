#ifndef LOCKDOORS_H
#define LOCKDOORS_H
#include "Device.h"
#include "Command.h"

class LockDoors : public Command {
    private :
        Device* device ;
    public :
        LockDoors(Device* dev):device(dev){}
        void execute()override{
            device->performAction("Lock");
        }
        ~LockDoors() override {};

};

#endif