/*
��Ŀ���ݣ���д��������ƽ���ϵ�����������꣨x1,y1��,(x2,y2),����������֮��ľ��롣
����:�������ݣ�ʵ������1����x1,y1����2����x2,y2�����ݼ��ÿո������
�����һ��ʵ������ʾ���롣
����������
0 0
1 1
���������
1.41421
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;

    cout<<sqrt(pow(y1-y2, 2) + pow(x1-x2, 2))<<endl;

    return 0;
}
