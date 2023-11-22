#include <iostream>
#include <string>
#include <vector>

using namespace std;


class A {
    public:
        virtual void test(){
            cout<<"A::test()"<<endl;
        }
};

class B:public A {
    public:
        virtual void test(){
            cout<<"B::test()"<<endl;
        }
};

class C:public B {
    public:
        virtual void test(){
            cout<<"C::test()"<<endl;
        }
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
        arr[i]->test();

    }

    delete class_a;
    delete class_b;
    delete class_c;

    return 0;







}