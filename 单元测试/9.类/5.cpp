/*
���һ��Weekday�࣬��Ա����SetDay()�������ڼ���IncDay()ǰ��һ�죬NowDay()��ӡ��ǰ�����ڼ���

�����ʽ���û�����һ�����֣�0��ʾ�����գ�1��ʾ����һ�����ƣ�6��ʾ���������ø����ֳ�ʼ��Weekday��
�����ʽ��ʹ�����Ĵ�ӡ���ӵ���������3�������ڼ�����������ʱ��ѭ����
����������0
���������������
          ����һ
          ���ڶ�
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
        case 0:cout<<"������"<<endl; break;
        case 1:cout<<"����һ"<<endl; break;
        case 2:cout<<"���ڶ�"<<endl; break;
        case 3:cout<<"������"<<endl; break;
        case 4:cout<<"������"<<endl; break;
        case 5:cout<<"������"<<endl; break;
        case 6:cout<<"������"<<endl; break;
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
