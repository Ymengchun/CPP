/*
设计一个Dog类，包含name、age、sex和weight等属性以及对这些属性操作的方法。实现并测试这个类。
根据类的封装性要求，把name、age、sex和weight声明为私有的数据成员，编写公有成员函数setdata()
对数据进行初始化，GetName()、GetAge()、GetSex()和GetWeight()获取相应属性。初始化数据由用户输入。

输入格式：Dog类对象的初始化数据
输出格式：根据Dog类对象的初始化数据输出一句话，请严格按照格式输出，句末有点号。
输入样例：ahuang 3 m 2.4
输出样例：It is my dog.
          Its name is ahuang.
          It is 3 years old.
          It is male.
          It is 2.4 kg.
*/
#include<iostream>
#include<string.h>
using namespace std;

class Dog{
private:
    char *name;
    int age;
    char sex;
    double weight;
public:
    setdata(char *n, int a, char s, double w){
        strcpy(name, n);    //字符串不能用"="赋值
        age = a;
        sex = s;
        weight = w;
    }
    GetName(){return *name;}
    GetAge(){return age;}
    GetWeight(){return weight;}
    GetSex(){return sex;}
};

int main(){
    char name[9];
    int age;
    char sex;
    double weight;
    Dog dog;

    cin>>name>>age>>sex>>weight;
    dog.setdata(name, age, sex, weight);

    cout<<"It is my dog."<<endl;
    cout<<"Its name is "<<dog.GetName()<<'.'<<endl;
    cout<<"It is "<<dog.GetAge()<<" years old."<<endl;
    cout<<"It is "<<dog.GetSex()<<'.'<<endl;
    cout<<"It is "<<dog.GetWeight()<<" kg."<<endl;

    return 0;
}
