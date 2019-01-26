/*
��Ŀ���ݣ�ֱ�߷��̣�Ax+By+C=0����д��������A��B,C,�͵㣨x,y��,����õ㵽ֱ�ߵľ��롣
          �㵽ֱ�ߵľ��빫ʽ��d=|Ax+By+C|/sqrt(A*A+B*B).
����:���У���1����ֱ�߷��̵�ϵ��A,B,C,�ÿո��������2����ƽ��������x,y���ÿո������
�����һ��ʵ������ʾ�㵽ֱ�ߵľ��룬��ౣ����λС�����������롣
����������2 1 -10
          -1 2
���������4.47
*/
#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

double fabs(double x){
    if(x>=0)
        return x;
    else
        return -x;
}

int main(){
    double A, B, C;
    double x, y;
    cin>>A>>B>>C>>x>>y;

    double c = fabs(A*x+B*y+C) / sqrt(A*A+B*B);
    cout<<setiosflags(ios::fixed)<<setprecision(2)<<c<<endl;

    return 0;
}
