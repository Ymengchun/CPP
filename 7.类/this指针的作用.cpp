#include<iostream>
using namespace std;

class Test{
private:
    int a, b;
public:
    void set(int a, int b){
        this->a = a;    //����Ա�����Ĳ��������ݳ�Ա��ͬʱ����this��������
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
