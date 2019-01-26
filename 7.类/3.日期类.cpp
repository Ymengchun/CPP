#include<iostream>
#include<time.h>
using namespace std;

class Date{
private:
    int year, month, day;
    void SetSystemDate();           //获取系统日期
public:
    void init(int y, int m, int d); //日期修改
    void print_ymd();               //日期显示(点)
    void print_mdy();               //日期显示(横线)
    int get_year(){return year;}    //获取年份
    int get_month(){return month;}  //获取月份
    int get_day(){return day;}      //获取日期
    bool IsLeapYear();              //判断闰年
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
        cout<<date1.get_year()<<"是闰年"<<endl;
    else
        cout<<date1.get_year()<<"不是闰年"<<endl;

    return 0;
}

