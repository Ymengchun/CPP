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

class Employee:private Person{   //���м̳з�ʽ
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
    char *GetEmployeeName()  {return Name;}
    char GetEmployeeSex()  {return Sex;}
    int GetEmployeeAge()  {return Age;}
};

int main(){
    Employee emp;
    emp.EmployeeRegister("Jack", 18, 'm', "library", 10000);
    emp.ShowEmp();
    cout<<"����GetEmployeeName()������ֵΪ��"<<emp.GetEmployeeName()<<endl;
    cout<<"����GetEmployeeSex()������ֵΪ��"<<emp.GetEmployeeSex()<<endl;
    cout<<"����GetEmployeeAg(e)������ֵΪ��"<<emp.GetEmployeeAge()<<endl;

    /*emp.ShowMe();
      ���󣬻���Ĺ��г�Ա�ͱ�����Ա��������̳к�ֻ����Ϊ�������˽�г�Ա��������ֻ��ͨ��
      �������ø����
    */

    return 0;
}
