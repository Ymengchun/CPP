//��grade.txt�ļ��ж�ȡѧ���ɼ�������ƽ���ɼ����������뵽average.txt ��
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char name[20];
    int math, eng, phy;
    //���ļ�
    ifstream fin("grade.txt");
    ofstream fout("average.txt");
    if(!fin || !fout){
        cout<<"�ļ���ʧ��!"<<endl;
        return 1;
    }
    //���ļ�
    while(fin){
        fin>>name>>math>>eng>>phy;
        if(fin){    //��Ч���ݲ����
            float aver = 1.0*(math+eng+phy)/3;
            fout<<name<<'\t'<<math<<'\t'<<eng<<'\t'<<phy<<'\t'<<aver<<endl;
        }
    }

    fin.close();
    fout.close();


    return 0;
}
