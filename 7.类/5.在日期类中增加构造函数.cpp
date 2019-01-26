 #include<iostream>
#include<time.h>
using namespace std;

class Date{
private:
    int year, month, day;
public:
    Date(int y=1900, int m=1, int d=1){
        year = y;
        month = m;
        day = d;
    }

    void init(int y, int m, int d); //日期修改
    void print_ymd();               //日期显示(点)
    void print_mdy();               //日期显示(横线)
};

void Date::init(int y, int m, int d){
    month = (m>=1 && m<=12) ? m : 1;
    year = (y>=1900 && y<=9999) ? y : 1900;
    day = (d>=1 && d<=31) ? d : 1;
}
void Date::print_ymd(){
    cout<<year<<"."<<month<<"."<<day<<endl;
}
void Date::print_mdy(){
    cout<<year<<"-"<<month<<"-"<<day<<endl;
}

int main(){
    Date date1;
    date1.print_ymd();
    date1.init(2006, 13, 38);
    date1.print_ymd();

    Date date2(2013, 11, 26);
    date2.print_mdy();
    date2.init(2006, 13, 38);
    date2.print_ymd();

    return 0;
}

