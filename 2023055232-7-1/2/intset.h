#include<vector>

class IntegerSet
{
public:
    IntegerSet();
    ~IntegerSet();

    void AddNumber(int num);
    void DeleteNumber(int num);
    int GetItem(int pos);
    

private:
    std::vector<int> numbers_;
};