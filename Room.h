#ifndef ROOM_H
#define ROOM_H
#include "Device.h"
#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std ;
class Room : public Device {
    std::string roomName;
    std::vector<Device*> devices;
public:
    Room(const std::string& name) : roomName(name) {}

    void addDevice(Device* device) {
        devices.push_back(device);
    }
    void removeDevice(Device* device) {
        // Removing device from the room
        devices.erase(std::remove(devices.begin(), devices.end(), device), devices.end());
    }



    std::string getStatus() override {
        std::string status = "Room " + roomName + ":\n";
        for (auto& device : devices) {
            status += "- " + device->getDeviceType() + ": " + device->getStatus() + "\n";
        }
        return status;
    }

    void performAction(const std::string& action) override {
        for (auto& device : devices) {
            device->performAction(action);
        }
    }

    std::string getDeviceType() override {
        return "Room: " + roomName;
    }

    void update() override {}
};

#endif