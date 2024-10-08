#ifndef MOTIONSENSOR_H
#define MOTIONSENSOR_H

#include "Sensor.h"

class motionSensor : public Sensor 
{
    private:
       bool motionDetected;
public:
    motionSensor();
    virtual void detectMotion();
    virtual void resetSensor();
    virtual bool getMotionState() const;
    
    };

#endif
