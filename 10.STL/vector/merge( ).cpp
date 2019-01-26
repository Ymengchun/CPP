#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int A[] = {5,10,15,20,25};
    int B[] = {50,40,30,20,10};
    vector<int> v(10);
    vector<int>::iterator it;
    sort(A, A+5);
    sort(B, B+5);
    merge(A, A+5, B, B+5, v.begin());    //合并后存入vector的起始位置
    for(it=v.begin(); it<v.end(); it++){
        cout<<*it<<" ";
    }

    return 0;
}
