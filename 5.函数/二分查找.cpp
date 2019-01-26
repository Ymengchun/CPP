#include<iostream>
using namespace std;

int search(int A[], int len, int key){
    int low=0;
    int high=len-1;
    int mid;

    while(low<=high){
        mid=(low+high)/2;
        if(A[mid]==key)
            return mid;     //�ҵ���
        else if(A[mid]>key)
            high=mid-1;
        else
            low=mid+1;
    }
    return -1;  //  û�ҵ�
}

int main(){
    int a[]={3,5,6,9,10,11,12,15,19,22,23,29,45,50,54};
    int k,x;
    char again='n';
    do{
        cout<<"������Ҫ�ҵ�����";
        cin>>x;
        k=search(a,15,x);
        if(k>=0)
            cout<<x<<"�ǵ�"<<k+1<<"����"<<endl;
        else
            cout<<x<<"���������У�"<<endl;
        cout<<"�Ƿ񻹼�������y��n��";
        cin>>again;
    }while(again!='n');

    return 0;
}

