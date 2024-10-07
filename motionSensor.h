#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include "sensor.h"

class motionSensor : public sensor 
{
    private:
       bool motionDetected;
public:
    motionSensor();
    virtual void detectMotion();
    virtual bool getMotionState() const;
    
    };

#endif
