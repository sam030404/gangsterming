#include <iostream>
#include <string>

using namespace std;

void swap(int& a, int& b) {
    int temp=a;
    a=b;
    b=temp;
}

void bubblesort(int array[], int n) {
    for (int i =0; i<n-1; i++) {
        for (int j =0; j<n-i-1; j++) {
            if (array[j] > array[j+1]) {
                swap(array[j], array[j+1]);
            }
        }
    }
}

int main(){

    int N;
    cin>>N;
    if(N>0){
        int* arr=new int[N];
        for(int i=0;i<N;i++){
            cin>>arr[i];
        }
        bubblesort(arr,N);

        for(int i=0;i<N;i++){
            cout<<arr[i]<<" ";
        }

        delete[] arr;

    }
    

    return 0;




}