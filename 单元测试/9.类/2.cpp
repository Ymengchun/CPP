/*
���һ��Dog�࣬����name��age��sex��weight�������Լ�����Щ���Բ����ķ�����ʵ�ֲ���������ࡣ
������ķ�װ��Ҫ�󣬰�name��age��sex��weight����Ϊ˽�е����ݳ�Ա����д���г�Ա����setdata()
�����ݽ��г�ʼ����GetName()��GetAge()��GetSex()��GetWeight()��ȡ��Ӧ���ԡ���ʼ���������û����롣

�����ʽ��Dog�����ĳ�ʼ������
�����ʽ������Dog�����ĳ�ʼ���������һ�仰�����ϸ��ո�ʽ�������ĩ�е�š�
����������ahuang 3 m 2.4
���������It is my dog.
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
        strcpy(name, n);    //�ַ���������"="��ֵ
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
