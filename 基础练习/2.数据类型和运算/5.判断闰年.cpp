/*
��Ŀ���ݣ���д����������ݣ��ж��Ƿ����ꡣ�ǣ������IsLeapYear�������񡱣������NotLeapYear����
����:һ��������
�������IsLeapYear����NotLeapYear��
��������1��2000
�������1��IsLeapYear
��������2��2018
�������2��NotLeapYear
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
