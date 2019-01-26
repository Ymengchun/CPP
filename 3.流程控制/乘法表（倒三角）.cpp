#include<iostream>
using namespace std;

int main(){
    double i, u, e;
    e = 1;
    u = 1;
    i = 1;
    while(u>1E-7){
        u = u/i;
        e = e+u;
        i++;
    }
    cout << e << endl;
    return 0;
}
