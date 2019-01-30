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

class Employee:private Person{   //公有继承方式
    char Dept[20];      //部门
    double Salary;      //薪水
public:
    Employee(){
        EmployeeRegister("xxx", 0, 'm', "xxx", 0);
    }
    void EmployeeRegister(char *name, int age, char sex, char *dept, double salary){
        Register(name, age, sex);      //直接操作基类数据成员
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
    cout<<"调用GetEmployeeName()，返回值为："<<emp.GetEmployeeName()<<endl;
    cout<<"调用GetEmployeeSex()，返回值为："<<emp.GetEmployeeSex()<<endl;
    cout<<"调用GetEmployeeAg(e)，返回值为："<<emp.GetEmployeeAge()<<endl;

    /*emp.ShowMe();
      错误，基类的公有成员和保护成员被派生类继承后，只能作为派生类的私有成员，派生类只能通过
      函数调用该语句
    */

    return 0;
}
