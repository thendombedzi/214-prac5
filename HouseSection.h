#ifndef HOUSESECTION_H
#define HOUSESECTION_H
#include "Device.h"
#include "Room.h"
#include <string>
#include <vector>

class HouseSection : public Device {
    std::string sectionName;
    std::vector<Room*> rooms;
public:
    HouseSection(const std::string& name) : sectionName(name) {}

    void addRoom(Room* room) {
        rooms.push_back(room);
    }

    std::string getStatus() override {
        std::string status = "Section " + sectionName + ":\n";
        for (auto& room : rooms) {
            status += room->getStatus();
        }
        return status;
    }

    void performAction(const std::string& action) override {
        for (auto& room : rooms) {
            room->performAction(action);
        }
    }

    std::string getDeviceType() override {
        return "Section: " + sectionName;
    }
};



#endif