#ifndef SMARTDOOR_H
#define SMARTDOOR_H

class SmartDoor 
{
public:
   virtual void setLockUnlock(bool lock) = 0;
    virtual bool getDoorState() const =0;
    virtual ~ SmartDoor()=default;
};

#endif 
