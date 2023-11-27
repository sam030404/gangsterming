#include <iostream>
#include <vector>
#include <string>


using namespace std;

class B{
    public:
        virtual ~B(){};
};

class C: public B{
    public:
        void test_C(){
            cout<<"C::test_C()"<<endl;

        }
};

class D: public B{
    public:
        void test_D(){
            cout<<"D::test_D()"<<endl;
        }
};

int main(){
    vector<B*> arr;
    
    while(1){
        string input;
        cin>>input;

        if(input=="B"){
            arr.push_back(new B);
            
        }
        else if(input=="C"){
            arr.push_back(new C);
        }
        else if(input=="D"){
            arr.push_back(new D);
        }
        else if(input=="0"){
            break;
        }
    }
    for(int i=0;i<arr.size();i++){
            C* cc=dynamic_cast<C*>(arr[i]);
            D* dd=dynamic_cast<D*>(arr[i]);
            if(cc){ 
                cc->test_C();
            }
            else if(dd){
                dd->test_D();
            }
    }
    for(int i=0;i<arr.size();i++){
            delete arr[i];
    } 
    return 0;
}