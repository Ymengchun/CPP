#include<iostream>
#include<cmath>
using namespace std;

double (*pf)(double);



int main(){
    pf=sqrt;
    cout<<(*pf)(2.0)<<endl;


    return 0;
}
