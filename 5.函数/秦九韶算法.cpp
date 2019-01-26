#include<iostream>
using namespace std;
double qinJS(double A[],int n,double x){
    double y=0;
    for(int i=0; i<=n; i++){
        cout<<"请输入第"<<i+1<<"项的系数（高次幂到低次幂）：";
        cin>>A[i];
        y=y*x+A[i];
    }
    return y;
}

int main(){
    int n;
    double x,A[100];
    cout<<"请输入x的值：";
    cin>>x;
    cout<<"请输入最高次的次数：";
    cin>>n;
    cout<<"结果为："<<qinJS(A,n,x);


    return 0;
}
