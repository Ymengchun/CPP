#include<iostream>
using namespace std;
int main(){
    cout.setf(ios::left|ios::showpoint);    //����룬��һ��ʵ����ʽ��ʾ
    cout.precision(5);  //��С�������Ч����Ϊ5
    cout<<123.456789<<endl;

    cout.width(10);     //������ʾ�����10
    cout.fill('*'); //����ʾ����հ״���*���
    cout.unsetf(ios::left);    //��������״̬
    cout.setf(ios::right);  //�����Ҷ���
    cout<<123.456789<<endl;

    cout.setf(ios::left|ios::fixed);    //������룬�Թ̶�С����ʾ
    cout.precision(3);  //����ʵ����ʾ3λС��
    cout<<999.123456<<endl;

    cout.unsetf(ios::fixed);//��������ʽ
    cout.setf(ios::scientific); //����룬��ѧ��������ʾ
    cout.precision(3);
    cout<<123.45678<<endl;

    return 0;

}
