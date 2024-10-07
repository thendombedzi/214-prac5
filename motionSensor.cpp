#include "motionSensor.h"
#include <iostream>

motionSensor::motionSensor() : motionDetected(false) 
{}

void motionSensor::detectMotion() 
{
  motionDetected = true;
    std::cout << "Motion detected!" << std::endl;
    notifyDevices(); 
 }

bool motionSensor:: getMotionState() const
{
       return motionDetected;  
    }

