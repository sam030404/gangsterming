#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Canvas{
    private:
        int width, height;
        vector<vector<string>> canvas;
    public:
        Canvas(int row,int col);
        ~Canvas();
        
        void DrawPixel(int x,int y,char brush);
        void Print();
        void Clear();
    
};

class Shape{
    protected:
        int x, y, width, height;
        char brush;
    public:
        virtual ~Shape();
        virtual void Draw(Canvas* can);
    

};

class Rectangle : public Shape{
    public:
        Rectangle(int x_,int y_,int width_,int height_,char brush_);
        ~Rectangle();
        void Draw(Canvas* can);
};

class UpTriangle : public Shape{
    public:
        UpTriangle(int x_,int y_,int height_,char brush_);
        ~UpTriangle();
        void Draw(Canvas* can);
};

class DownTriangle : public Shape{ 
    public:
        DownTriangle(int x_,int y_,int height_,char brush_);
        ~DownTriangle();
        void Draw(Canvas* can);
};

class Diamond : public Shape{
    public:
        Diamond(int x_,int y_,int height_,char brush_);
        ~Diamond();
        void Draw(Canvas* can);
};
