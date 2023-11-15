#include <iostream>
#include "rect.h"

using namespace std;

Rectangle::Rectangle(int width,int height){
    _width=width;
    _height=height;
}
Square::Square(int width):Rectangle(width,width){
    _width=width;
    _height=width;
}

NonSquare::NonSquare(int width,int height):Rectangle(width,height){
    _height=height;
    _width=width;
}
int Rectangle::getArea(){
    int area;
    area=(_width)*(_height);
    return area;

}

void Square::print(){
    cout<<_width<<"x"<<_height<<" Square"<<endl;
    cout<<"Area: "<<getArea()<<endl;
    cout<<"Perimeter: "<<getPerimeter()<<endl;

}

void NonSquare::print(){
    cout<<_width<<"x"<<_height<<" Nonsquare"<<endl;
    cout<<"Area: "<<getArea()<<endl;
    cout<<"Perimeter: "<<getPerimeter()<<endl;

}

int Rectangle::getPerimeter(){
    int perimeter;
    perimeter=2*(_width)+2*(_height);
    return perimeter;


}
