#include<iostream>
using namespace std;

void fun(int a[][10], int n){
    int t;
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){   //只需要考虑上三角矩阵
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
    cout<<"请输入n的值：";
    cin>>n;
    cout<<"请输入"<<n<<"行"<<n<<"列元素："<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cin>>x[i][j];
        }
    }
    fun(x, n);
    cout<<"转置矩阵的结果如下："<<endl;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++){
            cout<<x[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

