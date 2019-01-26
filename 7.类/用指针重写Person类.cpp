#include<iostream>
#include<string.h>
using namespace std;

class Person{
private:
    int Age;
    char Name[9];
    char Sex;
public:
    Person(){
        strcpy(Name, "xxx");
        Age = 0;
        Sex = ' ';
    }
    ~Person() {}
    void Register(char *name, int age, char sex);
    void ShowMe();
};

void Person::Register(char *name, int age, char sex){
    strcpy(Name, name);
    Age = age;
    Sex = sex;
}

void Person::ShowMe(){
    cout<<Name<<'\t'<<Age<<'\t'<<Sex<<endl;
}

int main(){
    Person *p1, *p2;
    p1 = new Person;
    cout<<"person1:\t";
    p1->ShowMe();

    p1->Register("Zhang3", 19, 'm');
    cout<<"person1:\t";
    p1->ShowMe();

    p2 = new Person;
    cout<<"person2:\t";
    p2->ShowMe();

    *p2 = *p1;
    cout<<"person2:\t";
    p2->ShowMe();

    return 0;
}
