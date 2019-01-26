/*
��Ʋ�����һ����ΪTrapezium�������࣬������Ϊ���ε��ĸ���������ꡣ
�������ϱߺ��±߾���x��ƽ�С�������ķ�װ��Ҫ���������������8��
˽�е����ͱ�����ʾ4���������ֵ��������Ա����initial(int,int,int,int,int,int,int,int)
��ʼ�����ݳ�Ա������GetPosition(int&,int&,int&,int&,int&,int&,int&,int&)��ȡ����ֵ������Area()���������

�����ʽ�������ĸ���������꣬
�����ʽ�����ε����������Ϊ����(x1,y1)������(x2,y2)������(x3,y3)������(x4,y4)�ǵĶ��㡣
����������3 2 5 2 1 -4 7 -4
���������24
*/
#include<iostream>
using namespace std;

class Trapezium{
private:
    int x1, y1, x2, y2, x3, y3, x4, y4;
public:
    void initial(int ,int, int, int, int, int, int, int);
    void GetPosition(int &, int &, int &, int &, int &, int&, int &, int&);
    double Area();
};

void Trapezium::initial(int a1, int b1, int a2, int b2, int a3, int b3, int a4, int b4){
    x1=a1;
	y1=b1;
	x2=a2;
	y2=b2;
	x3=a3;
	y3=b3;
	x4=a4;
	y4=b4;
}

void Trapezium::GetPosition(int &a1, int &b1, int &a2, int &b2, int &a3, int &b3, int &a4, int &b4){
    cout<<a1<<" "<<b1<<endl<<a2<<" "<<b2<<" "<<a3<<" "<<b3<<" "<<a4<<" "<<b4<<" "<<endl;

}

double Trapezium::Area(){
    return 0.5 * ((x2-x1)+(x4-x3)) * (y2-y4);
}

int main(){
    Trapezium A;
    A.initial(3, 2, 5, 2, 1, -4, 7, -4);
    cout<<A.Area();

    return 0;

}
