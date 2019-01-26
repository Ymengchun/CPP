#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    for(int i=0; i<10; i++){
        v.push_back(i);     //添加1~9
    }

    cout<<"遍历偶数：";
    vector<int>::iterator it;               //声明迭代器
    for(it=v.begin(); it<v.end(); it++){   //利用迭代器访问
        if(*it % 2 == 0)
            cout<<*it<<" ";
    }
    cout<<endl;


    cout<<"在指定下标插入元素：";
    it = v.begin() + 10;    //下标为10处
    v.insert(it, 10);       //插入10
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;


    cout<<"删除奇数：";
    for(it=v.begin(); it<v.end();){     //这里不能有i++，否则不会删除任何元素
        if(*it%2==1)
            it=v.erase(it);             //删除后自动指向下一位
        else
            it++;
    }
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}
