#include <iostream>
#include <vector>
#include <algorithm>
#include "sorted.h"

using namespace std;

int main(){

    
    
    SortedArrary array;

    while(1){
    
    string input;
    cin>>input;
    
    if(input=="ascend"){
        array.GetSortedAscending();
    }
    else if(input=="descend"){
        array.GetSortedDescending();
    }
    else if(input=="max"){
        cout<<array.GetMax()<<endl;
    }
    else if(input=="min"){
        cout<<array.GetMin()<<endl;
    }
    else if(input=="quit"){
        break;
    }
    else{
        int number=stoi(input);
        array.Addnumber(number);
    }
    }

    return 0;

}
