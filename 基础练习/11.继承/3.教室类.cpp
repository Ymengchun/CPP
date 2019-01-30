/*
题目：定义基类——房间类ROOM，房间号是私有数据成员，字符数组，大小20；成员函数有：
      默认构造函数设置房间号为“0000”；一参数构造函数设置房间号，参数：字符指针；
      set()函数设置房间号，参数：字符指针；show()显示房间号。成员函数均为公有。
      定义派生类——教室类CLASSROOM，继承上面的ROOM类，增加数据成员座位数seats，int，
      私有。成员函数有：默认构造函数，设置房间号"0000"和座位数0；两参数构造函数
      初始化房间号和座位数；set()设置房间号和座位数，默认座位数0；show()显示房间号和座位数。
输入：一行，一个字符串表示房间号，一个整数表示座位数，空格隔开。
输出：三行，三个教室的信息。两项数据间一个空格，冒号后无空格。
样例输入：工程馆507 140
样例输出：Number:0000 seats:0
          Number:工程馆505 seats:130
          Number:工程馆507 seats:140
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
    Classroom(char *n, int s):Room(n){  //指针变量作为参数（*n错误）
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
    Classroom a, b("工程馆505", 130);
    char num[20];
    int seat;
    a.Show();
    b.Show();
    cin>>num>>seat;
    a.Set(num, seat);
    a.Show();

    return 0;
}


