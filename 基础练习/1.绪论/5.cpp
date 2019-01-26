/*
题目内容：输入矩形的两个边的长度，计算矩形的周长。
输入格式：两个整数，用空格隔开
输出格式：一个整数。
输入样例：1 1
输出样例：4
*/
#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b;
    c = 2*(a+b);
    cout << c << endl;
    return 0;
}
