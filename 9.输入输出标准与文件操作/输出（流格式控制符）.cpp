#include<iostream>
#include<iomanip>
using namespace std;

int main(){
    int a=128;
    cout<<"dec: "<<dec<<a<<endl;    //ʮ����
    cout<<"oct: "<<oct<<a<<endl;    //�˽���
    cout<<"hex: "<<hex<<a<<endl;    //ʮ������

    char pt[]="Beijing";
    cout<<setw(10)<<pt<<endl;               //���Ϊ10
    cout<<setfill('*')<<setw(10)<<pt<<endl; //��*��䣬���Ϊ10

    double B=27.123456789;
    cout<<setiosflags(ios::scientific)<<setprecision(8)<<B<<endl;    //��ָ����ʽ�����8λС��
    cout<<setprecision(4)<<B<<endl;                                        //4λС��
    cout<<resetiosflags(ios::scientific);                            //���ָ����ʽ
    cout<<setiosflags(ios::fixed)<<setprecision(6)<<B<<endl;                  //��С����ʽ���

    return 0;
}
