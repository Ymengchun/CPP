#include<iostream>
using namespace std;

void fun(int a[][10], int n){
    int t;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){   //ֻ��Ҫ���������Ǿ���
            t=a[i][j];
            a[i][j]=a[j][i];
            a[j][i]=t;
        }
    }
    return ;
}

int main(){
    int x[10][10],n;

    int i,j;
    cout<<"������n��ֵ��";
    cin>>n;
    cout<<"������"<<n<<"��"<<n<<"��Ԫ�أ�"<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>x[i][j];
        }
    }
    fun(x, n);
    cout<<"ת�þ���Ľ�����£�"<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

