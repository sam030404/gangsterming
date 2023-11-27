#include "shapes.h"

using namespace std;

Shape::Shape(double width_,double height_){
    width=width_;
    height=height_;
}
Shape::~Shape(){}

Rectangle::Rectangle(double width_,double height_):Shape(width,height){
    width=width_;
    height=height_;
}

Triangle::Triangle(double width_,double height_):Shape(width,height){
    width=width_;
    height=height_;
}

double Rectangle::getArea () const{
    return width*height;
}

double Triangle::getArea() const{
    return width*height*0.5;
}