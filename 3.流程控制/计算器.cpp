#include<iostream>
using namespace std;

int main(){
    double num1, num2;
    char op;
    cout<<"��������ʽ";
    cin >> num1 >> op >> num2;
    switch(op){
    case '+':
        cout << num1 << "+" << num2 << "=" << num1+num2 << endl;
        break;
    case '-':
        cout << num1 << "-" << num2 << "=" << num1-num2 << endl;
        break;
    case '*':
        cout << num1 << "*" << num2 << "=" << num1*num2 << endl;
        break;
    case '/':
        if(num2==0)
            cout<<"��������Ϊ0";
        else{
            cout << num1 << "/" << num2 << "=" << num1/num2 << endl;
        }
        break;
    default:
        cout<<"invalid operator!";
        break;
    }
    return 0;
}
