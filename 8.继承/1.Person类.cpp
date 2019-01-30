//一个能听、说、写、行走的Person类
#include<iostream>
#include<windows.h>
#include<string.h>
using namespace std;

static char *num1[] = {"", "one", "two", "three", "four", "five", "six", "seven", "eight",
                        "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen",
                        "sixteen", "seventeen", "eighteen", "nineteen", "twenty"};
static char *num10[] = {"", "", "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};

class Person{
private:
    char *name;
    char sex;
    char pid[19];
    int weight;
    int high;
public:
    Person(){
        name = new char[strlen("xxxxxx")+1];
        strcpy(name, "xxxxxx");
        strcpy(pid, "xxxxxxxxxxxxxxxxxx");
        sex = 'x';
        weight = 0;
        high = 0;
    }

    Person(char *n, char s, char *p, int w, int h){
        name = new char[strlen(n)+1];
        strcpy(name, n);
        sex = s;
        strcpy(pid, p);
        weight = w;
        high = h;
    }

    void change_data(char *n, char s, char *p, int w, int h){
        if(name!=NULL)
            delete []name;
        name = new char[strlen(n)];
        strcpy(name, n);
        strcpy(pid, p);
        sex = s;
        weight = w;
        high = h;
    }

    void walking(int k, int v){
        cout<<endl<<name<<"水平直线行走"<<k<<"步"<<endl;
        for(int i=0; i<k; i++){
            cout<<' '<<"o_o";
            Sleep(1000/v);
            cout<<"\b\b\b";
        }
    }

    void hearing(char *sentence){
        cout<<endl<<sentence<<endl;
        char *p = new char[strlen(sentence)+1];
        strcpy(p, sentence);
        char *pp = p;
        while(*p){
            if(*p>='a' && *p<='z'){
                *p = (*p) + 30;
            }
            else if(*p>='A' && *p<='Z'){
                *p = (*p) - 30;
            }
            p++;
        }
        cout<<pp<<endl;
        delete pp;
    }

    void out(int a){
        int b = a % 100;

        //若百位不为0，输出百位数加hundred，若此时十位个位均为0，不加and
        if(a/100 != 0){
            cout<<num1[a/100]<<" hundred";
            if(b != 0)
                cout<<" and ";
        }

        if(b < 20){
            cout<<num1[b];
        }

        else{
            cout << num10[b/10];
            if(b%10 != 0)
                cout << "\b-" << num1[b%10];
        }
    }

    void speek(int n){
        if(n > 1999999999){
            cout << "超出范围！" << endl;
        }
        else{
            int a = n / 1000000000;
            int b = (n % 1000000000) / 1000000;
            int c = (n % 1000000) / 1000;
            int d = n % 1000;

            if(a != 0){
                out(a);
                cout << " billion ";
            }
            if(b != 0){
                out(b);
                cout << " million ";
            }
            if(c != 0){
                out(c);
                cout << " thousand ";
            }
            if(d != 0){
                if(d<100 && (a!=0 || b!=0 || c!=0)){
                    out(d);
                }
            }
            cout << endl;
        }
    }

    void writing(){
        cout<<endl;
        cout<<"    #    #     "<<endl;
        cout<<"    #    #     "<<endl;
        cout<<"###############"<<endl;
        cout<<"#   #    #    #"<<endl;
        cout<<"###############"<<endl;
        cout<<"#   #    #    #"<<endl;
        cout<<"###############"<<endl;
    }

    void print(){
        cout << name << " " << sex << " " << pid << " " << weight << " " << high << endl;
    }

    ~Person(){delete []name;}
};

int main(){
    Person Jack("Jack Chen", 'M', "411524199501120030", 160, 180);
    Jack.print();
    Jack.walking(20, 4);
    Jack.hearing("Hi, you're my simple!");
    Jack.speek(1006);
    cout<<endl;
    Jack.writing();

    return 0;
}
