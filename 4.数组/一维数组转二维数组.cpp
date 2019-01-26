#include<iostream>
using namespace std;
int main(){
    const int m=2, n=3;
    int a[n][m], b[m*n];
    int i,j,x=1;

    for(i=0; i<6; i++,x++)
        b[i]=x;
    x=1;
    for(i=0; i<2; i++){
        for(j=0; j<3; j++,x++){
            a[i][j]=x;
            cout<<b[i*n+j]<<"\t"<<a[i][j]<<endl;
        }
    }
    return 0;
}
