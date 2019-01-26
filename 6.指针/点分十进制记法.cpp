#include<iostream>
#include<cstring>
using namespace std;

bool check(char *s){    //判断合法性
   for(int i=0; i<32; i++){
        if(s[i]!='0' && s[i]!='1')
            return false;
    }
    return true;
}

int tran(char *s){      //将二进制转化为十进制
    int n=0,i;
    for(int i=0; i<8; i++){
        if(s[i]=='0')    //1101B=(((0*2+1)+1)*2+0)*2+1，类似于秦九韶算法
            n=n*2;
        else
            n=n*2+1;
        return n;
    }
}

int main(){
    char IP[33];
    cout<<"请输入32位地址：";
    cin>>IP;
    if(strlen(IP)!=32)
        cout<<"IP地址应为32位!";
    else{
        if(!check(IP))
            cout<<"有0和1以外的字符";
        else
            cout<<"转换后的结果为："<<tran(IP)<<"."<<tran(IP+8)<<"."<<tran(IP+16)<<"."<<tran(IP+24)<<endl;
    }
    return 0;
}
