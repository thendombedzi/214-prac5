#ifndef SMARTLIGHTINTEGRATOR_H
#define SMARTLIGHTINTEGRATOR_H

#include "smartLights.h"
#include "Light.h"

class smartLightIntegrator : public smartLights {
private:
    Light* light;
public:
    smartLightIntegrator();
    virtual void setLightState(bool state) ;
    virtual bool getLightState() const ;
    ~smartLightIntegrator();
};

#endif 
