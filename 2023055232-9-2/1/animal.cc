#include "animal.h"

Animal::Animal(string name, int age)
{
    _name=name;
    _age=age;
}

Zebra::Zebra(string name, int age, int numStripes) : Animal(name, age)
{
    _name=name;
    _age=age;
    _numStripes = numStripes;
}

Cat::Cat(string name, int age, string favoriteToy) : Animal(name,age)
{
    _name=name;
    _age=age;  
    _favoriteToy=favoriteToy;  
}
void Animal::printInfo() {}

void Zebra::printInfo()
{
cout<<"Zebra, Name:"<<_name<<", Age: "<<_age<<", Number of stripes: "<<_numStripes<<endl;
}

void Cat::printInfo()
{
cout<<"Cat, Name: "<<_name<<", Age: "<<_age<<", Favorite toy: "<<_favoriteToy<<endl;
}