#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("file.txt");   //Ϊд������ļ��������������Զ�����
    if(!out){                   //�򿪻򴴽��Ƿ�ɹ�
        cout<<"Error!"<<endl;
    }

    out<<"Welcome to Beijing!"; //���ļ���д��
    out.close();                //�ر��ļ�

    return 0;
}
