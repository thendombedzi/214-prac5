#include "motionSensor.h"
#include "Light.h"
#include "Alarms.h"
#include "DoorLock.h"
#include "Room.h"
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
int main() {

    observerTest();
    testCompositePattern();
    
    return 0;}
