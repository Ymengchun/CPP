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
    CardManager(){   //构造函数
        string suit[] = {"红桃", "方块", "梅花", "黑桃"};
        string face[] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};
        for(int i=0; i<4; i++){
            for(int j=0; j<13; j++){
                deck[i][j].suit=suit[i];
                deck[i][j].face=face[j];
            }
        }
    }

    void shuffle(){ //洗牌
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

    void deal(){    //发牌
        ofstream out("puke.txt");
        if (!out){
            cout<<"打开文件失败！"<<endl;
            return;
        }
        out<<"=============="<<endl;
        out<<"52张牌洗牌结果"<<endl;
        out<<"=============="<<endl;
        string person[] = {"甲", "乙", "丙", "丁"};
        for (int i=0; i<4; i++){
            out<<person[i]<<"的牌："<<endl;
            for(int j=0; j<13; j++){
                out<<"第"<<j+1<<"张："<<deck[i][j].suit<<deck[i][j].face<<"\t\t";
                if((j + 1) % 4 == 0)
                    out<<endl;
            }
            out<<endl<<endl;
        }
        out.close();
        cout<<"puke.txt文件已生成，请查阅！"<<endl;
    }

};

int main(){
    CardManager cm;
    cm.shuffle();
    cm.deal();

    return 0;
}
