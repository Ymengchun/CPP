#include<iostream>
using namespace std;

class Test{
private:
    int a, b;
public:
    void set(int a, int b){
        this->a = a;    //当成员函数的参数与数据成员相同时，用this加以区分
        this->b = b;
    }
    void print(){
        cout<<a<<" "<<b;
    }

};

int main(){
    Test test;
    test.set(1, 2);
    test.print();

    return 0;
}
