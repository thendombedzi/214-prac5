#ifndef ALARMS_H
#define ALARMS_H

#include "smartDevices.h"

class alarms : public smartDevices 
{
    private:
       bool activated;
public:
    alarms();
    void update() override;
    void activate();
    void deactivate();
    virtual bool getState() const;
    
    };

#endif