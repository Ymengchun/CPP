#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v(5,3);                 //����5��Ԫ�صı�����ÿ��Ԫ�ض���3
    vector<int>::iterator p;
    p = find(v.begin(), v.end(), 3);    //�����������в���3
    if(p!=v.end())
        cout<<*p<<endl;
    p = find(v.begin(), v.end(), 5);    //�����������в���5
    if(p==v.end())
        cout<<"Not found."<<endl;

    return 0;
}
