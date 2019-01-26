/*
设计一个Dog类，包含name、age、sex和weight等属性，在有参数的构造函数中对数据成员进行初始化。
公有成员函数有：GetName()、GetAge()、GetSex()和GetWeight()可获取名字、年龄、性别和体重。编写成员函数speak()
显示狗的叫声。编写主函数，输入狗的名字、年龄、性别和体重；声明Dog对象并用输入的数据通过构造函数初始化对象，
通过成员函数获取狗的属性并显示出来。

输入格式:狗的信息
输出格式：狗的信息，外加叫声
输入样例：Tom 4 m 2.4
输出样例：Tom
          4
          m
          2.4
          Arf!Arf!
*/
#include<iostream>
#include<string.h>
using namespace std;

class Dog{
private:
    char name[10];
    int age;
    char sex;
    double weight;
public:
    Dog(char *n, int a, char s, double w){
        strcpy(name, n);
        age = a;
        sex = s;
        weight = w;
    }
    char *GetName(){return name;}
    int GetAge(){return age;}
    char GetSex(){return sex;}
    double GetWeight(){return weight;}
    void speak(){cout<<"Arf!Arf!"<<endl;}
    ~Dog(){}
};

int main(){
    Dog d1("Tom", 4, 'm', 2.4);
    cout<<d1.GetName()<<endl;
    cout<<d1.GetAge()<<endl;
    cout<<d1.GetSex()<<endl;
    cout<<d1.GetWeight()<<endl;
    d1.speak();

    return 0;
}
