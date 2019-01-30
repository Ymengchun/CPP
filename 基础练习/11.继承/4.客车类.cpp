/*
��Ŀ���ݣ�������ࡪ��������VEHICLE�����ƺš�������˽�����ݳ�Ա���ַ����飬��С20��
          ��Ա�����У�Ĭ�Ϲ��캯�����ó��ƺ�Ϊ��00000��������Ϊ"unknown"�����������캯�����ó��ƺš�
          �ͳ������������ַ�ָ�룻set()�������ó��ƺźͳ������������ַ�ָ�룻show()��ʾ���ƺźͳ�����
          ��Ա������Ϊ���С�
          ���������ࡪ���ͳ���BUS���̳������VEHICLE�࣬�������ݳ�Ա��λ��seats��int��˽�С�
          ��Ա�����У�Ĭ�Ϲ��캯�������ó��ƺ�"00000"��������unknown������λ��0�����������캯��
          ��ʼ�����ƺš���������λ����set()���ó��ƺš���������λ����Ĭ����λ��0��show()��ʾ
          ���ƺš���������λ����

����:һ�У������ַ�����ʾ���ƺźͳ�����һ��������ʾ��λ�����ո������
��������У������ͳ�����Ϣ���������ݼ�һ���ո�ð�ź��޿ո�
�������룺SHAAN-111111 Wang 30
���������Number:00000 owner:unknown seats:0
          Number:SHAN-1234567 owner:ZhangSan seats:40
          Number:SHAAN-111111 owner:Wang seats:30
*/
#include<iostream>
#include<string.h>
using namespace std;

class VEHICLE{
private:
    char Num[20];
    char Name[20];
public:
    VEHICLE(){
        strcpy(Num, "00000");
        strcpy(Name, "unknown");
    }
    VEHICLE(char *num, char *name){
        Set(num, name);
    }
    void Set(char *num, char *name){
        strcpy(Num, num);
        strcpy(Name, name);
    }
    void Show(){
        cout<<"Number: "<<Num<<" "<<"owner: "<<Name<<endl;
    }
};

class BUS : public VEHICLE{
public:
    int seats;
public:
    BUS():VEHICLE(){
        seats = 0;
    }
    BUS(char *num, char *name, int s):VEHICLE(num, name){
        seats = s;
    }
    Set(char *num, char *name, int s){
        VEHICLE::Set(num, name);
        seats = s;
    }
    void Show(){
        VEHICLE::Show();
        cout<<"Seats: "<<seats<<endl;
    }
};

int main(){
    BUS a, b("SHAN-1234567", "ZhangSan", 40);
    char number[20], name[20];
    int seats;
    a.Show();
    b.Show();
    cin>>number>>name>>seats;
    a.Set(number, name, seats);
    a.Show();

    return 0;
};
