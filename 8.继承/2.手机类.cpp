#include<iostream>
#include<string.h>
using namespace std;

class mobile{    //��ͨ�ֻ�;
private:
    char num[12];
    char type[40];
    float price;
public:
    mobile(){
        init("000000000000", "Non_type", 0);    //�����Լ���init()����
    }
    void init(char *n, char *t, float p){
        strcpy(num, n);
        strcpy(type, t);
        price = p;
    }
    void dial(){
        cout<<"Dialing number is"<<num<<endl;
        cout<<"Answering in..."<<endl;
    }
    void answer(char othernumber[]){
        cout<<"Answering number is"<<othernumber<<endl;
        cout<<"Answering in..."<<endl;
    }
    void hangup(){
        cout<<"Hanging up..."<<endl;
    }
    void show(){
        cout<<num<<'t'<<type<<'\t'<<price<<endl;
    }
    ~mobile() {}
};

class smartphone:public mobile{
private:
    char OS[20];    //����ʽ����ϵͳ���������������ݳ�Ա
    int memory;     //�洢���������������������ݳ�Ա
public:
    smartphone(){
        init("00000000000", "Non_type", 0, "Non_OS", 0);    //�����Լ���init()����
    }

    void init(char *number, char *pt, float pri, char *os, int mem){
        mobile::init(number, pt, pri);  //���û����Ա����
        strcpy(OS, os);     //����ϵͳ��ʼ��
        memory = mem;       //�ڴ��ʼ��
    }

    void send(char othernumber[], char message[]){
        cout<<"Sending message is "<<message<<"to"<<othernumber<<endl;
        cout<<"Sending on..."<<endl;
    }

    void showmemory(){  //��ʾ�ڴ��С
        cout<<"Memory is: "<<memory<<endl;
    }
    void show(){    //��ʾ�����ֻ���Ϣ
        mobile::show();
        cout<<OS<<'\t'<<memory<<endl;
    }
    ~smartphone() {}
};

int main(){
    mobile m;
    smartphone s;

    m.init("11111111111", "motorola", 3000);
    m.dial();
    m.answer("22222222222");
    m.hangup();
    m.show();

    s.init("33333333333", "huawei", 5000, "windows7", 2048);
    s.send("22222222222", "hello!");
    s.dial();
    s.answer("22222222222");
    s.hangup();
    s.showmemory();
    s.show();

    return 0;
}
