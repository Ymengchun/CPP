/*
题目内容：输入一个三角形的两个直角边的长度，求其斜边的长度：计算公式c=sqrt(a*a+b*b)
          其中, a,b是两个直角边的长度，c是斜边，sqrt表示开平方。
输入格式:两个double型实数，用空格隔开。
输出格式：一个实数
输入样例：1 2
输出样例：2.23607
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    cout << c << endl;
    return 0;
}
