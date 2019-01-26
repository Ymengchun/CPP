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
    cout<<"请输入三个数：";
    cin>>a>>b>>c;
    k = max(a,b,c);
    cout<<"最大的值是"<<k<<endl;

    return 0;
}

