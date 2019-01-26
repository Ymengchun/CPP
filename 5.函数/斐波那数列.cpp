#include<iostream>
using namespace std;

int Fib(int n){
    if(n==1)
        return 1;
    else if(n==2)
        return 1;
    else
        return Fib(n-2)+Fib(n-1);
}

int main(){
    int n;
    cout<<"ÇëÊäÈëÏîÊı£º";
    cin>>n;
    for(int i=1; i<=n; i++)
        cout<<Fib(i)<<" ";

    return 0;
}
