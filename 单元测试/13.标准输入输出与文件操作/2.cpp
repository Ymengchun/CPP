/*�����ļ�A.txt������5���ַ���ÿ���ַ��п����пո�
����С��80����Ȼ���ٴδ򿪸��ļ���Ϊÿһ��ǰ���һ
���кź���ʾ����Ļ�ϣ��к�ռ��4���ַ����к����
����ʾ��
*/
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main(){
    char str[5][80];

    for(int i=0; i<5; i++){
        cin.getline(str, 80);
    }

    ofstream out("A.txt");
    if(!out){
        cout<<"���ļ�ʧ�ܣ�"<endl;
        return 1;
    }
    for(int i=0; i<5; i++){
        out<<str[i]<<endl;
    }
    out.close();

    instream out("A.txt");
    if(!in){
        cout<<"���ļ�ʧ�ܣ�"<endl;
        return 1;
    }
    while(in){
        in.getline(str, 80);
    }
    in.close();

    cout.unsetf(ios::left);
    for(int i=0; i<5; i++){
        cout<<i+1<<'\t'<<str[i];
    }

    return 0;
}
