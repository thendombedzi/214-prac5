#ifndef MACROROUTINE_H
#define MACROROUTINE_H

#include <vector>
#include "Command.h"
#include "Device.h"
#include <string>
#include <algorithm>


class MacroRoutine : public Command{
    std::vector<Command*> commands ;
    public :
        void addProcedure(Command* cmd) {
            commands.push_back(cmd);
        }
        void removeProcedure(Command* cmd) {
            auto it = std::find(commands.begin(), commands.end(), cmd);  // Find the element
            if (it != commands.end()) {  // If found, erase it
                commands.erase(it);
            }
        }
        void execute() override {
            for (auto& cmd : commands) {
                cmd->execute();
            }
        }
        ~MacroRoutine() {
            for (auto cmd : commands) {
                delete cmd;
            }
        }
};

#endif