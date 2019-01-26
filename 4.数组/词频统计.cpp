#include<iostream>
#include<cstring>
using namespace std;

struct wordlist{
    char word[20];
    int freq;
};

int main(){
    wordlist list[1000];
    int N=0;
    char str[20];
    int i,j,k;

    //输入单词
    cout<<"请输入一系列英语单词："<<endl;
    cin>>str;
    while(strcmp(str,"xyz")!=0){
        for(i=0; i<N; i++){
            if(strcmp(list[i].word,str)==0){
                list[i].freq++;
                break;
            }
        }
        if(i>=N){
            strcpy(list[i].word,str);
            list[i].freq=1;
            N++;
        }
        cin>>str;
    }

    //对字典进行排序
    for(i=0; i<N-1; i++){
        k=i;
        for(j=i+1; j<N; j++){
            if((list[j].word,list[k].word)<0){
                k=j;
            }
        }
        if(k!=i){
            wordlist temp;
            temp=list[i];
            list[i]=list[j];
            list[j]=temp;
        }
    }

    //输出结果
    cout<<"词频统计如下："<<endl;      //输出
    for(i=0; i<N; i++)
        cout<<list[i].word<<'\t'<<list[i].freq<<endl;
    return 0;
}
