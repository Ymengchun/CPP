//从三色球中取两次
#include<iostream>
using namespace std;
int main(){
    enum color{red, yellow, blue};
    int temp;   //当前小球的颜色,red=0,yellow=2,blue=3
    int i,j;    //循环控制变量
    for(i=red; i<=yellow; i++){     //第一次取球
        for(j=i+1; j<=blue; j++){   //第二次取球
            for(int t=0; t<2; t++){ //每次取球的颜色
                switch(t){
                case 0:             //第一次的颜色为i
                    temp=i;
                    break;
                case 1:             //第二次的颜色为j
                    temp=j;
                    break;
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
                }
            }
            cout<<endl;
        }
    }

    return 0;
}
