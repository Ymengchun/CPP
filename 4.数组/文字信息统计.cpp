#include<iostream>
using namespace std;
int main(){
    const int N=100;
    int capital=0,smallletter=0,digit=0,other=0,len=0;
    char str[N];
    cin.getline(str,N);
    int i=0;

    while(str[i]!='\0'){
        len++;
        if(str[i]>='A'&&str[i]<='Z')
            capital++;
        else if(str[i]>='a'&&str[i]<='z')
            smallletter++;
        else if(str[i]>='0'&&str[i]<='9')
            digit++;
        else
            other++;
        i++;
    }
    cout<<"×Ö·û´®×Ü³¤¶È£º"<<len<<endl;
    cout<<"´óĞ´×ÖÄ¸£º"<<capital<<endl;
    cout<<"Ğ¡Ğ´×ÖÄ¸£º"<<smallletter<<endl;
    cout<<"Êı×Ö£º"<<smallletter<<endl;
    cout<<"ÆäËû×Ö·û£º"<<other<<endl;
    return 0;
}
