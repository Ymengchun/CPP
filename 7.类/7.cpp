#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Date{
private:
    int year, month, day;
public:
    Date():year(1990), month(1), day(1) {}      //�޲ι��캯��
    Date(int y, int m=1, int d=1);              //Ĭ�ϲ������캯��
    Date(Date &d):year(d.year), month(d.month), day(d.day) {};  //�Զ���Ϊ�����Ĺ��캯��
    Date(char *p);      //���ַ����ַ������캯��
    void print_ymd() {cout<<year<<"."<<month<<"."<<day<<endl;}
};

//Ĭ�ϲ������캯������
Date::Date(int y, int m, int d):year(1990), month(1), day(1){
    if(y>=1990 && y<=9999){
        year = y;
    }
    else{
        return;     //��ݲ��Ϸ�������Ĭ�ϲ�����1990
    }
    if(m>=1 && m<=12){
        month = m;
    }
    else{
        year = 1990;
        return;     //�·ݲ��Ϸ�������Ĭ�ϲ�����1
    }
    if(d>=1 && d<=31){
        day = d;
    }
    else{
        year = 1990;
        month = 1;
        return;     //���ڲ��Ϸ�������Ĭ�ϲ�����1
    }
}

//���ַ���Ϊ�����Ĺ��캯��
Date::Date(char *p):year(1990), month(1), day(1){
    char py[5], pm[3], pd[3];
    strncpy(py, p, 4);
    p = p + 5;
    strncpy(pm, p, 2);
    p = p + 3;
    strncpy(pd, p, 2);
    int y = atoi(py), m = atoi(pm), d = atoi(pd);
    if(y>=1990 && y<=9999){
        year = y;
    }
    else{
        return;     //��ݲ��Ϸ�������Ĭ�ϲ�����1990
    }
    if(m>=1 && m<=12){
        month = m;
    }
    else{
        year = 1990;
        return;     //�·ݲ��Ϸ�������Ĭ�ϲ�����1
    }
    if(d>=1 && d<=31){
        day = d;
    }
    else{
        year = 1990;
        month = 1;
        return;     //���ڲ��Ϸ�������Ĭ�ϲ�����1
    }
}

int main(){
    Date date1;
    cout<<"date1: ";
    date1.print_ymd();

    Date date2(2006);
    cout<<"date2: ";
    date2.print_ymd();

    Date date3(2006, 4);
    cout<<"date3: ";
    date3.print_ymd();

    Date date4(2006, 4, 8);
    cout<<"date4: ";
    date4.print_ymd();

    Date date5(2006, 14, 8);
    cout<<"date5: ";
    date5.print_ymd();

    Date date6(date4);
    cout<<"date6: ";
    date6.print_ymd();

    Date date7("2008-08-08");
    cout<<"date7: ";
    date7.print_ymd();

    return 0;
}


