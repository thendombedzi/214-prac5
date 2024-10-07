#include "sensor.h"
#include <algorithm>

void sensor::addDevice(smartDevices* device) 
{
    devices.push_back(device);
}

void sensor::removeDevice(smartDevices* device) 
{
    devices.erase(std::remove(devices.begin(), devices.end(), device), devices.end());
}

void sensor::notifyDevices() 
{
    for (auto device : devices) 
    {
        device->update();
    }
}


