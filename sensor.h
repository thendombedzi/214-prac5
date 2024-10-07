#ifndef SENSOR_H
#define SENSOR_H

#include <vector>
#include "Device.h"

class Sensor {
private:
    std::vector<Device*> devices;
     

public:
    void addDevice(Device* device);
    void removeDevice(Device* device);
    void notifyDevices();

   virtual ~Sensor()=default;
   virtual bool getMotionState() const=0;
   virtual void detectMotion()=0;
};

#endif
