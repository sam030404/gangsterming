#include <string>
using namespace std;

class Shape {
    public:
        Shape(){};
        Shape(int x, int y, string shape);
        double GetArea();
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
    
    protected:
        int x_;
        int y_;
        int width_, height_;
        string shape_;
};

class Square:public Shape {
    public:
        Square(int x, int y, int width, string shape);
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
        double GetArea();
};
class Rectangle:public Shape {
    
    public:
        Rectangle(int x,int y,int width,int height,string shape);
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
        double GetArea();
};

class Diamond:public Shape {
    
    public:
        Diamond(int x,int y,int width,string shape);
        int GetPerimeter();
        void Draw(int canvas_width, int canvas_height);
        double GetArea();
};