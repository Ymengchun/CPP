#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2(v1);
    vector<double> d1(10);
    vector<double> d2(10, 1.5);   //����10��Ԫ�ص�������ÿ��Ԫ�ض���1.5
    vector<int> *p = new vector<int>(10, -5);   //��������ָ��

    v1.push_back(0);           //��v1β������
    v1.insert(v1.begin(), 1);  //��v1ͷ������
    v1.insert(v1.end(), 4);    //��v1β������
    v1.insert(v1.end()-1, 3);  //��v1�����ڶ�λ����

    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    v1.pop_back();      //ɾ��β��Ԫ��
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }

    v1.erase(v1.begin());   //ɾ����Ԫ�أ�erase()����ɾ������Ԫ��
    v1.erase(v1.end());     //ɾ�������ڶ���Ԫ��
    v1.erase(v1.begin(), v1.end());  //ȫɾ
    v1.clear();     //ȫɾ


    return 0;
}
