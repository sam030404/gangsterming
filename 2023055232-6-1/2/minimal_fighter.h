#ifndef __minimal_fighter__
#define __minimal_fighter__

#include <iostream>
#include <string>

using namespace std;

enum EFighterStatus
{
    Invalid = 0,
    
    Alive,
    Dead,
};
typedef enum EFighterStatus FighterStatus;

class MinimalFighter
{
    private:
    int mHp,mPower;
    FighterStatus mStatus;

    public:
    MinimalFighter(){
        mHp=0;
        mPower=0;
        mStatus=Invalid;
    };

    MinimalFighter(int _hp,int _power);
    int hp();
    int power();
    FighterStatus status();
    void setHp(int _hp);
    void hit(MinimalFighter* _enemy);
    void attack(MinimalFighter* _enemy);
    void fight(MinimalFighter* _enemy);


    

};

#endif