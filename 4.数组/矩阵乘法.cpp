#include<iostream>
using namespace std;
int main(){
    const int M=20,N=20,K=20;
    double M1,N1,N2,K1;
    int A[M][N],B[N][K],C[M][K];
    int i,j,k;

    cout<<"请输入第一个矩阵的行数和列数：";
    cin>>M1>>N1;
    cout<<"请按行输入第一个矩阵的元素："<<endl;
    for(i=0; i<M1; i++){
        for(j=0; j<N1; j++){
            cin>>A[i][j];
        }
    }

    cout<<"请输入第二个矩阵的行数和列数："<<endl;
    cin>>N2>>K1;
    while(N1!=N2){
        cout<<"第二个矩阵的行数应该等于第一个矩阵的列数，请重新输入：";
        cin>>N2>>K1;
    }
    cout<<"请按行输入第二个矩阵的元素："<<endl;
    for(i=0; i<N1; i++){
        for(j=0; j<K1; j++){
            cin>>B[i][j];
        }
    }

    for(i=0; i<M1; i++){
        for(j=0; j<K1; j++){
            C[i][j]=0;          //积的矩阵初始化为0
            for(k=0; k<N1; k++)
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
        }
    }

    for(i=0; i<M1; i++){
        for(j=0; j<K1; j++){
            cout<<C[i][j]<<'\t';
        }
        cout<<endl;
    }
    return 0;
}
