//输入一个正整数，计算其平方根，并将结果按取1~6位小数分六行显示出来
#include<iostream>
#include<iomanip>
#include<cmath>
using namespace std;

int main(){
    int a=2;
    double b=(double)(sqrt(a));
    cout<<setiosflags(ios::fixed)<<setprecision(1)<<b<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<b<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(3)<<b<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(4)<<b<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(5)<<b<<endl;
    cout<<setiosflags(ios::fixed)<<setprecision(6)<<b<<endl;

    return 0;
}
