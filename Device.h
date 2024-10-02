#ifndef DEVICE_H
#define DEVICE_H

#include <string>
using namespace std ;

class Device {
public :
    virtual void ToggleOn() = 0 ;
    virtual void ToggleOff() = 0 ;
    virtual string getStatus() = 0 ;
    virtual string getDeviceType() = 0 ;
    virtual void performAction() = 0 ;
    virtual ~Device() ;
} ;




#endif