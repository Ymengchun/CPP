#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    for(int i=0; i<10; i++){
        v.push_back(i);     //���1~9
    }

    cout<<"����ż����";
    vector<int>::iterator it;               //����������
    for(it=v.begin(); it<v.end(); it++){   //���õ���������
        if(*it % 2 == 0)
            cout<<*it<<" ";
    }
    cout<<endl;


    cout<<"��ָ���±����Ԫ�أ�";
    it = v.begin() + 10;    //�±�Ϊ10��
    v.insert(it, 10);       //����10
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    cout<<"ɾ��������";
    for(it=v.begin(); it<v.end();){     //���ﲻ����i++�����򲻻�ɾ���κ�Ԫ��
        if(*it%2==1)
            it=v.erase(it);             //ɾ�����Զ�ָ����һλ
        else
            it++;
    }
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}
