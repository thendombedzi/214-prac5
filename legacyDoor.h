#ifndef LEGACYDOOR_H
#define LEGACYDOOR_H

class legacyDoor 
{
private:
    bool isLocked;
public:
    legacyDoor();
    void lock();
    void unlock();
    bool getState() const;
};

#endif 
