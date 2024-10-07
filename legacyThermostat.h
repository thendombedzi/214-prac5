#ifndef LEGACYTHERMOSTAT_H
#define LEGACYTHERMOSTAT_H

class legacyThermostat 
{
private:
    int temperature;
public:
    legacyThermostat();
    void setTemp(int temp);
    int getTemp() const;
};

#endif 
