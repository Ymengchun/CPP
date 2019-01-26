#include<iostream>
#include<cmath>
#define pi 3.1415926
using namespace std;

double sinx(double x){
    return sin(x);
}
double e_sqrt(double x){
    return exp(-x*x);
}
double x_sqrt(double x){
    return 2*x/(1+x*x);
}
double integral(double a, double b, double (*p)(double), int n){  //a�ǻ������ޣ�b�ǻ������ޣ�n�ǵȷֵķ���
    double h=(b-a)/n;                                             //ÿ�ݵĳ���
    double sum=((*p)(a)+(*p)(b))/2;                               //���η������
    for(int i=1; i<n; i++)
        sum+=(*p)(a+h*i);
    sum*=h;
    return sum;
}

int main(){
    double s;
    s=integral(0, pi/2, sinx, 1000);
    cout<<"���� sin(x) ��[0,��/2]�ϵĻ����ǣ�"<<s<<endl;
    s=integral(0, 1, e_sqrt, 1000);
    cout<<"���� e^-x^2 ��[0,1]�ϵĻ����ǣ�"<<s<<endl;
    s=integral(-1, 5, x_sqrt, 1000);
    cout<<"���� 2*x/(1+x*x) ��[-1,5]�ϵĻ����ǣ�"<<s<<endl;

    return 0;
}
