#include <iostream>
#include <string.h>
#include "shapes.h"

using namespace std;

int main(){
    cout<<"shape?"<<endl;
    char str;
    cin>>str;
    
    if(str=='C'){
        Circle A;
        double x,y,radius;
        double area,perimeter;
        cin>>x>>y>>radius;
        


        area=A.Circlearea(x,y,radius);
        perimeter=A.Circleperimeter(x,y,radius);
        cout<<"area: "<<area<<", "<<"perimeter: "<<perimeter<<endl;
    }
    else if(str=='R'){
        double x1,y1,x2,y2;
        double area,perimeter;
        cin>>x1>>y1>>x2>>y2;
        Rectangle B;
        area=B.Rectanglearea(x1,y1,x2,y2);
        perimeter=B.Rectangleperimeter(x1,y1,x2,y2);
        cout<<"area: "<<area<<", "<<"perimeter: "<<perimeter<<endl;
    }

    return 0;

    
    

}