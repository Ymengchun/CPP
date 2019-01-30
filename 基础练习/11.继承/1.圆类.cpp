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

class Circle : public Point{
private:
    double radius;
public:
    Circle():Point(){radius = 0;}
    Circle(double x, double y, double r):Point(x, y) {radius = r;}
    void Set(double x, double y, double r){
        Point::Set(x, y);
        radius = r;
    }
    void Print(){
        Point::Print();
        cout<<"radius = "<<radius<<endl;
    }
};

int main(){
    Circle a, b(1, 2, 3);
    a.Print();
    b.Print();

    double x, y, r;
    cin>>x>>y>>r;
    a.Set(x, y, r);
    a.Print();

    return 0;
}


