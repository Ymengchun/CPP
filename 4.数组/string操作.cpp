#include<iostream>
#include<string>
using namespace std;
int main(){
    string text1("Heavy rains are pushing water levrls beyond the limit.");
    string text2, text3;
    int k;
    text2 = "Sluice gates at Three Gorges Dam opened to discharge water.";
    text3 = text1+text2;
    k = text3.find("Heavy");
    text3.erase(k,sizeof("Heavy")-1);
    text3.insert(k,"Strong");
    cout << text3 << endl;

    return 0;
}
