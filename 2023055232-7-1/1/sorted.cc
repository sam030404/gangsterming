#include <iostream>
#include <vector>
#include <algorithm>
#include "sorted.h"




using namespace std;

SortedArrary::SortedArrary(){

}
SortedArrary::~SortedArrary(){

}
void SortedArrary::Addnumber(int num){
    numbers_.push_back(num);

}

vector<int> SortedArrary::GetSortedAscending(){
    sort(numbers_.begin(),numbers_.end());
    for(int i=0;i<numbers_.size();i++){
        cout<<numbers_[i]<<" ";
    }
    cout<<endl;
    
    return numbers_;
}

vector<int> SortedArrary::GetSortedDescending(){
    sort(numbers_.rbegin(),numbers_.rend());
    for(int i=0;i<numbers_.size();i++){
        cout<<numbers_[i]<<" ";
    }
    cout<<endl;
    return numbers_;
}


int SortedArrary::GetMax(){
    
    int maxnum= *max_element(numbers_.begin(),numbers_.end());
    return maxnum;
}

int SortedArrary::GetMin(){
    
    int minnum= *min_element(numbers_.begin(),numbers_.end());
    return minnum;
}


