#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

class Wordtype{
public:
    char word[20];
    int count;
};

int getwords(Wordtype *words){  //获取单词
    bool flag = false;
    ifstream in("wordcount.txt");
    if(!in){
        cout<<"打开文件失败！"<<endl;
        return 1;
    }

    char word[20];
    int i = 0;
    int n = 0;

    while (in){
        in>>word;   //读单词
        if(!in){    //文件读到结尾时退出
            break;
        }
        for(int i=0; i<n; i++)
        if(!strcmp(word, words[i].word)){
            words[i].count++;
            flag=true;
            break;
        }
        if(!flag){  //发现新单词
            words[i].count=1;
            strcpy(words[i].word, word);
            n++;    //总词数加一
        }
    }
    in.close();
    return n;
}

int main(){
    string s;
    Wordtype words[100] = {"", 0};  //单词对象变量定义与初始化
    int n = getwords(words);

    cout<<"英文单词统计结果如下："<<endl;
    for(int m=0; m<n; m++){
        cout<<words[m].word<<'\t'<<words[m].count<<endl;
    }
    cout<<"共搜索出"<<n<<"个单词"<<endl;

    return 0;
}

