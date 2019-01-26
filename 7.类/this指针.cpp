#include<iostream>
using namespace std;

class Test{
private:
    int x;
public:
    Test(int = 0);
    void print();
};

Test::Test(int a){
    x = a;
}

void Test::print(){
    cout<<"     x = "<<x<<endl;
    cout<<"this->x = "<<this->x<<endl;
    cout<<"(*this).x = "<<(*this).x<<endl;

}

int main(){
    Test object(12);
    object.print();

    return 0;
}
