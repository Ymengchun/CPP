#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> v(5,3);                 //创建5个元素的变量，每个元素都是3
    vector<int>::iterator p;
    p = find(v.begin(), v.end(), 3);    //在整个向量中查找3
    if(p!=v.end())
        cout<<*p<<endl;
    p = find(v.begin(), v.end(), 5);    //在整个向量中查找5
    if(p==v.end())
        cout<<"Not found."<<endl;

    return 0;
}
