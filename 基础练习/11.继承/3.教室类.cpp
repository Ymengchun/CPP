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
    void *GetNumber() {return num;}
    void Show(){
        cout<<"Number: "<<GetNumber()<<"Seat: "<<seat<<endl;
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


