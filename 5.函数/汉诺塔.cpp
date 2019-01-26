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
    cout<<"�����뺺ŵ���ĸ�����";
    cin>>n;
    cout<<"�ƶ�"<<n<<"�����ӵĹ������£�"<<endl;
    Hanoi(n,'A','B','C');

    return 0;
}

