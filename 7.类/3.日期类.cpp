#include<iostream>
#include<time.h>
using namespace std;

class Date{
private:
    int year, month, day;
    void SetSystemDate();           //��ȡϵͳ����
public:
    void init(int y, int m, int d); //�����޸�
    void print_ymd();               //������ʾ(��)
    void print_mdy();               //������ʾ(����)
    int get_year(){return year;}    //��ȡ���
    int get_month(){return month;}  //��ȡ�·�
    int get_day(){return day;}      //��ȡ����
    bool IsLeapYear();              //�ж�����
};
void Date::SetSystemDate(){
    tm *gm;
    time_t t = time(NULL);
    gm = gmtime(&t);
    year = 1900+gm->tm_year;
    month = gm->tm_mon+1;
    day = gm->tm_mday;
}
void Date::init(int y, int m, int d){

    if(y>=1900 && y<=9999)
        year = y;
    else{
        SetSystemDate();
        return;
    }
    if(month>=1 && month<=12)
        month = m;
    else{
        SetSystemDate();
        return;
    }
    if(day>=1 && day<=31)
        SetSystemDate();
        return;
}
void Date::print_ymd(){
    cout<<year<<"."<<month<<"."<<day<<endl;
}
void Date::print_mdy(){
    cout<<year<<"-"<<month<<"-"<<day<<endl;
}
bool Date::IsLeapYear(){
    if(year%400==0 || (year%100!=0 && year%4==0))
        return true;
    else
        return false;
}


int main(){
    Date date1;
    date1.print_ymd();
    system("pause");
    date1.init(2008, 3, 28);
    date1.print_ymd();
    system("pause");

    Date date2;
    date2.init(2006, 13, 28);
    date2.print_mdy();
    system("pause");

    if(date1.IsLeapYear())
        cout<<date1.get_year()<<"������"<<endl;
    else
        cout<<date1.get_year()<<"��������"<<endl;

    return 0;
}

