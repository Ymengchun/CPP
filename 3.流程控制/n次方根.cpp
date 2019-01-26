#include<iostream>
#include<cmath>
using namespace std;

int main(){
    double x, n;
    while(1){
        cin >> x >> n;
        if(x==0 && n==0){
            cout << "Program terminated" << endl;
            break;
        }
        else
            if((x<0&&n<=0)||(x<0&&1/n!=int(1/n))){
                cout<<"error reinput"<<endl;
                continue;
            }
        cout<<x<<"\t"<<n<<"th root"<<pow(x,1.0/n)<<endl;
    }
    return 0;
}
