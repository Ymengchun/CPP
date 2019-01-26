#include<iostream>
using namespace std;
int main(){
    char str[20];
    int i=0;
    cin.getline(str,50);
    while(str[i] != '\0'){
        if(str[i]<97 || str[i]==' '){
            i++;
            continue;
        }
        str[i] = str[i]-32;
        i++;
    }
    cout<<str;
    return 0;
}
