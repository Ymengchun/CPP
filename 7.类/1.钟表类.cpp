#include<iostream>
#include<windows.h>
using namespace std;

class Clock{
private:
    int Hour, Minute, Second;
public:
    void Set(int h, int m, int s);  //��ʼ����Ա����
    void Run();                     //ģ���ӱ�����
    void Report_Time();             //���㱨ʱ
    void Show_Time(){cout<<Hour<<":"<<Minute<<":"<<Second<<endl;}      //��ʾʱ��
};

void Clock::Set(int h, int m, int s){
        Hour = h>=0 && h<24 ? h : 0;
        Minute = m>=0 && m<60 ? m : 0;
        Second = s>=0 && s<60 ? s : 0;
}

void Clock::Run(){
    for(int i=0; i<10; i++){    //��λ
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
        Sleep(1000);    //ÿ��һ���ӣ���ʾһ��ʱ��
        Show_Time();
    }
}

void Clock::Report_Time(){
    if(Minute == 0 && Second == 0){
        for(int i=0; i<Hour; i++){  //���������켸��
            cout<<'\007';           //������
            Sleep(1000);            //ÿ��1����һ��
        }
    }
}

int main(){
    Clock BigBen;
    BigBen.Set(0, 0, 0);
    cout<<"�ӱ����õ�ʱ�䣺"<<endl;
    BigBen.Show_Time();
    BigBen.Run();
    BigBen.Report_Time();
    cout<<endl;
    BigBen.Set(9, 59, 50);
    cout<<"�ӱ����õ�ʱ�䣺"<<endl;
    BigBen.Show_Time();
    BigBen.Run();
    BigBen.Report_Time();
    cout<<endl;

    return 0;
}



