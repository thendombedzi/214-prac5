#ifndef LEGACYLIGHT_H
#define LEGACYLIGHT_H

#include "smartDevices.h"

class legacyLight :public smartDevices
{
private:
    bool isOn;
public:
    legacyLight();
    void update() override;
    void switchOn();
    void switchOff();
    virtual  bool getState() const;
};

#endif 
