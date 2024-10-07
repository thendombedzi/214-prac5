#ifndef SMARTTHERMOSTAT_H
#define SMARTTHERMOSTAT_H

class smartThermostat {
public:
     virtual void setTemperature(int temp) = 0;
    virtual int getTemperature() const = 0;
     virtual ~smartThermostat(){};
};

#endif 
