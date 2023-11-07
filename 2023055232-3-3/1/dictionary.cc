#include <iostream>
#include <string>

using namespace std;

int main(){
    int n;
    string String[100];
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>String[i];
    }

    
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(String[i]>String[j]){
                string temp;
                temp=String[j];
                String[j]=String[i];
                String[i]=temp;
                }
            

    }
    }

    for(int i=0;i<n;i++){
        cout<<String[i]<<endl;
    }
    

    
return 0;
}
