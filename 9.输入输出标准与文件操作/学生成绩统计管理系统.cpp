#include<iostream>
#include<fstream>
using namespace std;

//学生类
class Student{
public:
    int num;            //学号
    string name;        //姓名
    string classname;   //班级
    float math;         //数学成绩
    float english;      //英语成绩
    float computer;     //计算机成绩
    float average;      //平均成绩

};

//学生成绩读取函数
float getscore(string filename, int stunum){
    int stunum_temp;
    float score;

    ifstream in(filename.c_str());
    if(in){
        cout<<"文件打开错误！"<<endl;
        return 1;
    }

    bool flag = false;
    while(in){
        in>>stunum_temp>>score;
        if(in){     //读正确
            if(stunum_temp == stunum){  //如果读取学号就是目标学号
                flag = true;            //将标志设置为true
                break;                  //退出循环
            }
        }
    }
    if(!flag)                           //没找到目标学号
        score = 0;                      //分数为0
    in.close();
    return score;
}

//学生信息输出运算符重载函数
ostream & operator << (ostream & out, Student & student){
    out<<student.num<<'\t'<<student.name<<'\t'<<student.classname;
    out<<'\t'<<student.math;
    out<<'\t'<<student.english;
    out<<'\t'<<student.computer;
    out<<'\t'<<student.average;

}

int main(){
    ifstream in("student1.txt");
    ofstream out("student.txt");

    if(!in || !out){
        cout<<"文件打开错误！";
        return 1;
    }

    out<<"学号\t\t"<<"姓名\t"<<"班级\t"<<"数学\t"<<"英语\t"<<"物理"<<endl;
    while(in){
        Student student;

        //读文件
        in>>student.num>>student.name>>student.classname;
        if(!in)
            break;
        student.math = getscore("student2.txt", student.num);
        student.english = getscore("student3.txt", student.num);
        student.computer = getscore("student4.txt", student.num);
        student.average = (student.math + student.english + student.computer) / 3;

        //写文件
        out << student;
    }

    out.close();
    in.close();
    cout<<"student.txt文件建立成功，请查阅！"<<endl;

    return 0;
}
