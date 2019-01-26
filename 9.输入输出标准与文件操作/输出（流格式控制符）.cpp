#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=128;
    cout<<"dec: "<<dec<<a<<endl;    //十进制
    cout<<"oct: "<<oct<<a<<endl;    //八进制
    cout<<"hex: "<<hex<<a<<endl;    //十六进制

    char pt[]="Beijing";
    cout<<setw(10)<<pt<<endl;               //宽度为10
    cout<<setfill('*')<<setw(10)<<pt<<endl; //用*填充，宽度为10

    double B=27.123456789;
    cout<<setiosflags(ios::scientific)<<setprecision(8)<<B<<endl;    //按指数形式输出，8位小数
    cout<<setprecision(4)<<B<<endl;                                        //4位小数
    cout<<resetiosflags(ios::scientific);                            //清除指数形式
    cout<<setiosflags(ios::fixed)<<setprecision(6)<<B<<endl;                  //按小数形式输出

    return 0;
}
