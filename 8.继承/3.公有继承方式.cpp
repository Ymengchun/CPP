#include<iostream>
#include<string.h>
using namespace std;

class Person{
protected:
    char Name[10];
    int Age;
    char Sex;
public:
    void Register(char *name, int age, char sex){
        strcpy(Name, name);
        Age = age;
        Sex = (sex=='m'?'m':'w');
    }
    void ShowMe(){
        cout<<Name<<' '<<Sex<<' '<<Age<<endl;
    }
};

class Employee:public Person{   //���м̳з�ʽ
    char Dept[20];      //����
    double Salary;      //нˮ
public:
    Employee(){
        EmployeeRegister("xxx", 0, 'm', "xxx", 0);
    }
    void EmployeeRegister(char *name, int age, char sex, char *dept, double salary){
        Register(name, age, sex);      //ֱ�Ӳ����������ݳ�Ա
        strcpy(Dept, dept);
        Salary = salary;
    }
    void ShowEmp(){
        cout<<Name<<' '<<Sex<<' '<<Age<<' '<<Dept<<' '<<Salary<<endl;
    }
};

int main(){
    Employee emp;
    emp.EmployeeRegister("Jack", 18, 'm', "library", 10000);
    emp.ShowEmp();
    emp.ShowMe();

    return 0;
}
