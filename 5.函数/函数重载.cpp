#include<iostream>
using namespace std;
void sort(double &a, double &b);                       //两个数排序
void sort(double &a, double &b, double &c);            //三个数排序
void sort(double &a, double &b, double &c, double &d); //三个数排序
void sort(double A[], int length);                     //
void sort(char s1[], char s2[]);
void sort(char s[][20], int n);
int mystrcmp(char s1[], char s2);

void sort(double &a, double &b){
    int tmp;
    if(a>b){
        tmp=a;
        a=b;
        b=tmp;
    }
}

void sort(double &a, double &b, double &c){
    sort(a,b);
    sort(a,c);
    sort(b,c);
}

void sort(double &a, double &b, double &c, double &d){
    sort(a,b,c);
    sort(a,d);
    sort(b,c,d);
}

void sort(double A[], int length){
    for(int i=0; i<length; i++)
        for(int j=i+1; j<length; j++)
            sort(A[j],A[j+1]);
}



int main(){

    return 0;
}
