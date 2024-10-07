#include "HouseSection.h"

 HouseSection::HouseSection(const std::string& name) : sectionName(name) {}

    void HouseSection::addRoom(Room* room) {
        rooms.push_back(room);
    }

    std::string HouseSection:: getStatus()  {
        std::string status = "Section " + sectionName + ":\n";
        for (auto& room : rooms) {
            status += room->getStatus();
        }
        return status;
    }

    void HouseSection:: performAction(const std::string& action)  {
        for (auto& room : rooms) {
            room->performAction(action);
        }
    }

    std::string HouseSection::getDeviceType()  {
        return "Section: " + sectionName;
    }