#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"请输入一句话："<<endl;
    while(1){
    c = cin.get();
    if(c=='\n')     //输入回车结束
        break;
    else
        cout << c;
    }

    return 0;
}
