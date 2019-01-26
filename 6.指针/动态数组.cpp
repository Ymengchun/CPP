#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"请输入n的值：";
    cin>>n;
    int *p=new int[n];
    if(p==NULL)
        cout<<"动态申请空间失败！"<<endl;
    else
        cout<<"请输入"<<n<<"个数：";
    for(int i=0; i<n; i++)
        cin>>p[i];
    for(int i=0; i<n; i++)
        cout<<p[i]<<" ";
    delete []p;
}
