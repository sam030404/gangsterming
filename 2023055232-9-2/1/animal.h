#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Animal{
    protected:
        int _age;
        string _name;
    public:
        Animal(string name,int age);
        virtual void printInfo();
    
    
};

class Zebra :public Animal{
    private:
        int _numStripes;
    public:
        Zebra(string name,int age,int numStripes);
        virtual void printInfo();

};

class Cat : public Animal{
    private:
        string _favoriteToy;
    public:
        Cat(string name,int age,string favoriteToy);
        virtual void printInfo();

};

