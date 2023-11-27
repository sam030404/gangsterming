#include "shapes.h"
#include <vector>
#include <string>

int main(){
    vector<Shape*> arr;


while(1){
    string inputstr;
    cin>>inputstr;
    double inputw;
    double inputh;
    
    if(inputstr=="0"){
        for(int i=0; i<arr.size();i++){
            cout<<arr[i]->getArea()<<endl;
            
        
        }
        break;
    }
    else if(inputstr=="r"){
        cin>>inputw>>inputh;
        arr.push_back(new Rectangle(inputw,inputh));
    }
    else if(inputstr=="t"){
        cin>>inputw>>inputh;
        arr.push_back(new Triangle(inputw,inputh));
    }

}
for(int i=0; i<arr.size();i++){
    delete arr[i];
}

return 0;
}