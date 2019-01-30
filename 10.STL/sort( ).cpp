#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<string> v;
    v.push_back("food");
    v.push_back("candy");
    v.push_back("apple");
    sort(v.begin(), v.end());
    vector<string>::iterator it;
    for(it=v.begin(); it<v.end(); it++)
        cout<<*it<<endl;

    return 0;
}
