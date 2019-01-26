#include<iostream>
#include<fstream>
using namespace std;

//ѧ����
class Student{
public:
    int num;            //ѧ��
    string name;        //����
    string classname;   //�༶
    float math;         //��ѧ�ɼ�
    float english;      //Ӣ��ɼ�
    float computer;     //������ɼ�
    float average;      //ƽ���ɼ�

};

//ѧ���ɼ���ȡ����
float getscore(string filename, int stunum){
    int stunum_temp;
    float score;

    ifstream in(filename.c_str());
    if(in){
        cout<<"�ļ��򿪴���"<<endl;
        return 1;
    }

    bool flag = false;
    while(in){
        in>>stunum_temp>>score;
        if(in){     //����ȷ
            if(stunum_temp == stunum){  //�����ȡѧ�ž���Ŀ��ѧ��
                flag = true;            //����־����Ϊtrue
                break;                  //�˳�ѭ��
            }
        }
    }
    if(!flag)                           //û�ҵ�Ŀ��ѧ��
        score = 0;                      //����Ϊ0
    in.close();
    return score;
}

//ѧ����Ϣ�����������غ���
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
        cout<<"�ļ��򿪴���";
        return 1;
    }

    out<<"ѧ��\t\t"<<"����\t"<<"�༶\t"<<"��ѧ\t"<<"Ӣ��\t"<<"����"<<endl;
    while(in){
        Student student;

        //���ļ�
        in>>student.num>>student.name>>student.classname;
        if(!in)
            break;
        student.math = getscore("student2.txt", student.num);
        student.english = getscore("student3.txt", student.num);
        student.computer = getscore("student4.txt", student.num);
        student.average = (student.math + student.english + student.computer) / 3;

        //д�ļ�
        out << student;
    }

    out.close();
    in.close();
    cout<<"student.txt�ļ������ɹ�������ģ�"<<endl;

    return 0;
}
