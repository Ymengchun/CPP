/*
题目内容：编写C++程序，输入姓名，在屏幕上显示如下格式的文字：
This program is coded by ***.其中“***”是输入的名字。
如输入“ZhangSan”，则显示：This program is coded by ZhangSan.
注意，姓名中间没有空格，末尾有英文句号。
输入格式:一个无空格的字符串，长度不超过50
输出格式：含输入的姓名的句子,单词间有一个空格。
输入样例：ZhangSan
输出样例：This program is coded by ZhangSan.
*/
#include<iostream>
using namespace std;
int main(){
    char name[50];
    cin >> name;
    cout << "This program is coded by " << name << "." << endl;
    return 0;
}
