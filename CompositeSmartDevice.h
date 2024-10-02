#ifndef COMPOSITESMARTDEVICE
#define COMPOSITESMARTDEVICE
#include "Device.h"
#include <string>
#include <iostream>
#include <vector>
using namespace std ;

class CompositeSmartDevice : public Device {
private:
    std::string name;
    std::vector<Device*> devices;

public:
    CompositeSmartDevice(const std::string& name) : name(name) {}

    void addDevice(Device* device) {
        devices.push_back(device);
    }

    void removeDevice(Device* device) {
        for(auto it = devices.begin(); it != devices.end(); ++it){
            if(*it == device){
                devices.erase(it);
                break ;
            }
        }
    }
    std::string getStatus() override {
        std::string status = name + " Status:\n";
        for (Device* device : devices) {
            status += "- " + device->getDeviceType() + ": " + device->getStatus() + "\n";
        }
        return status;
    }

    void performAction(const std::string& action) override {
        for (Device* device : devices) {
            device->performAction(action);
        }
    }

    std::string getDeviceType() override {
        return "Composite: " + name;
    }
};

#endif