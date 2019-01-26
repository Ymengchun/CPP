#include<iostream>
using namespace std;
int main(){
    struct telelist{
        char name[8];
        char sex[2];
        char num1[5];
        char num2[5];
    }a[3];  //声明a[3]是telelist类型的结构数组，包含3个元素，每个元素都含有telelist类型中的4个变量
    int i;
    for(i=0;i<3;i++)
        cin>>a[i].name>>a[i].sex>>a[i].num1>>a[i].num2;
    for(i=0;i<3;i++)
        cout<<a[i].name<<"/"<<a[i].sex<<"/"<<a[i].num1<<"/"<<a[i].num2<<endl;

    return 0;
}
