#include <iostream>
#include <string>

using namespace std;

struct Person{
    string name;
    double score;

};

int main(int argc,char** argv){

    int n=atoi(argv[1]);
    Person* arr=new Person[n];
    for(int i=0;i<n;i++){
        arr[i].name=argv[2*i+2];
        arr[i].score=atof(argv[2*i+3]);
    }
    for(int i=0;i<n;i++){
        cout<<"Name: "<<arr[i].name<<", "<<"Score: "<<arr[i].score;
        cout<<endl;
    }

    delete [] arr;

    return 0;
}