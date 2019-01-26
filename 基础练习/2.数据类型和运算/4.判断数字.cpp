/*
输入:一个字符
输出：1或0.
输入样例1：5
输出样例1：1
输入样例1：a
输出样例1：0
*/
#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    if(ch>='0' && ch<='9')
        cout<<1;
    else
        cout<<0;

    return 0;
}
