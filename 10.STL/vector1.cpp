#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    for(int i=0; i<10; i++){
        v1.push_back(i);
        cout<<v1[i]<<" ";
    }
    cout<<endl;

    cout<<"������С��"<<v1.size()<<endl;
    cout<<"���������ɵ���������"<<v1.max_size()<<endl;
    cout<<"�����Ƿ�Ϊ�գ�"<<v1.empty()<<endl;

    cout<<"����������С��ԭ���٣�";    //Ĭ��ɾ��βԪ��
    v1.resize(9);
    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    cout<<"����������С��ԭ���ࣺ";    //Ĭ�ϲ�0
    v1.resize(15);
    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    cout<<"����������С����Ĭ��Ԫ����䣺";
    v1.resize(20, 1);
    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    cout<<"�ٷ����ڴ�֮ǰ�����ɵ�Ԫ�ظ�����"<<v1.capacity()<<endl;



    return 0;
}
