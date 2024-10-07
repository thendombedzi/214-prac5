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
    HouseSection(const std::string& name);
    void addRoom(Room* room);
    std::string getStatus() override;

    void performAction(const std::string& action) override;
    std::string getDeviceType() override;
};



#endif