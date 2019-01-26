#include<iostream>
using namespace std;

double faver(int s[], int n, int *max, int *min){
    double aver=s[0];
    *max=*min=s[0];
    for(int i=1; i<n; i++){
        aver+=s[i];
        if(s[i]>*max)
            *max=s[i];
        if(s[i]<*min)
            *min=s[i];
    }
    return aver/n;

}
int main(){
    int a[5]={80, 89, 67, 76, 98}, min, max;
    double aver;
    aver=faver(a,5,&max,&min);
    cout<<"max="<<max<<endl<<"min="<<min<<endl<<"aver="<<aver<<endl;

    return 0;
}
