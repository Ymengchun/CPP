#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Wordtype{
public:
    char word[20];
    int count;
};

int getwords(Wordtype *words){  //��ȡ����
    bool flag = false;
    ifstream in("wordcount.txt");
    if(!in){
        cout<<"���ļ�ʧ�ܣ�"<<endl;
        return 1;
    }

    char word[20];
    int i = 0;
    int n = 0;

    while (in){
        in>>word;   //������
        if(!in){    //�ļ�������βʱ�˳�
            break;
        }
        for(int i=0; i<n; i++)
        if(!strcmp(word, words[i].word)){
            words[i].count++;
            flag=true;
            break;
        }
        if(!flag){  //�����µ���
            words[i].count=1;
            strcpy(words[i].word, word);
            n++;    //�ܴ�����һ
        }
    }
    in.close();
    return n;
}

int main(){
    string s;
    Wordtype words[100] = {"", 0};  //���ʶ�������������ʼ��
    int n = getwords(words);

    cout<<"Ӣ�ĵ���ͳ�ƽ�����£�"<<endl;
    for(int m=0; m<n; m++){
        cout<<words[m].word<<'\t'<<words[m].count<<endl;
    }
    cout<<"��������"<<n<<"������"<<endl;

    return 0;
}

