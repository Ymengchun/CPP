//��in��ȡfile.txt�е�����
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("file.txt");    //Ϊ��ȡ�����ļ�
    if(!in){
        cout<<"Error!";         //��ʧ��
    }
    char ch[80];
    in>>ch;                     //��ȡ��һ������
    cout<<ch;
    in>>ch;                     //��ȡ�ڶ�������
    cout<<ch;
    while(in){
        char c=in.get();        //get������ȡʣ�ಿ��
        if(in)
            cout<<c;
    }
    in.close();


    return 0;
}
