#include <iostream>
#include "intset.h"
#include <algorithm>



using namespace std;



IntegerSet::IntegerSet(){

}

IntegerSet::~IntegerSet(){



}

void IntegerSet::AddNumber(int num){
    numbers_.push_back(num);
    sort(numbers_.begin(),numbers_.end());
    for(int i=0; i<numbers_.size();i++){
        cout<<numbers_[i]<<" ";
    }
    cout<<endl;


}

void IntegerSet::DeleteNumber(int num){
    for(std::vector<int>::iterator it=numbers_.begin(); it!=numbers_.end(); it++){
        if(*it==num){
            numbers_.erase(it);
              
        }
    }
    for(int i=0; i<numbers_.size();i++){
        cout<<numbers_[i]<<" ";
    }
    cout<<endl;
}

int IntegerSet::GetItem(int pos){
    if(pos>numbers_.size()){
        return -1;
    }
    else{
    return numbers_[pos];
    }

}







