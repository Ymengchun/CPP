#include<iostream>
using namespace std;

class Point{
private:
    double x, y;
public:
    Point() {x=0; y=0;}
    Point(double xx, double yy){
        Set(xx, yy);
    }
    void Set(double xx, double yy){
        x = xx;
        y = yy;
    }
    void Print(){
        cout<<'['<<x<<','<<y<<']'<<endl;
    }
};

class Rectangle : public Point{
private:
    double width, height;
public:
    Rectangle():Point(){
        width = 0;
        height = 0;
    }
    Rectangle(double x, double y, double w, double h) : Point(x, y){
        width = w;
        height = h;
    }
    void Set(double x, double y, double w, double h){
        Point::Set(x, y);
        width = w;
        height = h;
    }
    void Print(){
        Point::Print();
        cout<<"width = "<<width<<endl;
        cout<<"height = "<<height<<endl;
    }
};

int main(){
    Rectangle a, b(1, 2, 10, 5);
    a.Print();
    b.Print();

    double x, y, w, h;
    cin>>x>>y>>w>>h;
    a.Set(x, y, w, h);
    a.Print();

    return 0;
}


