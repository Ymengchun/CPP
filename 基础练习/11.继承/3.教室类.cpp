/*
��Ŀ��������ࡪ��������ROOM���������˽�����ݳ�Ա���ַ����飬��С20����Ա�����У�
      Ĭ�Ϲ��캯�����÷����Ϊ��0000����һ�������캯�����÷���ţ��������ַ�ָ�룻
      set()�������÷���ţ��������ַ�ָ�룻show()��ʾ����š���Ա������Ϊ���С�
      ���������ࡪ��������CLASSROOM���̳������ROOM�࣬�������ݳ�Ա��λ��seats��int��
      ˽�С���Ա�����У�Ĭ�Ϲ��캯�������÷����"0000"����λ��0�����������캯��
      ��ʼ������ź���λ����set()���÷���ź���λ����Ĭ����λ��0��show()��ʾ����ź���λ����
���룺һ�У�һ���ַ�����ʾ����ţ�һ��������ʾ��λ�����ո������
��������У��������ҵ���Ϣ���������ݼ�һ���ո�ð�ź��޿ո�
�������룺���̹�507 140
���������Number:0000 seats:0
          Number:���̹�505 seats:130
          Number:���̹�507 seats:140
*/
#include<iostream>
#include<string.h>
using namespace std;

class Room{
private:
    char num[20];
public:
    Room(){
        strcpy(num, "0000");
    }
    Room(char *n){
        strcpy(num, n);
    }
    Set(char *n){
        strcpy(num, n);
    }
    void Show() {cout<<num<<endl;};
};

class Classroom : public Room{
private:
    int seat;
public:
    Classroom():Room(){
        seat = 0;
    }
    Classroom(char *n, int s):Room(n){  //ָ�������Ϊ������*n����
        seat = s;
    }
    Set(char *n, int s){
        Room::Set(n);
        seat = s;
    }
    void Show(){
        Room::Show();
        cout<<seat;
    }
};


int main(){
    Classroom a, b("���̹�505", 130);
    char num[20];
    int seat;
    a.Show();
    b.Show();
    cin>>num>>seat;
    a.Set(num, seat);
    a.Show();

    return 0;
}


