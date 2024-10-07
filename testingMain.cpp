#include "motionSensor.h"
#include "legacyLight.h"
#include "alarms.h"
#include <iostream>


void observerTest(){
    sensor* newSensor= new motionSensor();
   
    smartDevices* lights=new legacyLight();
    smartDevices* alarm=new alarms();

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
