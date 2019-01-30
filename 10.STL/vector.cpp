#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;
    vector<int> v2(v1);
    vector<double> d1(10);
    vector<double> d2(10, 1.5);   //创建10个元素的向量，每个元素都是1.5
    vector<int> *p = new vector<int>(10, -5);   //创建向量指针

    v1.push_back(0);           //在v1尾部插入
    v1.insert(v1.begin(), 1);  //在v1头部插入
    v1.insert(v1.end(), 4);    //在v1尾部插入
    v1.insert(v1.end()-1, 3);  //在v1倒数第二位插入

    for(int i=0; i<v1.size(); i++)
        cout<<v1[i]<<" ";
    cout<<endl;

    v1.pop_back();      //删除尾部元素
    for(int i=0; i<v1.size(); i++){
        cout<<v1[i]<<" ";
    }

    v1.erase(v1.begin());   //删除首元素，erase()用于删除任意元素
    v1.erase(v1.end());     //删除倒数第二个元素
    v1.erase(v1.begin(), v1.end());  //全删
    v1.clear();     //全删


    return 0;
}
