#include <iostream>
#include <string>
#include "number.h"

using namespace std;

int main(){

    Number newclass;
    Square newsquare;
    Cube newcube;    

    while(1){
    string inputstr;
    cin>>inputstr;
    
    
    

    if(inputstr=="quit"){
        break;
    }

    else if(inputstr=="number"){
        int inputnum;
        cin>>inputnum;
        newclass.setNumber(inputnum);
        cout<<"getNumber():"<<newclass.getNumber()<<endl;
        
    }
    else if(inputstr=="square"){
        int inputnum;
        cin>>inputnum;
        newsquare.setNumber(inputnum);
        cout<<"getNumber():"<<newsquare.getNumber()<<endl;
        cout<<"getSquare():"<<newsquare.getSquare()<<endl;

        
    }
    else if(inputstr=="cube"){
        int inputnum;
        cin>>inputnum;
        newcube.setNumber(inputnum);
        cout<<"getNumber():"<<newcube.getNumber()<<endl;
        cout<<"getSquare():"<<newcube.getSquare()<<endl;
        cout<<"getCube():"<<newcube.getCube()<<endl;
    }


    
    }

    return 0;
}