/*
��дPerson�࣬���ݳ�ԱΪ������20�ַ����ȣ�������(int)���Ա�(char)��
��д�޲����Ĺ��캯��������������ֵΪ��XXX��������0���Ա�'m'��
��д��������������������ַ�����Now destroying the instance of Person����
��дRegister��Ա������Ϊ���ݳ�Ա��ֵ��
��дshowme��Ա��������ʾ������������Ա�
��д����������Person�ഴ��2��ָ�룬p1�� p2��
��new��������Person���󣬷ֱ�ָ�븳ֵ��p1,p2��
��showme��Ա������ʾp1,p2��ָ�����ֵ��
������һ�顰������������Ա�ֵ���ó�Ա����RegisterΪp1�ĳ�Ա��ֵ��
��p1��ָ�����ֵ��ֵ��p2��ָ����
��showme��ʾp1��p2��ָ�����ֵ��
ɾ����̬����

�����ʽ��Ϊp1�ĳ�Ա��ֵʱʹ�õ�����
�����ʽ��person1��person2��Ĭ��ֵ��person1��person2�ĸ�ֵ���ֵ�����������������Ϣ
����������Bobs 24 m
���������
person1:XXX 0 m
person2:XXX 0 m
person1:Bobs 24 m
person2:Bobs 24 m
Now destroying the instance of Person
Now destroying the instance of Person
*/
#include<iostream>
#include<string.h>
using namespace std;

class Person{
private:
    char name[20];
    char sex;
    int age;
public:
    Person(){
        strcpy(name, "xxx");
        age = 0;
        sex = 'm';
    }
    ~Person(){
        cout<<"Now destroying the instance of Person"<<endl;
    }
    void Register(char *n, int a, char s){
        strcpy(name, n);
        age = a;
        sex = s;
    }
    void showme(){
        cout<<name<<" "<<age<<" "<<sex<<endl;
    }
};

int main(){
    Person *p1, *p2;
    p1 = new Person;
    p2 = new Person;
    p1->showme();
    p2->showme();
    p1->Register("Bobs", 24, 'm');
    p2 = p1;
    p1->showme();
    p2->showme();

    delete p1;
    delete p2;

    return 0;
}
