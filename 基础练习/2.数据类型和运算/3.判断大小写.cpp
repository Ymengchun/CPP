/*
题目内容：输入一个英文字母，判断大小写。大写输出1，小写输出0.
输入:一个字母
输出：1或0.
输入样例1：A
输出样例1：1
输入样例2：a
输出样例2：0
*/
#include<iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    if(ch>='A' && ch<='Z')
        cout<<1;
    if(ch>='a' && ch<='z')
        cout<<0;

    return 0;
}
