#include<iostream>
#include<cstring>
using namespace std;

bool check(char *s){    //�жϺϷ���
   for(int i=0; i<32; i++){
        if(s[i]!='0' && s[i]!='1')
            return false;
    }
    return true;
}

int tran(char *s){      //��������ת��Ϊʮ����
    int n=0,i;
    for(int i=0; i<8; i++){
        if(s[i]=='0')    //1101B=(((0*2+1)+1)*2+0)*2+1���������ؾ����㷨
            n=n*2;
        else
            n=n*2+1;
        return n;
    }
}

int main(){
    char IP[33];
    cout<<"������32λ��ַ��";
    cin>>IP;
    if(strlen(IP)!=32)
        cout<<"IP��ַӦΪ32λ!";
    else{
        if(!check(IP))
            cout<<"��0��1������ַ�";
        else
            cout<<"ת����Ľ��Ϊ��"<<tran(IP)<<"."<<tran(IP+8)<<"."<<tran(IP+16)<<"."<<tran(IP+24)<<endl;
    }
    return 0;
}
