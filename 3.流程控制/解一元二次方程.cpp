#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double delta, a, b, c, x, m, n;
    cout << "������һԪ���η��̵�����ϵ��a, b, c: ";
    cin >> a >> b >> c;
    delta = b*b-4*a*c;
    if(a==0){
        if(b==0){
            cout << "�����ϵ�������ɷ���" << endl;
        }
        else{
            x=-c/b;
            cout << "ʵ��ΪһԪһ�η��̣���Ϊ" << x << endl;
        }
    }
    else{
        if(delta<0){
            n = sqrt(4*a*c-b*b)/(2*a);
            m = -b/(2*a);
            cout << "x1 = " << m << "+" << n << "i" << endl;
            cout << "x2 = " << m << "-" << n << "i" << endl;
        }
        else if(delta==0){
            cout<<"x1 = x2 = "<<-b/(2*a)<<endl;
        }
        else{
            cout << "x1 = " << (-b+sqrt(delta))/(2*a) << endl;
            cout << "x2 = " << (-b+sqrt(delta))/(2*a) << endl;
        }
    }
    return 0;
}
