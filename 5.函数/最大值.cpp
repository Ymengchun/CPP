#include<iostream>
using namespace std;

int max(int a, int b, int c){
    int max;
    max=a>b?a:b;
    max=max>c?max:c;
    return max;
}

int main(){
    int a,b,c,k;
    cout<<"��������������";
    cin>>a>>b>>c;
    k = max(a,b,c);
    cout<<"����ֵ��"<<k<<endl;

    return 0;
}

