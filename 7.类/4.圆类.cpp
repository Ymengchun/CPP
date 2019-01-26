#include<iostream>
using namespace std;

class Point{    //点类
private:
    int x,y;
public:
    void initpoint(int xx, int yy);
    int get_x() {return x;} //获得横坐标
    int get_y() {return y;} //获得纵坐标
    void print();           //打印坐标
};
void Point::initpoint(int xx, int yy){
    x=xx;
    y=yy;
}
void Point::print(){
    cout<<'['<<x<<','<<y<<']';
}

class Circle{               //圆类
private:
    double radius;          //圆心
    Point center;           //半径
public:
    void initcircle(double r, Point p);
    double get_radius();    //获取半径
    Point get_center();     //获取圆心坐标
    double area();          //面积
    void print();           //打印圆心坐标
};
void Circle::initcircle(double r, Point p){
    radius = (radius > 0 ? r : 0);
    center = p;
}
double Circle::get_radius() {return radius;}
Point Circle::get_center() {return center;}
double Circle::area() {return 3.14*radius*radius;}
void Circle::print() {
    cout<<"Center = ";
    center.print();
    cout<<"; Radius = "<<radius<<endl;
}

int main(){
    Point p, center;
    p.initpoint(30, 50);
    center.initpoint(120, 80);

    Circle c;
    c.initcircle(10.0, center);

    cout<<"Point p：";
    p.print();
    cout<<endl;
    cout<<"Circle c：";
    c.print();
    cout<<"The center of circle c：";
    c.get_center().print(); //打印圆心坐标
    cout<<"\nThe area of circle c："<<c.area()<<endl;

    return 0;
}
