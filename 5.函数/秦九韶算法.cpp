#include<iostream>
using namespace std;
double qinJS(double A[],int n,double x){
    double y=0;
    for(int i=0; i<=n; i++){
        cout<<"�������"<<i+1<<"���ϵ�����ߴ��ݵ��ʹ��ݣ���";
        cin>>A[i];
        y=y*x+A[i];
    }
    return y;
}

int main(){
    int n;
    double x,A[100];
    cout<<"������x��ֵ��";
    cin>>x;
    cout<<"��������ߴεĴ�����";
    cin>>n;
    cout<<"���Ϊ��"<<qinJS(A,n,x);


    return 0;
}
