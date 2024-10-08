#include "Sensor.h"
#include <algorithm>

void Sensor::addDevice(Device* device) 
{
    devices.push_back(device);
}

void Sensor::removeDevice(Device* device) 
{
    devices.erase(std::remove(devices.begin(), devices.end(), device), devices.end());
}

void Sensor::notifyDevices() 
{
    for (auto device : devices) 
    {
        device->update();
    }
}


