#include<iostream>
using namespace std;

void move(char a, char b){
    cout<<a<<"----->"<<b<<endl;
}
void Hanoi(int n, char a, char b, char c){
    if(n==1)
        move(a,c);
    else{
        Hanoi(n-1,a,c,b);
        move(a,c);
        Hanoi(n-1,b,a,c);
    }
}

int main(){
    int n;
    char a,b,c;
    cout<<"请输入汉诺塔的个数：";
    cin>>n;
    cout<<"移动"<<n<<"个盘子的过程如下："<<endl;
    Hanoi(n,'A','B','C');

    return 0;
}

