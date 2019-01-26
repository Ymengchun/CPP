#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ofstream out("”√put–¥»Î.txt");
    char ch[]="Welcome to Beijing!";
    int i=0;
    while(ch[i]!=0){
        out.put(ch[i]);
        i++;
    }
    out.close();


    return 0;
}
