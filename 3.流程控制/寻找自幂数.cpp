#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,m,i,sum,digit,start,end;
    cout << "����������������λ����";
    cin >> n;
    while(n>0){
        start = pow(10, n-1);
        end = pow(10,n)-1;
        cout << n << "λ������: ";
        for(i=start; i<=end; i++){
            m = i;
            sum = 0;
            while(m!=0){
                digit = m%10;
                sum = sum+pow(digit,n);
                m = m/10;
            }
            if(i==sum){
                cout << i << " ";
            }
        }
        cout << endl;
        cout << "����������������λ����";
        cin >> n;
    }
    cout << endl;
    return 0;
}
