/*
��Ŀ���ݣ�����һ�������ε�����ֱ�Ǳߵĳ��ȣ�����б�ߵĳ��ȣ����㹫ʽc=sqrt(a*a+b*b)
          ����, a,b������ֱ�Ǳߵĳ��ȣ�c��б�ߣ�sqrt��ʾ��ƽ����
�����ʽ:����double��ʵ�����ÿո������
�����ʽ��һ��ʵ��
����������1 2
���������2.23607
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double a, b, c;
    cin >> a >> b;
    c = sqrt(pow(a,2)+pow(b,2));
    cout << c << endl;
    return 0;
}
