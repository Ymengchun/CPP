/*
��Ŀ���ݣ���д���򣬽���Hello World.��д���ı��ļ�a1.txt�С�
���룺��
���: Hello World.
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out("a1.txt");
    if(!out){
        cout<<"�ļ���ʧ�ܣ�"<<endl;
        return 1;
    }
    out<<"Hello World.";
    out.close();

    ifstream in("a1.txt");
    if(!in){
        cout<<"�ļ���ʧ�ܣ�"<<endl;
        return 1;
    }
    char ch[100] = {};
    in.getline(ch, 100);
    cout << ch;
    in.close();

    return 0;
}
