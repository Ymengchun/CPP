#include<iostream>
using namespace std;
int main(){
    const int M=20,N=20,K=20;
    double M1,N1,N2,K1;
    int A[M][N],B[N][K],C[M][K];
    int i,j,k;

    cout<<"�������һ�������������������";
    cin>>M1>>N1;
    cout<<"�밴�������һ�������Ԫ�أ�"<<endl;
    for(i=0; i<M1; i++){
        for(j=0; j<N1; j++){
            cin>>A[i][j];
        }
    }

    cout<<"������ڶ��������������������"<<endl;
    cin>>N2>>K1;
    while(N1!=N2){
        cout<<"�ڶ������������Ӧ�õ��ڵ�һ����������������������룺";
        cin>>N2>>K1;
    }
    cout<<"�밴������ڶ��������Ԫ�أ�"<<endl;
    for(i=0; i<N1; i++){
        for(j=0; j<K1; j++){
            cin>>B[i][j];
        }
    }

    for(i=0; i<M1; i++){
        for(j=0; j<K1; j++){
            C[i][j]=0;          //���ľ����ʼ��Ϊ0
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
