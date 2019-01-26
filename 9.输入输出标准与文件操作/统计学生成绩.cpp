//从grade.txt文件中读取学生成绩，计算平均成绩，将其输入到average.txt 中
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char name[20];
    int math, eng, phy;
    //打开文件
    ifstream fin("grade.txt");
    ofstream fout("average.txt");
    if(!fin || !fout){
        cout<<"文件打开失败!"<<endl;
        return 1;
    }
    //读文件
    while(fin){
        fin>>name>>math>>eng>>phy;
        if(fin){    //有效数据才输出
            float aver = 1.0*(math+eng+phy)/3;
            fout<<name<<'\t'<<math<<'\t'<<eng<<'\t'<<phy<<'\t'<<aver<<endl;
        }
    }

    fin.close();
    fout.close();


    return 0;
}
