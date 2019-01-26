/*
题目内容：编写程序，输入一个人的名字，系统显示Hello ***.。人名中间可能会有空格。
输入格式：一个字符串，中间可能有空格。
输出格式：Hello ***.
输入样例：Zhang Wei
输出样例：Hello Zhang Wei.
*/
#include<iostream>
using namespace std;

int main(){
    char str[100] = {};
    cin.getline(str, 100);
    cout<<"Hello "<<str<<".";

    return 0;
}
