#include "motionSensor.h"
#include "Light.h"
#include "Alarms.h"
#include "smartThermostatIntegrator.h"
#include "Thermostat.h"
#include "smartThermostat.h"
#include "smartLightIntegrator.h"
#include "Light.h"
#include "smartLights.h"
#include "smartDoorIntegrator.h"
#include "DoorLock.h"
#include "SmartDoor.h"
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

void adapterTest()
{
     std::cout<<"--- Thermostat Tests ---"<<endl;
   std::cout<<endl;
   smartThermostatIntegrator* thermostat = new smartThermostatIntegrator();

    std::cout << "Current temperature: " << thermostat->getTemperature() << "°C\n";
    
    thermostat->setTemperature(28);
    std::cout << "Temperature set to: " << thermostat->getTemperature() << "°C\n";
      std::cout<<endl;

   //smartLights
   std::cout<<"--- Lights Tests ---"<<endl;
   std::cout<<endl;
    smartLightIntegrator* light = new smartLightIntegrator();
   
    std::cout << "Is the light on initially: " << (light->getLightState() ? "Yes" : "No") << "\n";
    
    light->setLightState(true);
    std::cout << "Is the light on after setting it: " << (light->getLightState() ? "Yes" : "No")<< "\n";

     std::cout<<endl;

   //DoorLocks
   std::cout<<"--- Door Lock Tests ---"<<endl;
   std::cout<<endl;

     smartDoorIntegrator* door=new smartDoorIntegrator();
     std::cout << "Is the door locked initially: " << (door->getDoorState() ? "Yes" : "No") << "\n";
    
    door->setLockUnlock(true);
    std::cout << "Is the door locked after setting it: " << (door->getDoorState() ? "Yes" : "No")<< "\n";

     std::cout<<endl;
    
    // // Clean up allocated memory
     delete thermostat;
     delete light;
     delete door;
}
int main() {

 std::cout<<"Test the Observer design pattern: "<<endl;
    observerTest();
    std::cout<<endl;

std::cout<<"Test the Adapter design pattern: "<<endl;
    adapterTest();
      std::cout<<endl;
    
    return 0;}
