/*
���һ��Person�࣬����name��age��sex�����Լ�����Щ���Բ����ķ�����ʵ�ֲ���������ࡣ
������ķ�װ��Ҫ�󣬰�name��age��sex����Ϊ˽�е����ݳ�Ա���������еĳ�Ա����Register()��
ShowMe()��������Щ���ԣ���Register()�����ж����ݳ�Ա���г�ʼ����person1ͨ��cin���õ���Ϣ��
person2ͨ��Register("Zhang3", 19, 'm') ���õ���Ϣ��

�����ʽ��person1����Ϣ
�����ʽ��person1��person2����Ϣ
����������Li4 18 f
���������Li4 18 f
          Zhang3 19 m
*/
#include<iostream>
#include<string.h>
using namespace std;

class Person{
private:
    char name[9];
    char sex;
    int age;
public:
    void Register(char *n, int a, char s){
        strcpy(name, n);
        sex = s;
        age = a;
    }
    void ShowMe(){
        cout<<name<<" "<<age<<" "<<sex<<endl;
    }

};

int main(){
    char name[9];
    char sex;
    int age;
    Person person1, person2;

    cin>>name>>age>>sex;
    person1.Register(name, age, sex);
    person1.ShowMe();

    person2.Register("Zhang3", 19, 'm');
    person2.ShowMe();

    return 0;
}
