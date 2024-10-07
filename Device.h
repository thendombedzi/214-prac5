#ifndef DEVICE_H
#define DEVICE_H

#include <string>
using namespace std ;

class Device {
public:
    virtual string getStatus() = 0;
    virtual void performAction(const string& action) = 0;
    virtual string getDeviceType() = 0;
    virtual ~Device() = default;
};


#endif