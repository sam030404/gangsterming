#include "animal.h"

using namespace std;



int main()
{
    
    vector<Animal*> animals;
    
    while(1)
    {
        char animal;
        cin >> animal;
        if(animal=='0'){ 
        break;
        }
        
        
        else if(animal=='c')
        {
            string name; 
            string favoriteToy;
            int age;
            cin >> name >> age >> favoriteToy;
            Cat* c=new Cat(name, age, favoriteToy);
            animals.push_back(c);
        }
        
        else if(animal=='z')
        {
            string name;
            int age; 
            int numStripes;
            cin>>name>>age>>numStripes;
            Zebra* z=new Zebra(name,age,numStripes);
            animals.push_back(z);
        }
    }

    for(int i=0;i<animals.size();i++){
        animals[i]->printInfo();
    }
    for(int i=0;i<animals.size();i++){
        delete animals[i];
    }
    
    return 0;
}