/*
���һ��Dog�࣬����name��age��sex��weight�����ԣ����в����Ĺ��캯���ж����ݳ�Ա���г�ʼ����
���г�Ա�����У�GetName()��GetAge()��GetSex()��GetWeight()�ɻ�ȡ���֡����䡢�Ա�����ء���д��Ա����speak()
��ʾ���Ľ�������д�����������빷�����֡����䡢�Ա�����أ�����Dog���������������ͨ�����캯����ʼ������
ͨ����Ա������ȡ�������Բ���ʾ������

�����ʽ:������Ϣ
�����ʽ��������Ϣ����ӽ���
����������Tom 4 m 2.4
���������Tom
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
