#include <iostream>
#include <vector>

using namespace std;

class Animal{
    public:
        virtual string talk(){
            return "GANG";
        }
        virtual int getNumLegs(){
            return 0;
        }
};

class Cat: public Animal{
    public:
        virtual string talk(){
            return "Meow!";
        }
        virtual int getNumLegs(){
            return 4;
        }
};

int main(){
    Animal* pa =new Animal;
    Cat* pd=dynamic_cast<Cat*>(pa);
    if(pd){
        cout<<pd->getNumLegs()<<endl;
    }
    else{
        cout<<pa->getNumLegs()<<endl;
    }
    return 0;
}
