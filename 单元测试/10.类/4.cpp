/*
��Ʋ�����һ����ΪEllipse����Բ�࣬������ΪԲ�����꼰������Ͷ̰���ĳ��ȡ�
���һ�����캯����Ellipse(int,int,double,double)������Щ���Խ��г�ʼ������ͨ��
��Ա�����������Բ�������double Area()����S����Բ�����=PI(Բ����)��a�������ᣩ
��b���̰��ᣩ������PIȡ3.14

�����ʽ:Բ�����ꡢ������Ͷ̰���ĳ���
�����ʽ����Բ�����
����������1 1 1 2
���������6.28
*/

#include<iostream>
using namespace std;

class Ellipse{
private:
    int x, y;
    double a, b;
public:
    Ellipse(int xx, int yy, int aa, int bb){
        x = xx;
        y = yy;
        a = aa;
        b = bb;
    }
    double Area(){
        cout<<3.14*a*b;
    }
    ~Ellipse() {}
};

int main(){
    int x, y;
    double a, b;
    cin>>x>>y>>a>>b;
    Ellipse oval(x, y, a, b);
    oval.Area();

    return 0;
}
