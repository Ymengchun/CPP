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
    Person person1, person2;
    cout<<"person1:\t";
    person1.ShowMe();

    person1.Register("Zhang3", 19, 'm');
    cout<<"person1:\t";
    person1.ShowMe();

    cout<<"person2:\t";
    person2.ShowMe();

    person2 = person1;
    cout<<"person2:\t";
    person2.ShowMe();

    return 0;
}
