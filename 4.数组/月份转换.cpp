#include<iostream>
using namespace std;
int main(){
    char month[12][10]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    int m;
    cin>>m;
    if(m<0||m>12)
        cout<<"error";
    else
        cout<<month[m-1];

    return 0;
}
