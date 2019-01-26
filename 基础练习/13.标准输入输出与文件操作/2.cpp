/*
题目内容：编写程序，将“Hello World.”写入文本文件a1.txt中。
输入：无
输出: Hello World.
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    ofstream out("a1.txt");
    if(!out){
        cout<<"文件打开失败！"<<endl;
        return 1;
    }
    out<<"Hello World.";
    out.close();

    ifstream in("a1.txt");
    if(!in){
        cout<<"文件打开失败！"<<endl;
        return 1;
    }
    char ch[100] = {};
    in.getline(ch, 100);
    cout << ch;
    in.close();

    return 0;
}
