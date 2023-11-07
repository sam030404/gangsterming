#include <iostream>
#include <string>

using namespace std;

int main(){
    struct person{
        int age;
        string name;
    };

int N;
cin>>N;
person people[N];  
for(int i=0;i<N;i++){
    
    cin>>people[i].name;
    cin>>people[i].age;


}

for(int i=0;i<N;i++){
    cout<<"Name :"<<people[i].name<<", Age :"<<people[i].age<<endl;
}

return 0;

}