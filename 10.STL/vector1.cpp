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

    cout<<"向量大小："<<v1.size()<<endl;
    cout<<"向量可容纳的最大个数："<<v1.max_size()<<endl;
    cout<<"向量是否为空："<<v1.empty()<<endl;

    cout<<"调整向量大小比原来少：";    //默认删除尾元素
    v1.resize(9);
    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    cout<<"调整向量大小比原来多：";    //默认补0
    v1.resize(15);
    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    cout<<"调整向量大小并用默认元素填充：";
    v1.resize(20, 1);
    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    cout<<"再分配内存之前能容纳的元素个数："<<v1.capacity()<<endl;



    return 0;
}
