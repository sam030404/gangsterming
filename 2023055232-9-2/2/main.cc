#include "canvas.h"



using namespace std;


int main(){
    vector<Shape*> mshape;
    
    vector<string> mstr;
    
    int width;
    int height;
    cin>>width>>height;
    Canvas* canvas = new Canvas(width, height);
    canvas->Print();
    while(1){
        string inputstr;
        cin >> inputstr;
        if(inputstr=="quit"){ 
            break;
        }
        else if(inputstr=="add"){
            string shapetype;
            cin>>shapetype;
            if(shapetype=="rect"){
                int x_, y_,width_,height_;
                char brush_;
                cin>>x_>>y_>>width_>>height_ >>brush_;
                mshape.push_back(new Rectangle(x_, y_, width_, height_, brush_));
                string space = "";
                space = shapetype + " " + to_string(x_) + " " + to_string(y_) + " " + to_string(width_) + " " + to_string(height_) + " " + brush_;
                mstr.push_back(space);
            }
            else if(shapetype=="tri_down"){
                int x_, y_, height_;
                char brush_;
                cin >> x_ >> y_ >> height_ >> brush_;
                mshape.push_back(new DownTriangle(x_, y_, height_, brush_));
                string space = "";
                space = shapetype + " " + to_string(x_) + " " + to_string(y_) + " " + to_string(height_) + " " + brush_;
                mstr.push_back(space);
            }
            else if(shapetype=="tri_up"){
                int x_, y_, height_;
                char brush_;
                cin >> x_ >> y_ >> height_ >> brush_;
                mshape.push_back(new UpTriangle(x_, y_, height_, brush_));
                string space = "";
                space = shapetype + " " + to_string(x_) + " " + to_string(y_) + " " + to_string(height_) + " " + brush_;
                mstr.push_back(space);
            }
            else if(shapetype=="diamond"){
                int x_, y_, height_;
                char brush_;
                cin >> x_ >> y_ >> height_ >> brush_;
                mshape.push_back(new Diamond(x_, y_, height_, brush_));
                string space = "";
                space = shapetype + " " + to_string(x_) + " " + to_string(y_) + " " + to_string(height_) + " " + brush_;
                mstr.push_back(space);
            }
        }
        else if(inputstr == "dump")
        {
            for(int i=0;i<mstr.size();i++){
                cout << i << " " << mstr[i] << endl;
            }
        }
        else if(inputstr == "draw")
        {
            
            for(int i = 0; i < mshape.size(); i++){
                mshape[i]->Draw(canvas);
            }
            canvas->Print();
        }
    }

    delete canvas;
    for(int i = 0; i < mshape.size(); i++)
    {
        delete mshape[i];
    }
    return 0;
    
}  