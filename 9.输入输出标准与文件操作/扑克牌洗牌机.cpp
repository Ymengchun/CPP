#include<iostream>
#include<ctime>
#include<cstdlib>
#include<fstream>
#include<string>
using namespace std;

class Card{
public:
    string suit;
    string face;
};

class CardManager{
private:
    Card deck[4][13];
public:
    CardManager(){   //���캯��
        string suit[] = {"����", "����", "÷��", "����"};
        string face[] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
        for(int i=0; i<4; i++){
            for(int j=0; j<13; j++){
                deck[i][j].suit=suit[i];
                deck[i][j].face=face[j];
            }
        }
    }

    void shuffle(){ //ϴ��
        srand(time(NULL));
        for(int i=0; i<4; i++){
            for(int j=0; j<13; j++){
                int m = rand() % 4;
                int n = rand() % 13;
                Card temp = deck[i][j];
                deck[i][j] = deck[m][n];
                deck[m][n] = temp;
            }
        }
    }

    void deal(){    //����
        ofstream out("puke.txt");
        if (!out){
            cout<<"���ļ�ʧ�ܣ�"<<endl;
            return;
        }
        out<<"=============="<<endl;
        out<<"52����ϴ�ƽ��"<<endl;
        out<<"=============="<<endl;
        string person[] = {"��", "��", "��", "��"};
        for (int i=0; i<4; i++){
            out<<person[i]<<"���ƣ�"<<endl;
            for(int j=0; j<13; j++){
                out<<"��"<<j+1<<"�ţ�"<<deck[i][j].suit<<deck[i][j].face<<"\t\t";
                if((j + 1) % 4 == 0)
                    out<<endl;
            }
            out<<endl<<endl;
        }
        out.close();
        cout<<"puke.txt�ļ������ɣ�����ģ�"<<endl;
    }

};

int main(){
    CardManager cm;
    cm.shuffle();
    cm.deal();

    return 0;
}
