#include <iostream>
#include "intset.h"


using namespace std;

int main(){

    IntegerSet newset;

while(1){

    string input;
    cin>>input;

    if(input=="add"){
        int addinput;
        cin>>addinput;
        newset.AddNumber(addinput);
        
        
    }
    else if(input=="del"){
        int delinput;
        cin>>delinput;
        newset.DeleteNumber(delinput);
        
    }
    else if(input=="get"){
        int getinput;
        cin>>getinput;
        cout<<newset.GetItem(getinput)<<endl;

    }
    else if(input=="quit"){
        break;
    }




}
return 0;




}