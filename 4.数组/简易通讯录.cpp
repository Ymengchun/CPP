#include<iostream>
using namespace std;
int main(){
    struct telelist{
        char name[8];
        char sex[2];
        char num1[5];
        char num2[5];
    }a[3];  //����a[3]��telelist���͵Ľṹ���飬����3��Ԫ�أ�ÿ��Ԫ�ض�����telelist�����е�4������
    int i;
    for(i=0;i<3;i++)
        cin>>a[i].name>>a[i].sex>>a[i].num1>>a[i].num2;
    for(i=0;i<3;i++)
        cout<<a[i].name<<"/"<<a[i].sex<<"/"<<a[i].num1<<"/"<<a[i].num2<<endl;

    return 0;
}
