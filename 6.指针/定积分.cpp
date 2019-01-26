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
double integral(double a, double b, double (*p)(double), int n){  //a是积分下限，b是积分上限，n是等分的份数
    double h=(b-a)/n;                                             //每份的长度
    double sum=((*p)(a)+(*p)(b))/2;                               //梯形法求面积
    for(int i=1; i<n; i++)
        sum+=(*p)(a+h*i);
    sum*=h;
    return sum;
}

int main(){
    double s;
    s=integral(0, pi/2, sinx, 1000);
    cout<<"函数 sin(x) 在[0,π/2]上的积分是："<<s<<endl;
    s=integral(0, 1, e_sqrt, 1000);
    cout<<"函数 e^-x^2 在[0,1]上的积分是："<<s<<endl;
    s=integral(-1, 5, x_sqrt, 1000);
    cout<<"函数 2*x/(1+x*x) 在[-1,5]上的积分是："<<s<<endl;

    return 0;
}
