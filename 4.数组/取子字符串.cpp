#include<iostream>
using namespace std;
int main(){
    int i,j,k,l;
    int len=0;
    char str[101];
    char sub[101];

    cout<<"���������ַ�����";
    cin.getline(str,100);
    while(str[len]!='\0')   //���ַ�������
        len++;
    cout<<"���������ַ�������ʼλ�úͳ��ȣ�";
    cin>>k>>l;
    while(k!=0&&l!=0){
        j=0;
        for(i=k-1; i<k+l-1&&i<l<len; i++){
            sub[j]=str[i];
            j++;
        }
        sub[j]='\0';
        cout<<sub<<endl;
        cout<<"���������ַ�������ʼλ�úͳ��ȣ�";
        cin>>k>>l;
    }
    return 0;
}
