/*
编写Person类，数据成员为姓名（20字符长度）、年龄(int)和性别(char)。
编写无参数的构造函数，其中姓名赋值为“XXX”，年龄0，性别'm'；
编写析构函数，在其中输出字符串“Now destroying the instance of Person”；
编写Register成员函数，为数据成员赋值；
编写showme成员函数，显示姓名、年龄和性别。
编写主函数，用Person类创建2个指针，p1和 p2；
用new创建两个Person对象，分别将指针赋值给p1,p2；
用showme成员函数显示p1,p2所指对象的值；
再输入一组“姓名、年龄和性别”值，用成员函数Register为p1的成员赋值；
将p1所指对象的值赋值给p2所指对象；
用showme显示p1、p2所指对象的值。
删除动态对象。

输入格式：为p1的成员赋值时使用的数据
输出格式：person1和person2的默认值，person1和person2的赋值后的值，析构函数输出的信息
输入样例：Bobs 24 m
输出样例：
person1:XXX 0 m
person2:XXX 0 m
person1:Bobs 24 m
person2:Bobs 24 m
Now destroying the instance of Person
Now destroying the instance of Person
*/
#include<iostream>
#include<string.h>
using namespace std;

class Person{
private:
    char name[20];
    char sex;
    int age;
public:
    Person(){
        strcpy(name, "xxx");
        age = 0;
        sex = 'm';
    }
    ~Person(){
        cout<<"Now destroying the instance of Person"<<endl;
    }
    void Register(char *n, int a, char s){
        strcpy(name, n);
        age = a;
        sex = s;
    }
    void showme(){
        cout<<name<<" "<<age<<" "<<sex<<endl;
    }
};

int main(){
    Person *p1, *p2;
    p1 = new Person;
    p2 = new Person;
    p1->showme();
    p2->showme();
    p1->Register("Bobs", 24, 'm');
    p2 = p1;
    p1->showme();
    p2->showme();

    delete p1;
    delete p2;

    return 0;
}
