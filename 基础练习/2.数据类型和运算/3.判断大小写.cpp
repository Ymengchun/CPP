/*
��Ŀ���ݣ�����һ��Ӣ����ĸ���жϴ�Сд����д���1��Сд���0.
����:һ����ĸ
�����1��0.
��������1��A
�������1��1
��������2��a
�������2��0
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
