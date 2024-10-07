#ifndef SMARTDOOR_H
#define SMARTDOOR_H

class smartDoor 
{
public:
   virtual void setLockUnlock(bool lock) = 0;
    virtual void getDoorState()=0;
};

#endif 
