#ifndef SMARTDEVICES_H
#define SMARTDEVICES_H

class smartDevices {
    protected:
    bool state;
public:
    virtual void update() = 0;  
    virtual bool getState(){return state;}
    virtual ~smartDevices()=default;
};

#endif
