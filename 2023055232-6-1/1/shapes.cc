#include "shapes.h"

double Circle::Circlearea(double x,double y,double radius){
    double _x=x,_y=y,_radius=radius;
    double area;
    double pi=3.14;
    area=(_radius)*(_radius)*(pi);
    return area;

}



double Circle::Circleperimeter(double x,double y,double radius){
    double _x=x,_y=y,_radius=radius;
    double perimeter;
    double pi=3.14;
    perimeter=2*pi*(_radius);
    return perimeter;
}

double Rectangle::Rectanglearea(double x,double y,double x1,double y1){
    double _x=x,_y=y,_x1=x1,_y1=y1;
    double area;
    area=(_x1-_x)*(_y-_y1);
    return area;
}



double Rectangle::Rectangleperimeter(double x,double y,double x1,double y1){
    double _x=x,_y=y,_x1=x1,_y1=y1;
    double perimeter;
    perimeter=(_x1-_x)*4;
    return perimeter;
}
    