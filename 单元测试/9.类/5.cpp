/*
设计一个Weekday类，成员函数SetDay()设置星期几，IncDay()前进一天，NowDay()打印当前是星期几。

输入格式：用户输入一个数字，0表示星期日，1表示星期一，类推，6表示星期六，用该数字初始化Weekday类
输出格式：使用中文打印出从当日起连续3天是星期几（不够三天时，循环）
输入样例：0
输出样例：星期日
          星期一
          星期二
*/
#include<iostream>
using namespace std;

class Weekday{
private:
    int d;
public:
    void SetDay(int dd){
        d = dd;
    }
    void IncDay(int tomorrow){
        tomorrow = d + 1;
    }
    void NowDay(){
        switch(d){
        case 0:cout<<"星期日"<<endl; break;
        case 1:cout<<"星期一"<<endl; break;
        case 2:cout<<"星期二"<<endl; break;
        case 3:cout<<"星期三"<<endl; break;
        case 4:cout<<"星期四"<<endl; break;
        case 5:cout<<"星期五"<<endl; break;
        case 6:cout<<"星期六"<<endl; break;
        default: break;
        }
    }
};

int main(){
    int n;
    cin>>n;
    Weekday w;

    w.SetDay(n);
    w.NowDay();

    w.SetDay((n+1)%7);
    w.NowDay();

    w.SetDay((n+2)%7);
    w.NowDay();

    return 0;
}
