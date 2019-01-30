#include<iostream>
using namespace std;

class Point{
private:
    int x, y;
public:
    Point(int a, int b){
        SetPoint(a, b);
    }
    void SetPoint(int a, int b){
        x = a;
        y = b;
    }
    int GetX() {return x;}
    int GetY() {return y;}
    void Print() {cout<<'['<<x<<','<<y<<']';}
};

class Circle : public Point{
private:
    double radius;
public:
    Circle(int x=0, int y=0, double r=0.0) : Point(x, y) {SetRadius(r);}
    void SetRadius(double r) {radius = (r > 0 ? r : 0);}
    double GetRadius() {return radius;}
    double Area() {return 3.14*radius*radius;}
    void Print(){
        cout<<"Center = ";
        Point::Print();
        cout<<", Radius = "<<radius<<endl;
    }
};

class Cylinder : public Circle{
private:
    double height;
public:
    Cylinder(int x, int y, double r, double h) : Circle(x, y, r){
        height = h;
    }
    void SetData(int x, int y, double r, double h){
        SetPoint(x, y);
        SetRadius(r);
        height = h;
    }
    double Volume() {return height*Circle::Area();}
    double Area() {
        double r = GetRadius(); //�����಻��ֱ�ӷ��ʻ����˽�г�Ա������ͨ�����ຯ������
        return 2*3.14*r*r+2*3.14*r*height;}
};

int main(){
    cout<<"���Ե��ࣺ"<<endl;
    Point p(30, 50);
    p.Print();
    cout<<endl;

    cout<<"����Բ�ࣺ"<<endl;
    Circle c(120, 80, 10.0);
    cout<<"Բ�ģ�";
    c.Point::Print();   //���û��ຯ����Ա
    cout<<"\nԲ�����"<<c.Area()<<endl;

    cout<<"����Բ�����ࣺ"<<endl;
    Cylinder cy(240, 160, 10.0, 10.0);
    cout<<"Բ�������ĵ㣺";
    cy.Point::Print();
    cout<<"\nԲ����������"<<cy.Circle::Area()<<endl;
    cout<<"\nԲ����������"<<cy.Area()<<endl;
    cout<<"\nԲ���������"<<cy.Volume()<<endl;

    return 0;
}
