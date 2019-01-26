/*
���һ��MyTime�࣬��Ա����SetTime()����ʱ�䣬print_12()��12��0-11��
Сʱ����ʾʱ�䣨AM���磬PM���磩��print_24()��24��0-23��Сʱ����ʾʱ�䡣

�����ʽ:��������ʱ���ʱ���֡���
�����ʽ������12Сʱ�ƺ�24Сʱ��������ʾʱ��,ע��ʱ���ʽ�е�ð����Ӣ��ð��,
          ʱ���붼����λ��AM,PMǰ��һ���ո�����12:00��00:00:00 AM������ʮ������00:00:00 PM��
����������13 23 34
���������01:23:34 PM
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
