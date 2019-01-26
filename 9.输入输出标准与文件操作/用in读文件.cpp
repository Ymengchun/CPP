//用in读取file.txt中的内容
#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream in("file.txt");    //为读取而打开文件
    if(!in){
        cout<<"Error!";         //打开失败
    }
    char ch[80];
    in>>ch;                     //读取第一个单词
    cout<<ch;
    in>>ch;                     //读取第二个单词
    cout<<ch;
    while(in){
        char c=in.get();        //get函数读取剩余部分
        if(in)
            cout<<c;
    }
    in.close();


    return 0;
}
