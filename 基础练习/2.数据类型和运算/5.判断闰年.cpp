/*
题目内容：编写程序，输入年份，判断是否闰年。是，输出“IsLeapYear”；“否”，输出“NotLeapYear”。
输入:一个正整数
输出：“IsLeapYear”或“NotLeapYear”
输入样例1：2000
输出样例1：IsLeapYear
输入样例2：2018
输出样例2：NotLeapYear
*/
#include<iostream>
using namespace std;

int main(){
    int year;
    cin>>year;

    if(year%100==0 && year%400==0)
        cout<<"IsLeapYear";
    else if(year%100!=0 && year&4==0)
        cout<<"IsLeapYear";
    else
        cout<<"NotLeapYear";

    return 0;
}
