#include<iostream>
using namespace std;
int main(){
    cout.setf(ios::left|ios::showpoint);    //左对齐，以一般实数方式显示
    cout.precision(5);  //除小数点后有效数字为5
    cout<<123.456789<<endl;

    cout.width(10);     //设置显示区域宽10
    cout.fill('*'); //在显示区域空白处用*填充
    cout.unsetf(ios::left);    //清除左对齐状态
    cout.setf(ios::right);  //设置右对齐
    cout<<123.456789<<endl;

    cout.setf(ios::left|ios::fixed);    //设左对齐，以固定小数显示
    cout.precision(3);  //设置实数显示3位小数
    cout<<999.123456<<endl;

    cout.unsetf(ios::fixed);//清除定点格式
    cout.setf(ios::scientific); //左对齐，科学计数法显示
    cout.precision(3);
    cout<<123.45678<<endl;

    return 0;

}
