#include<iostream>
#include<windows.h>
using namespace std;

class Clock{
private:
    int Hour, Minute, Second;
public:
    void Set(int h, int m, int s);  //初始化成员函数
    void Run();                     //模拟钟表运行
    void Report_Time();             //整点报时
    void Show_Time(){cout<<Hour<<":"<<Minute<<":"<<Second<<endl;}      //显示时间
};

void Clock::Set(int h, int m, int s){
        Hour = h>=0 && h<24 ? h : 0;
        Minute = m>=0 && m<60 ? m : 0;
        Second = s>=0 && s<60 ? s : 0;
}

void Clock::Run(){
    for(int i=0; i<10; i++){    //进位
        Second++;
        if(Second == 60){
            Second = 0;
            Minute++;
            if(Minute == 60){
                Minute = 0;
                Hour++;
                if(Hour == 24)
                    Hour = 0;
            }
        }
        cout<<endl;
        Sleep(1000);    //每隔一秒钟，显示一次时间
        Show_Time();
    }
}

void Clock::Report_Time(){
    if(Minute == 0 && Second == 0){
        for(int i=0; i<Hour; i++){  //几点整就响几次
            cout<<'\007';           //蜂鸣声
            Sleep(1000);            //每隔1秒响一次
        }
    }
}

int main(){
    Clock BigBen;
    BigBen.Set(0, 0, 0);
    cout<<"钟表设置的时间："<<endl;
    BigBen.Show_Time();
    BigBen.Run();
    BigBen.Report_Time();
    cout<<endl;
    BigBen.Set(9, 59, 50);
    cout<<"钟表设置的时间："<<endl;
    BigBen.Show_Time();
    BigBen.Run();
    BigBen.Report_Time();
    cout<<endl;

    return 0;
}



