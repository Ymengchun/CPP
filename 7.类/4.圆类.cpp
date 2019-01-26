#include<iostream>
using namespace std;

class Point{    //����
private:
    int x,y;
public:
    void initpoint(int xx, int yy);
    int get_x() {return x;} //��ú�����
    int get_y() {return y;} //���������
    void print();           //��ӡ����
};
void Point::initpoint(int xx, int yy){
    x=xx;
    y=yy;
}
void Point::print(){
    cout<<'['<<x<<','<<y<<']';
}

class Circle{               //Բ��
private:
    double radius;          //Բ��
    Point center;           //�뾶
public:
    void initcircle(double r, Point p);
    double get_radius();    //��ȡ�뾶
    Point get_center();     //��ȡԲ������
    double area();          //���
    void print();           //��ӡԲ������
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

    cout<<"Point p��";
    p.print();
    cout<<endl;
    cout<<"Circle c��";
    c.print();
    cout<<"The center of circle c��";
    c.get_center().print(); //��ӡԲ������
    cout<<"\nThe area of circle c��"<<c.area()<<endl;

    return 0;
}
