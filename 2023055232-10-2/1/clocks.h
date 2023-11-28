#include "clock_time.h"

class Clock{
    public:
        Clock(int hour,int minute,int second,double driftPerSecond);
        virtual ~Clock(){};
        void reset();
        void tick();
        virtual void displayTime()=0;
    
    protected:
        ClockTime _ClockTime;
        double _driftPerSecond;
        double _totalDrift;
        int _hour;
        int _minute;
        int _second;
        
        


};


class NaturalClock: public Clock{
    public:
        NaturalClock(int hour,int minute,int second,double driftPerSecond);
        virtual void displayTime()=0;
        ~NaturalClock(){};

};

class MechanicalClock: public Clock{
    public:
        MechanicalClock(int hour,int minute,int second,double driftPerSecond);
        virtual void displayTime()=0;
        ~MechanicalClock(){};

};

class DigitalClock: public Clock{
    public:
        DigitalClock(int hour,int minute,int second,double driftPerSecond);
        virtual void displayTime()=0;
        ~DigitalClock(){};

};

class QuantumClock: public Clock{
    public:
        QuantumClock(int hour,int minute,int second,double driftPerSecond);
        virtual void displayTime()=0;
        ~QuantumClock(){};

};


class SundialClock: public NaturalClock{
    public:
        SundialClock(int hour,int minute, int second);
        virtual void displayTime();
        ~SundialClock(){};

};

class CuckooClock: public MechanicalClock{
    public:
        CuckooClock(int hour,int minute, int second);
        virtual void displayTime();
        ~CuckooClock(){};

};

class GrandFatherClock: public MechanicalClock{
    public:
        GrandFatherClock(int hour,int minute, int second);
        virtual void displayTime();
        ~GrandFatherClock(){};

};

class WristClock: public DigitalClock{
    public:
        WristClock(int hour,int minute, int second);
        virtual void displayTime();
        ~WristClock(){};

};

class AtomicClock:public QuantumClock{
    public:
        AtomicClock(int hour,int minute, int second);
        virtual void displayTime();
        ~AtomicClock(){};
};
