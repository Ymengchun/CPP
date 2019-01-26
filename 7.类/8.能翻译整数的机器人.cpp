#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Robot{
private:
    char name[20];
    char type[20];
public:
    Robot(){  //构造函数
        strcpy(name, "xxxxxx");
        strcpy(name, "xxxxxx");
    }
    void set(char n[], char t[]){ //设置修改数据
        strcpy(name, n);
        strcpy(type, t);
    }
    void out(int a);        //英文中每三位数读法相同，所以定义out()函数翻译小于1000的数
    void tran_int(int n);   //将1~1999999999翻译成英文句子
    ~Robot(){}  //析构函数
};

//
static char *num1[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight",
                        "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                        "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
static char *num10[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};


//翻译小于1000的整数
void Robot::out(int a){
    int b = a % 100;

    //若百位不为0，输出百位数加hundred，若此时十位个位均为0，不加and
    if(a/100!=0){
        cout<<num1[a/100]<<" hundred";
        if(b!=0)
            cout<<" and ";
    }

    if(b < 20){
        cout<<num1[b];
    }

    else{
        cout<<num10[b/10];
        if(b%10!=0)
            cout<<"\b-"<<num1[b%10];
    }

}

//整数翻译
 void Robot::tran_int(int n){
    if(n>1999999999)
        cout<<"超出范围！";
    else{
        int a = n / 1000000000;             //十亿位
        int b = (n % 1000000000) / 1000000; //百万位
        int c = (n % 100000) / 1000;        //千位
        int d = n % 1000;                   //个位~百位

        if(a!=0){
            out(a);
            cout<<" billion ";
        }
        if(b!=0){
            out(b);
            cout<<" million ";
        }
        if(c!=0)
            out(c);
            cout<<" thousand ";
        if(d!=0){
            if(d<1000 && (a!=0 || b!=0 || c!=0)){
                cout<<"and ";
                out(d);
            }
        }
    }
 }

 int main(){
    int n;
    cout<<"请输入n：";
    cin>>n;
    Robot Brown;
    Brown.tran_int(n);

    return 0;
 }
