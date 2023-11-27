#include <iostream>
using namespace std;

class Shape{
    public:
        Shape(double width_,double height_);
        virtual ~Shape();
        virtual double getArea() const=0;


    protected:
        double height;
        double width;
};

class Triangle: public Shape{
    public:
        Triangle(double width_,double height_);
        virtual double getArea() const;


};

class Rectangle: public Shape{
    public:
        Rectangle(double width_,double height_);
        virtual double getArea() const;

};