#include<iostream>
using namespace std;

class Fraction{
protected:
    int a;  //分子
    int b;  //分母
private:
    int divisor(int aa, int bb){    //最大公约数
        int a, b, temp;
        while(b!=0){
            temp = b;
            b = a % b;
            a = temp;
        }
    }

public:
    void set(int aa, int bb){       //设置分子分母
        a = aa;
        if(bb!=0)
            b = bb;
        else{
            a = 0;
            b = 1;
        }
    }

    void show(){        //显示分数
        cout<<a<<'/'<<b;
    }

    Fraction add(Fraction u){       //加一个分数
        int temp;

        Fraction v;
        v.a = a*v.b+b*u.a;
        v.b = b*u.b;
        temp = divisor(v.a, v.b);
        v.a = v.a / temp;
        v.b = v.b / temp;

        return v;
    }

};

class Real:public Fraction{     //实数类（继承）
public:
    void show_real(){
        cout<<a<<'/'<<b<<'='<<a/(double)b<<endl;
    }
};

int main(){
    Real f1, f2, f3;
    int a, b, c, d;
    cout<<"\n请分别输入两个分数的分子和分母，分母为0时退出\n";
    cin>>a>>b>>c>>d;
    f1.set(a,b);
    f2.set(c,d);

    f1.show_real();
    f2.show_real();

    cout<<endl;
    Fraction f4;
    f1.show();
    cout<<" + ";
    f2.show();
    f4 = f1.add(f2);
    cout<<" = ";
    f4.show();
    cout<<endl;

    return 0;
}
