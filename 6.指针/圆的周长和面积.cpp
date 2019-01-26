#include<iostream>
using namespace std;
void Circle(double r, double *pLength, double *pArea){
    *pLength=2*3.1415926*r;
    *pArea=3.1415926*r*r;
}

int main(){
    double r,length,area;
    cout<<"输入半径：";
    cin>>r;
    Circle(r,&length,&area);
    cout<<"周长为"<<length<<endl;
    cout<<"面积为"<<area<<endl;

    return 0;
}
