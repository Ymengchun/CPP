#include<iostream>
#include<string.h>
using namespace std;

class mobile{    //普通手机;
private:
    char num[12];
    char type[40];
    float price;
public:
    mobile(){
        init("000000000000", "Non_type", 0);    //调用自己的init()函数
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
    char OS[20];    //交互式操作系统，派生类新增数据成员
    int memory;     //存储卡容量，派生类新增数据成员
public:
    smartphone(){
        init("00000000000", "Non_type", 0, "Non_OS", 0);    //调用自己的init()函数
    }

    void init(char *number, char *pt, float pri, char *os, int mem){
        mobile::init(number, pt, pri);  //调用基类成员函数
        strcpy(OS, os);     //操作系统初始化
        memory = mem;       //内存初始化
    }

    void send(char othernumber[], char message[]){
        cout<<"Sending message is "<<message<<"to"<<othernumber<<endl;
        cout<<"Sending on..."<<endl;
    }

    void showmemory(){  //显示内存大小
        cout<<"Memory is: "<<memory<<endl;
    }
    void show(){    //显示智能手机信息
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
