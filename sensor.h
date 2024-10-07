#ifndef SENSOR_H
#define SENSOR_H

#include <vector>
#include "smartDevices.h"

class sensor {
private:
    std::vector<smartDevices*> devices;
     

public:
    void addDevice(smartDevices* device);
    void removeDevice(smartDevices* device);
    void notifyDevices();

   virtual ~sensor()=default;
   virtual bool getMotionState() const=0;
   virtual void detectMotion()=0;
};

#endif
