#include "clocks.h"
#include <iostream>

using namespace std;

Clock::Clock(int hour,int minute,int second,double driftPerSecond){
  _ClockTime.setTime(hour,minute,second,1);
  _driftPerSecond=driftPerSecond;
  _totalDrift = 0;
}

void Clock::reset(){
  _ClockTime.reset();
}

void Clock::tick(){
  _ClockTime.increment();
  _totalDrift+=_driftPerSecond;
}

void SundialClock::displayTime(){
  cout << "SundialClock ";
  _ClockTime.display();
  cout << ", total drift: " << _totalDrift << endl;
}

void CuckooClock::displayTime(){
  cout << "CuckooClock ";
  _ClockTime.display();
  cout << ", total drift: " << _totalDrift << endl;
}

void GrandFatherClock::displayTime(){
  cout << "GrandFatherClock ";
  _ClockTime.display();
  cout << ", total drift: " << _totalDrift << endl;
}

void WristClock::displayTime(){
  cout << "WristClock ";
  _ClockTime.display();
  cout << ", total drift: " << _totalDrift << endl;
}

void AtomicClock::displayTime(){
  cout << "AtomicClock ";
  _ClockTime.display();
  cout << ", total drift: " << _totalDrift << endl;
}




NaturalClock::NaturalClock(int hour,int minute,int second,double driftPerSecond):Clock(hour, minute, second, driftPerSecond){


}

MechanicalClock::MechanicalClock(int hour,int minute,int second,double driftPerSecond):Clock(hour, minute, second, driftPerSecond){

}

DigitalClock::DigitalClock(int hour,int minute,int second,double driftPerSecond):Clock(hour, minute, second, driftPerSecond){

}

QuantumClock::QuantumClock(int hour,int minute,int second,double driftPerSecond):Clock(hour, minute, second, driftPerSecond){

}







SundialClock::SundialClock(int hour,int minute, int second):NaturalClock(hour,minute,second,0.0){
    
    
}

CuckooClock::CuckooClock(int hour,int minute, int second):MechanicalClock(hour,minute,second,0.000694444){
   
   
}

GrandFatherClock::GrandFatherClock(int hour,int minute, int second):MechanicalClock(hour,minute,second,0.000347222){
    
    
}

WristClock::WristClock(int hour,int minute, int second):DigitalClock(hour,minute,second,0.000034722){
  

}

AtomicClock::AtomicClock(int hour,int minute, int second):QuantumClock(hour,minute,second,0.0){
  
    
}


