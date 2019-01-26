#include<iostream>
#include<cstring>
using namespace std;

void sort(char (*p)[10], int n){
    for(int i=0; i<n-1; i++)
    for(int j=i+1; j<n; j++)
        if(strcmp(p[i],p[j])>0){
            char temp[10];
            strcpy(temp,p[i]);
            strcpy(p[i],p[j]);
            strcpy(p[j],temp);
        }
}

int main(){
    char str[][10]={"Zhang","Wang","Wen","Xu","Li","Zhou"};
    sort(str,6);    //二维数组名str对应形参char (*p)[10]
    for(int i=0; i<6; i++)
        cout<<str[i]<<"  ";

    return 0;
}
