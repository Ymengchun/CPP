#include<iostream>
using namespace std;

char *name_month(int n){
    static char *month[]={
        "illegal month",
        "January",
        "February",
        "March",
        "April",
        "May",
        "June",
        "July",
        "August",
        "September",
        "October",
        "November",
        "December"
    };
    return (n>=1&&n<=12)?month[n]:month[0];


}

int main(){
    int n;
    cout<<"ÇëÊäÈëÔÂ·Ý£º";
    cin>>n;
    cout<<n<<"-"<<name_month(n)<<endl;
    return 0;
}
