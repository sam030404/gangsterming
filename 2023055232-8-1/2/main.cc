#include <iostream>
#include <string>
#include "rect.h"

using namespace std;

int main(){
    

    while(1){
        string inputstr;
        cin>>inputstr;

        if(inputstr=="quit"){
            break;
        }
        else if(inputstr=="nonsquare"){
            int num1,num2;
            cin>>num1>>num2;
            
            NonSquare new1(num1,num2);
            new1.print();
        }
        else if(inputstr=="square"){
            int num1;
            cin>>num1;
            
            Square new2(num1);
            new2.print();
        }   
    }

    return 0;



}