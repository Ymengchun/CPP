#include<iostream>
using namespace std;

void swap(double *x, double *y){
    double tmp;
    tmp=*x;
    *x=*y;
    *y=tmp;
}


int main(){
    double a,b,c;
    cout<<"��������������";
    cin>>a>>b>>c;
    double *pa=&a;
    double *pb=&b;
    double *pc=&c;
    if(*pa>*pb)
        swap(pa,pb);
    if(*pa>*pc)
        swap(pa,pc);
    if(*pb>*pc)
        swap(pb,pc);
    cout<<"��������С����ֱ�Ϊ��"<<a<<" "<<b<<" "<<c;

    return 0;
}
