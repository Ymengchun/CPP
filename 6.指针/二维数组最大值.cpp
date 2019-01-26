#include<iostream>
using namespace std;

int main(){
    int a[3][4]={1,2,3,
                 4,5,6,
                 7,8,9};
    int max=a[0][0];
    int *p;
    for(p=&a[0][0]; p<&a[0][0]+12; p++){
        if(*p>max)
            max=*p;
    }
    cout<<"max="<<max<<endl;


    return 0;
}
