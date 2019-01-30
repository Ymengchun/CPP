#include<iostream>
#include<utility>
#include<map>
#include<string>
using namespace std;

int main(){
    map<int,string> StuInfo;
    StuInfo.insert(pair<int, string>(1, "Tom"));
    StuInfo.insert(pair<int, string>(5, "Jack"));
    StuInfo[2] = "Lily";
    map<int, string>::iterator it;

    for(it=StuInfo.begin(); it!=StuInfo.end(); it++)
        cout<<(*it).first<<" "<<(*it).second<<endl;      //mapµÄÊä³ö

    return 0;
}
