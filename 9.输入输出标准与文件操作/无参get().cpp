#include<iostream>
using namespace std;

int main(){
    char c;
    cout<<"������һ�仰��"<<endl;
    while(1){
    c = cin.get();
    if(c=='\n')     //����س�����
        break;
    else
        cout << c;
    }

    return 0;
}
