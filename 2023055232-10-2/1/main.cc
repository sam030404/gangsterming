#include "clocks.h"
#include <iostream>
#include <vector>

using namespace std;

int main(){
    
    vector<Clock*> clock;
    int inputsec;
    cin>>inputsec;

    clock.push_back(new SundialClock(0, 0, 0));
    clock.push_back(new CuckooClock(0, 0, 0));
    clock.push_back(new GrandFatherClock(0, 0, 0));
    clock.push_back(new WristClock(0, 0, 0));
    clock.push_back(new AtomicClock(0, 0, 0));
    
    for(int i=0;i<clock.size();i++){
        clock[i]->reset();
    }
    cout<<"Reported clock times after resetting:"<<endl;
    for(int i=0; i<clock.size(); i++){
        clock[i]->displayTime();
    }
    cout<<endl<<"Running the clocks..."<< endl;

    for(int i=0; i<inputsec;i++){
        for(int j=0; j<clock.size(); j++){
            clock[j]->tick();
        }
    }

    cout<<endl<<"Reported clock times after running:"<<endl;
    for(int i=0;i<clock.size();i++){
        clock[i]->displayTime();
    }
     for(int i=0;i<clock.size();i++){
        delete clock[i];
    }

    return 0;
}