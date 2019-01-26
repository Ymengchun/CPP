#include<iostream>
using namespace std;
int main(){
    const int m=2, n=3, p=4;
    int a[m][n][p], b[m*n*p];
    int i,j,k,x=1;

    for(i=0; i<9; i++,x++)
        b[i]=x;
    x=1;
    for(i=0; i<2; i++){
        for(j=0; j<3; j++){
            for(k=0; k<4; k++,x++){
                a[i][j][k]=x;
                cout<<b[(i*n+j)*p+k]<<"\t"<<a[i][j][k]<<endl;
            }
        }
    }
    return 0;
}
