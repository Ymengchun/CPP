/* ��ѧ����Ϣ����������ļ��ٶ�ȡ����������ѧ����Ϣ�࣬�����������༶���Ա�������
��˽�����ԡ��й��캯�������������Ϣ�ĺ��������������д���3�����󣬶��󰴶�������ʽ����
�ļ�������ٶ������ļ���Ϣ����ʾ */
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class Student{  //������
    char Name[10];
    char Class[10];
    char Sex;
    int Age;
public:
    Student() { }
    Student(char *Name, char *Class, char sex, int age){
        strcpy(this->Name, Name);
        strcpy(this->Class, Class);
        Sex = sex;
        Age = age;
    }
    void Showme(){
        cout<<Name<<'\t'<<Class<<'\t'<<Sex<<'\t'<<Age<<endl;
    }
};

int main(){
    //����
    Student stu[3]={
        Student("����С","����11",'m',27),
        Student("������","��е01",'f',24),
        Student("���Ļ�","����12",'m',39) };
    //���ļ�
    ofstream file1("file.dat", ios::binary);    //file1��һ�����캯����������
    if(!file1){
        cout<<"�ļ���ʧ��!";
        return 1;
    }
    //д�ļ�
    for(int i=0; i<3; i++){
        file1.write((char*)&stu[i], sizeof(stu[i]));
    }
    //�ر��ļ�
    file1.close();

    ///////////////����Ϊ���ļ�����ʾ����//////////////

    Student stu2;   //��������
    ifstream file2("file.dat", ios::binary);    //���ļ�
    if(!file2){
        cout<<"�ļ���ʧ��!";
        return 1;
    }
    while(file2){   //���ļ�
            file2.read((char*)&stu2, sizeof(stu2));
        if(file2)
            stu2.Showme();
    }
    file2.close();  //�ر��ļ�

    return 0;
}



