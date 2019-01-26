#include<iostream>
using namespace std;

char *my_strcpy(char *s1, char *s2){
    while(*s2!=0)
        *s1++=*s2++;
    *s1='\0';
    return s1;
}

int my_strcmp(char *s1, char *s2){
    while(*s1!=0 && *s2!=0 && *s1==*s2){     //ASCII��Ϊ0��ʾ���ַ�
        s1++;
        s2++;
    }
    return *s1-*s2;
}

void swap(char *p, char *q){
    char t[10];
    my_strcpy(t, p);
    my_strcpy(p, q);
    my_strcpy(p, t);
}

void sort(char (*p)[10], int n){
    for(int i=0; i<n-1; i++)
        for(int j=i+1; j++; j++)
            if(my_strcmp(p[i], p[j]) > 0)
                swap(p[i], p[j]);
}

void show(char (*p)[10], int n){
    for(int i=0; i<n; i++)
        cout << p[i] << "  ";
}

int main(){
    int n;
    cout << "�������ַ����ĸ�����";
    cin >> n;
    char (*str)[10] = new char[n][10];  //��̬��������ǳ���
    for(int i=0; i<n; i++){
        cout << "�������" << i+1 << "���ַ�����";
        cin >> str[i];
    }
    sort(str, n);
    cout << "������" << n << "���ַ�����";
    show(str, n);
    delete []str;

    return 0;
}
