/*
题目内容：定义基类——车辆类VEHICLE，车牌号、车主是私有数据成员，字符数组，大小20；
          成员函数有：默认构造函数设置车牌号为“00000”，车主为"unknown"；两参数构造函数设置车牌号、
          和车主，参数：字符指针；set()函数设置车牌号和车主，参数：字符指针；show()显示车牌号和车主。
          成员函数均为公有。
          定义派生类——客车类BUS，继承上面的VEHICLE类，增加数据成员座位数seats，int，私有。
          成员函数有：默认构造函数，设置车牌号"00000"、车主“unknown”和座位数0；三参数构造函数
          初始化车牌号、车主和座位数；set()设置车牌号、车主和座位数，默认座位数0；show()显示
          车牌号、车主和座位数。

输入:一行，两个字符串表示车牌号和车主，一个整数表示座位数，空格隔开。
输出：三行，三辆客车的信息。两项数据间一个空格，冒号后无空格。
样例输入：SHAAN-111111 Wang 30
样例输出：Number:00000 owner:unknown seats:0
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
