//从五色球中取三次
#include<iostream>
using namespace std;
int main(){
    enum color{red, yellow, green, black, blue};
    int temp;
    int i,j,k;
    for(i=red; i<=green; i++){
        for(j=i+1; j<=black; j++){
            for(k=j+1; k<=blue; k++){
                for(int t=0; t<3; t++){
                    switch(t){
                    case 0: temp=i; break;
                    case 1: temp=j; break;
                    case 2: temp=k; break;
                    }
                    switch((enum color)temp){
                    case red:
                        cout<<"red"<<'\t';
                        break;
                    case yellow:
                        cout<<"yellow"<<'\t';
                        break;
                    case blue:
                        cout<<"blue"<<'\t';
                        break;
                    case green:
                        cout<<"green"<<'\t';
                        break;
                    case black:
                        cout<<"black"<<'\t';
                        break;
                    }
                }
                cout<<endl;
            }
        }
    }




    return 0;
}
