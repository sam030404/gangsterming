#include <iostream>
#include <string>
#include <vector>

using namespace std;




class A {
    public:
        virtual string getTypeInfo(){
           return "This is an instance of class A\n";
        }
};

class B:public A {
    public:
        virtual string getTypeInfo(){
           return "This is an instance of class B\n";

        }
};

class C:public B {
    public:
        virtual string getTypeInfo(){
           return "This is an instance of class C\n";
        }
};

void printObjectTypeInfo1(A* object){
    cout<<object->getTypeInfo();
};

void printObjectTypeInfo2(A& object){
    cout<<object.getTypeInfo();
};


int main(){
    A* class_a=new A;
    B* class_b=new B;
    C* class_c=new C;
    
    vector<A*> arr;
    
    arr.push_back(class_a);
    arr.push_back(class_b);
    arr.push_back(class_c);

    for(int i=0;i<arr.size();i++){
        printObjectTypeInfo1(arr[i]);
        printObjectTypeInfo2(*arr[i]);

    }

    delete class_a;
    delete class_b;
    delete class_c;

    return 0;







}