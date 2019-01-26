/*
题目内容：直线方程：Ax+By+C=0，编写程序，输入A，B,C,和点（x,y）,计算该点到直线的距离。
          点到直线的距离公式：d=|Ax+By+C|/sqrt(A*A+B*B).
输入:两行，第1行是直线方程的系数A,B,C,用空格隔开。第2行是平面点的坐标x,y，用空格隔开。
输出：一个实数，表示点到直线的距离，最多保留两位小数，四舍五入。
输入样例：2 1 -10
          -1 2
输出样例：4.47
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double fabs(double x){
    if(x>=0)
        return x;
    else
        return -x;
}

int main(){
    double A, B, C;
    double x, y;
    cin>>A>>B>>C>>x>>y;

    double c = fabs(A*x+B*y+C) / sqrt(A*A+B*B);
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<c<<endl;

    return 0;
}
