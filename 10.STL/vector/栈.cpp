#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(1);      //入栈
    s.push(2);
    s.push(3);
    s.push(4);
    cout<<"栈顶元素："<<s.top()<<endl;       //输出栈顶元素
    cout<<"栈中元素个数："<<s.size()<<endl;  //输出栈中元素个数
    cout<<"出栈过程：";
    while(!s.empty()){                       //栈不为空则循环
        cout<<s.top()<<" ";                  //输出栈顶元素
        s.pop();                             //出栈（删除栈顶元素）
    }

    return 0;
}
