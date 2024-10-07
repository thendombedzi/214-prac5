#include "motionSensor.h"
#include "Light.h"
#include "Alarms.h"
#include <iostream>


void observerTest(){
    Sensor* newSensor= new motionSensor();
   
    Device* lights=new Light();
    Device* alarm=new Alarms();

    newSensor->addDevice(lights);
    newSensor->addDevice(alarm);

    std::cout << "Initial states:" << std::endl;
    std::cout << "Motion detected: " << (newSensor->getMotionState() ? "Yes" : "No") << std::endl;
    std::cout << "Lights on: " << (lights->getState() ? "Yes" : "No") << std::endl;
    std::cout << "Alarm triggered: " << (alarm->getState() ? "Yes" : "No") << std::endl;
   
    std::cout << "\nSimulating motion detection:" << std::endl;
    newSensor->detectMotion();

    std::cout << "\nUpdated states:" << std::endl;
    std::cout << "Motion detected: " << (newSensor->getMotionState() ? "Yes" : "No") << std::endl;
    std::cout << "Lights on: " << (lights->getState() ? "Yes" : "No") << std::endl;
    std::cout << "Alarm triggered: " << (alarm->getState() ? "Yes" : "No") << std::endl;

   delete lights;
   delete alarm;
   delete newSensor;
 

}
int main() {

    observerTest();
    
    return 0;}
