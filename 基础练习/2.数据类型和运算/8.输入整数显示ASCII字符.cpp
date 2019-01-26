/*
题目内容：编写程序，输入一个0-127之间的整数，显示对应的ASCII字符。
输入:一个0-127之间的整数。
输出：一个ASCII字符
输入样例1:65
输出样例1:A
输入样例2:97
输出样例2:a
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int x;
    cin>>x;
    cout<<(char)x;

    return 0;
}
