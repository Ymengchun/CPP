/*
设计一个MyTime类，成员函数SetTime()设置时间，print_12()以12（0-11）
小时制显示时间（AM上午，PM下午），print_24()以24（0-23）小时制显示时间。

输入格式:所需设置时间的时、分、秒
输出格式：按照12小时制和24小时制依次显示时间,注意时间格式中的冒号是英文冒号,
          时分秒都是两位，AM,PM前有一个空格，晚上12:00是00:00:00 AM，中午十二点是00:00:00 PM。
输入样例：13 23 34
输出样例：01:23:34 PM
          13:23:34
*/
#include<iostream>
using namespace std;

class MyTime{
private:
    int hour, minute, second;
public:
    void SetTime(int h, int m, int s){
        hour = h;
        minute = m;
        second = s;
    }
    void print_24(){
        cout<<hour<<':'<<minute<<':'<<second<<endl;
    }
    void print_12(){
        if(hour <= 12){
            cout<<hour<<':'<<minute<<':'<<second<<" AM"<<endl;
        }
        else{
            cout<<0<<hour-12<<':'<<minute<<':'<<second<<" PM"<<endl;
        }
    }
};

int main(){
    int hour, minute, second;
    MyTime time;

    cin>>hour>>minute>>second;
    time.SetTime(hour, minute, second);
    time.print_12();
    time.print_24();

    return 0;
}
