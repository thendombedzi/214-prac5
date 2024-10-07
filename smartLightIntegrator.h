#ifndef SMARTLIGHTINTEGRATOR_H
#define SMARTLIGHTINTEGRATOR_H

#include "smartLights.h"
#include "legacyLight.h"

class smartLightIntegrator : public smartLights {
private:
    legacyLight* light;
public:
    smartLightIntegrator();
    void setLightState(bool state) override;
    bool getLightState() const override;
    ~smartLightIntegrator();
};

#endif 
