#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"������n��ֵ��";
    cin>>n;
    int *p=new int[n];
    if(p==NULL)
        cout<<"��̬����ռ�ʧ�ܣ�"<<endl;
    else
        cout<<"������"<<n<<"������";
    for(int i=0; i<n; i++)
        cin>>p[i];
    for(int i=0; i<n; i++)
        cout<<p[i]<<" ";
    delete []p;
}
