#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class Robot{
private:
    char name[20];
    char type[20];
public:
    Robot(){  //���캯��
        strcpy(name, "xxxxxx");
        strcpy(name, "xxxxxx");
    }
    void set(char n[], char t[]){ //�����޸�����
        strcpy(name, n);
        strcpy(type, t);
    }
    void out(int a);        //Ӣ����ÿ��λ��������ͬ�����Զ���out()��������С��1000����
    void tran_int(int n);   //��1~1999999999�����Ӣ�ľ���
    ~Robot(){}  //��������
};

//
static char *num1[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight",
                        "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                        "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
static char *num10[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};


//����С��1000������
void Robot::out(int a){
    int b = a % 100;

    //����λ��Ϊ0�������λ����hundred������ʱʮλ��λ��Ϊ0������and
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

//��������
 void Robot::tran_int(int n){
    if(n>1999999999)
        cout<<"������Χ��";
    else{
        int a = n / 1000000000;             //ʮ��λ
        int b = (n % 1000000000) / 1000000; //����λ
        int c = (n % 100000) / 1000;        //ǧλ
        int d = n % 1000;                   //��λ~��λ

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
    cout<<"������n��";
    cin>>n;
    Robot Brown;
    Brown.tran_int(n);

    return 0;
 }
