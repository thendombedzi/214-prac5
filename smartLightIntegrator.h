#ifndef SMARTLIGHTINTEGRATOR_H
#define SMARTLIGHTINTEGRATOR_H

#include "smartLights.h"
#include "legacyLight.h"

class smartLightIntegrator : public smartLights {
private:
    legacyLight* light;
public:
    smartLightIntegrator();
    virtual void setLightState(bool state) ;
    virtual bool getLightState() const ;
    ~smartLightIntegrator();
};

#endif 
