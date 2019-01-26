/*
题目内容：编写一个程序，从键盘输入一行字符（可包含各种字符，遇回车符结束），
          写入到文件a1.txt中；再从a1.txt中读出文件内容，将其中的小写字母转
          换成大写字母后显示在屏幕上.
输入格式：一个字符串，中间可能有大写或小写字母、空格、数字以及其他标点符号，
          长度小于80.
输出格式：输出同输入内容相同的字符串，其中小写字母变成大写字母。
输入样例：We are students from Xi’an Jiaotong University.
输出样例：WE ARE STUDENTS FROM XI’AN JIAOTONG UNIVERSITY.
*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char str[81];
    cin.getline(str, 81);

    ofstream out("a1.txt");
    if(!out){
        cout<<"打开文件失败！"<<endl;
        return 1;
    }
    int i = 0;
    while(str[i]!='\0'){
        out.put(str[i]);
        i++;
    }
    out.close();

    ifstream in("a1.txt");
    if(!in){
        cout<<"打开文件失败！"<<endl;
        return 1;
    }
    in.getline(str, 81);
    in.close();

    int length = strlen(str);           //小写转大写
	for (int i=0; i<length; i++){
		if (str[i]<=122 && str[i]>=97){
			str[i] = str[i] - 32;
		}
	}

	cout << str;

    return 0;
}
