#ifndef TURNOFFLIGHTS_H
#define TURNOFFLIGHTS_H
#include "Command.h"
#include "Device.h"

class TurnOffLights : public Command{
    private :
        Device* device ;

    public :
        TurnOffLights(Device* dev) : device(dev){}
        void execute(){
            device->performAction("ToggleOff");
        }
};

#endif