/*生成文件A.txt，输入5行字符（每行字符中可以有空格，
长度小于80）。然后再次打开该文件，为每一行前面加一
个行号后显示在屏幕上，行号占据4个字符宽，行号左对
齐显示。
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
        cout<<"打开文件失败！"<endl;
        return 1;
    }
    for(int i=0; i<5; i++){
        out<<str[i]<<endl;
    }
    out.close();

    instream out("A.txt");
    if(!in){
        cout<<"打开文件失败！"<endl;
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
