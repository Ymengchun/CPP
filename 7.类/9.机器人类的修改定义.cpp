#include<iostream>
#include<string.h>
using namespace std;

class Robot{
private:
    char name[20];
    char type[20];
    int num;
    char *ps;
public:
    Robot(){
        strcpy(name, "xxxxxx");
        strcpy(type, "xxxxxx");
        num = 0;
        ps = new char[5];
        strcpy(ps, "zero");
    }
    void srt(char n[], char t[], int m){
        char *out(int a);
        char tran_int(int n);
        void print_num();
        ~Robot(){delete []ps;}
    }
};

char *Robot::out(int a){
    char k[1000] = '"';
    int b = a % 100;

}

int main(){


}
