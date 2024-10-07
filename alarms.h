#ifndef ALARMS_H
#define ALARMS_H

#include "Device.h"

class Alarms : public Device
{
    private:
       bool activated;
public:
    Alarms();
    void update() override;
    void activate();
    void deactivate();
    virtual bool getState() const;
    void performAction(const string& action) override;
     string getStatus()  override;
      string getDeviceType()  override;
      
    
    };

#endif