/*
题目内容：编写程序，输入一个字符，显示其ASCII值。如输入“A”,显示65，输入“a”显示97。
输入:一个字符。
输出：一个整数。
输入样例1：A
输出样例1：65
输入样例2：a
输出样例2：97
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    char ch;
    cin>>ch;
    cout<<(int)ch;  //不能用cout<<ch-'0'，因为'0'的A十进制SCII码是48

    return 0;
}
