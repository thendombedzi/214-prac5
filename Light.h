#ifndef LIGHT_H
#define LIGHT_H

#include "Device.h"
#include <string>
#include <iostream>

using namespace std ;

class Light : public Device { // Reciever 
    private :
    bool isOn ;
    public :
    
    Light() ;
    string getStatus() override;
    string getDeviceType() override;
    void performAction(const string& action) override;
      void switchOn();
    void switchOff();
      void update() override;
      virtual  bool getState() const;
    
};

#endif