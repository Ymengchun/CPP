/*
题目内容：编写程序，输入一个非负整数，显示其十六进制形式。如输入31，输出1f。
输入:一个非负整数。
输出：一个十六进制数
样例1输入：31
样例1输出：1f
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int x;
    cin>>x;
    cout<<hex<<x<<endl;

    return 0;
}
