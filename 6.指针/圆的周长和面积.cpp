#include<iostream>
using namespace std;
void Circle(double r, double *pLength, double *pArea){
    *pLength=2*3.1415926*r;
    *pArea=3.1415926*r*r;
}

int main(){
    double r,length,area;
    cout<<"����뾶��";
    cin>>r;
    Circle(r,&length,&area);
    cout<<"�ܳ�Ϊ"<<length<<endl;
    cout<<"���Ϊ"<<area<<endl;

    return 0;
}
