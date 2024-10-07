#ifndef LEGACYLIGHT_H
#define LEGACYLIGHT_H


class legacyLight 
{
private:
    bool isOn;
public:
    legacyLight();
    void switchOn();
    void switchOff();
    bool getState() const;
};

#endif 
