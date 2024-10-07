#ifndef SMARTLIGHTS_H
#define SMARTLIGHTS_H

class smartLights 
{
public:
   virtual void setLightState(bool state) = 0;
    virtual bool getLightState() const = 0;
     virtual ~smartLights(){};
};

#endif 
