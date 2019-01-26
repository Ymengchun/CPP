#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("file.txt");   //为写入而打开文件，若不存在则自动创建
    if(!out){                   //打开或创建是否成功
        cout<<"Error!"<<endl;
    }

    out<<"Welcome to Beijing!"; //向文件中写入
    out.close();                //关闭文件

    return 0;
}
