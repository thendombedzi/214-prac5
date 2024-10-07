#include "motionSensor.h"
#include "Light.h"
#include "alarms.h"
#include "SmartThermostatIntegrator.h"
#include "Thermostat.h"
#include "smartThermostat.h"
#include "smartLightIntegrator.h"
#include "Light.h"
#include "smartLights.h"
#include "SmartDoorIntegrator.h"
#include "DoorLock.h"
#include "smartDoor.h"
#include "Room.h"
#include "LockDoors.h"
#include "TurnOffLights.h"
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

void testCompositePattern(){
    Device* light1 = new Light();
    Device* light2 = new Light();
    Device* doorLock = new DoorLock();

    Room* livingRoom = new Room("Living Room");
    livingRoom->addDevice(light1);
    livingRoom->addDevice(light2);
    livingRoom->addDevice(doorLock);

    Device* light3 = new Light();
    Room* kitchen = new Room("Kitchen");
    kitchen->addDevice(light3);

    
    std::cout << "\n--- Testing individual device actions ---\n";
    std::cout << "Light 1 status: " << light1->getStatus() << "\n";

    doorLock->performAction("Lock");  
    std::cout << "DoorLock status: " << doorLock->getStatus() << "\n";
    std::cout << "\n--- Testing room actions ---\n";
    livingRoom->performAction("ToggleOn"); 

    std::cout << "\n--- Getting room status ---\n";
    std::cout << livingRoom->getStatus();

    std::cout << "\n--- Testing device removal from room ---\n";
    livingRoom->removeDevice(light1);
    std::cout << livingRoom->getStatus(); 

    std::cout << "\n--- Adding rooms to sections (optional) ---\n";
    Room* houseSection = new Room("House Section");
    houseSection->addDevice(livingRoom);
    houseSection->addDevice(kitchen);
    
    houseSection->performAction("ToggleOn"); 
    std::cout << houseSection->getStatus();
    
    delete light1;
    delete light2;
    delete doorLock;
    delete light3;
    delete livingRoom;
    delete kitchen;
    delete houseSection;
}
void testCommandPattern() {
    // Create device instances (receivers)
    Light livingRoomLight;
    DoorLock mainDoor;

    // Create concrete command objects and bind them to the devices
    TurnOffLights turnOffLivingRoomLight(&livingRoomLight);
    LockDoors lockMainDoor(&mainDoor);

    // Execute the commands
    std::cout << "Testing TurnOffLights Command:" << std::endl;
    turnOffLivingRoomLight.execute(); 

    std::cout << "Testing LockDoors Command:" << std::endl;
    lockMainDoor.execute();  

    std::cout << "Status of Living Room Light: " << livingRoomLight.getStatus() << std::endl;
    std::cout << "Status of Main Door: " << mainDoor.getStatus() << std::endl;
}
int main() {
    
 std::cout<<"Test the Observer design pattern: "<<endl;
    observerTest();
    std::cout<<endl;

std::cout<<"Test the Adapter design pattern: "<<endl;
    adapterTest();
      std::cout<<endl;
std::cout <<"Testing the Composite design pattern :"<< endl ;
    testCompositePattern();
    std::cout << endl ;
std::cout <<"Testing the Command design pattern :"<< endl ;
    testCommandPattern();
    std::cout << endl ;
    
    return 0;}
