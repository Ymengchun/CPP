#include<iostream>
using namespace std;
int main(){
    int i,j,k,l;
    int len=0;
    char str[101];
    char sub[101];

    cout<<"请输入子字符串：";
    cin.getline(str,100);
    while(str[len]!='\0')   //求字符串长度
        len++;
    cout<<"请输入子字符串的起始位置和长度：";
    cin>>k>>l;
    while(k!=0&&l!=0){
        j=0;
        for(i=k-1; i<k+l-1&&i<l<len; i++){
            sub[j]=str[i];
            j++;
        }
        sub[j]='\0';
        cout<<sub<<endl;
        cout<<"请输入子字符串的起始位置和长度：";
        cin>>k>>l;
    }
    return 0;
}
