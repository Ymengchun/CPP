#include<iostream>
#include<string.h>
using namespace std;

class Person{
    char Name[10];
    int Age;
public:
    Person(char *name, int age){
        strcpy(Name, name);
        Age = age;
        cout<<"construct of person: "<<Name<<endl;
    }
    ~Person() {cout<<"destructor of person: "<<Name<<endl;}
};

class Employee:public Person{
    char Dept[20];
    Person Leader;
public:
    Employee(char *name, int age, char *dept, char *name1, int age1) : Person(name, age), Leader(name1, age1){
        strcpy(Dept, dept);
        cout<<"construct of employee: "<<endl;
    }
    ~Employee() {cout<<"destructor of employee: "<<endl;}
};

int main(){
    Employee("Jack", 40, "ÈËÊÂ´¦", "Tome", 50);
    return 0;
}
