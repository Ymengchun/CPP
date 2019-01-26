#include<iostream>
#include<string.h>
using namespace std;

class Person{
private:
    char Name[9];
    int Age;
    char Sex;
    char Pid[19];
    char *Addr;
public:
    Person(){
        strcpy(Name, "xxxxx");
        Age = 0;
        Sex = 'x';
        strcpy(Pid, "xxxxxxxxxxxxxxxxxxx");
        Addr = NULL;
    }
    Person(char *N, int A, char S, char *P, char *Ad){
        strcpy(Name, N);
        Age = A;
        Sex = S;
        strcpy(Pid, P);
        int n = strlen(Ad);     //���ַ�ĳ���
        Addr = new char[n+1];   //��̬����
        strcpy(Addr, Ad);
    }
    ~Person(){
        delete []Addr;
    }
    void Register(char *name, int age, char sex, char *pid, char *addr);
    void ShowMe();
};

void Person::Register(char *name, int age, char sex, char *pid, char *addr){
    strcpy(Name, name);
    Age = age;
    Sex = sex;
    strcpy(Pid, pid);

    if(Addr!=NULL){
        delete []Addr;
    }
    int n = strlen(addr);
    Addr = new char[n+1];
    strcpy(Addr, addr);
}

void Person::ShowMe(){
    cout<<Name<<" "<<Age<<" "<<Sex<<" "<<Pid<<" ";
    if(Addr!=NULL){
        cout<<Addr;
    }
    cout<<endl;
}

int main(){
    Person person1;
    Person person2("����", 19, 'm', "610103199409192839", "�й�����������·��");
    Person person3;

    cout<<"person1: ";
    person1.ShowMe();

    cout<<"person2: ";
    person2.ShowMe();

    person3.Register("����", 29, 'w', "610103198409192493", "�й��Ϻ��л�ɽ��·��");
    cout<<"person3: ";
    person3.ShowMe();

    person2.Register("����", 29, 'w', "610103198409152127", "�й��½���³ľ�����ҹ�12��");
    cout<<"person2: ";
    person2.ShowMe();

    return 0;
}
