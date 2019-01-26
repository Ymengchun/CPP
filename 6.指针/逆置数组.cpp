#include<iostream>
using namespace std;

void reverse(double *x, int n){
    double temp, *i, *j;
    i=x;        //Ê×ÔªËØ
    j=x+n-1;    //Î²ÔªËØ
    while(i<j){
        temp=*i;
        *i=*j;
        *j=temp;
        i++;
        j--;
    }
}

int main(){
    double x[10]={1,2,3,4,5,6,7,8,9,0};
    reverse(x,10);
    for(int i=0; i<10; i++)
        cout<<x[i]<<" ";

    return 0;
}
