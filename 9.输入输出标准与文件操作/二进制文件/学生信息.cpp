/* 将学生信息存入二进制文件再读取出来。建立学生信息类，包含姓名、班级、性别、年龄四
个私有属性。有构造函数、输出自身信息的函数。在主函数中创建3个对象，而后按二进制形式存入
文件，最后再读出该文件信息并显示 */
#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

class Student{  //定义类
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
    //对象
    Student stu[3]={
        Student("王二小","电气11",'m',27),
        Student("刘大明","机械01",'f',24),
        Student("李文化","生物12",'m',39) };
    //打开文件
    ofstream file1("file.dat", ios::binary);    //file1是一个构造函数，合理即可
    if(!file1){
        cout<<"文件打开失败!";
        return 1;
    }
    //写文件
    for(int i=0; i<3; i++){
        file1.write((char*)&stu[i], sizeof(stu[i]));
    }
    //关闭文件
    file1.close();

    ///////////////以下为读文件并显示出来//////////////

    Student stu2;   //建立对象
    ifstream file2("file.dat", ios::binary);    //打开文件
    if(!file2){
        cout<<"文件打开失败!";
        return 1;
    }
    while(file2){   //读文件
            file2.read((char*)&stu2, sizeof(stu2));
        if(file2)
            stu2.Showme();
    }
    file2.close();  //关闭文件

    return 0;
}



