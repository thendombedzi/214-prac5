#ifndef DEVICE_H
#define DEVICE_H

#include <string>
using namespace std ;

class Device {
     protected:
    bool state;
public:
    virtual string getStatus() = 0;
    virtual void performAction(const string& action) = 0;
    virtual string getDeviceType() = 0;
    virtual ~Device() = default;

    //
     virtual void update() = 0;  
    virtual bool getState(){return state;}
};


#endif