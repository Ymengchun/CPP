//����ɫ����ȡ����
#include<iostream>
using namespace std;
int main(){
    enum color{red, yellow, blue};
    int temp;   //��ǰС�����ɫ,red=0,yellow=2,blue=3
    int i,j;    //ѭ�����Ʊ���
    for(i=red; i<=yellow; i++){     //��һ��ȡ��
        for(j=i+1; j<=blue; j++){   //�ڶ���ȡ��
            for(int t=0; t<2; t++){ //ÿ��ȡ�����ɫ
                switch(t){
                case 0:             //��һ�ε���ɫΪi
                    temp=i;
                    break;
                case 1:             //�ڶ��ε���ɫΪj
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
