#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);      //��ջ
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"ջ��Ԫ�أ�"<<s.top()<<endl;       //���ջ��Ԫ��
    cout<<"ջ��Ԫ�ظ�����"<<s.size()<<endl;  //���ջ��Ԫ�ظ���
    cout<<"��ջ���̣�";
    while(!s.empty()){                       //ջ��Ϊ����ѭ��
        cout<<s.top()<<" ";                  //���ջ��Ԫ��
        s.pop();                             //��ջ��ɾ��ջ��Ԫ�أ�
    }

    return 0;
}
