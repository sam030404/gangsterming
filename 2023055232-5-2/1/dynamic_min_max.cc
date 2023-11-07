#include <iostream>
#include <string>

using namespace std;

void swap(int& a, int& b) {
    int temp=a;
    a=b;
    b=temp;
}

void bubblesort(int arr[], int n) {
    for (int i =0; i<n-1; i++) {
        for (int j =0; j<n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}


int main(int argc,char** argv){
    int N;
    N=argc;
    N=N-1;
    int* arr=new int[N];

    
    

    for(int i=0;i<N;i++){
        arr[i]=atoi(argv[i+1]);
    }

    bubblesort(arr,N);
    
    cout<<"min:"<<arr[0]<<endl;
    cout<<"max:"<<arr[N-1]<<endl;
    delete[] arr;


    return 0;


}