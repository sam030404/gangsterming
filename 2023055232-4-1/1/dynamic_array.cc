#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    cin>>n;
    int* arr=new int[n];

    for(int i=0;i<n;i++){
        arr[i]=i;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }

    delete[] arr;

    return 0;

}


