#include <iostream>
#pragma once
#include <vector>


using namespace std;

class SortedArrary {

    public:
        SortedArrary();
        ~SortedArrary();

        

        void Addnumber(int num);

        std::vector<int> GetSortedAscending();
        std::vector<int> GetSortedDescending();
        int GetMax();
        int GetMin();

    private:
            std::vector<int> numbers_;    

};