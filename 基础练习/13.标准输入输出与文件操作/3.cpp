/*向文件num.txt中输入若干个数，保存并关闭文件。在开开文件读取这些数，计算它们的和.*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
    int num;
    double sum=0;
    cin>>num;
    double a[num];

    for(int i=0; i<num; i++){
        cin>>a[i];
    }

    ofstream out("num.txt");
    if(!out){
        cout<<"文件打开失败！"<<endl;
        return 1;
    }
    for(int i=0; i<num; i++){
        out<<a[i]<<" ";
    }
    out.close();

    ifstream in("num.txt");
    if(!in){
        cout<<"文件打开失败！"<<endl;
        return 1;
    }
    for(int i=0; i<num; i++){
        in>>a[i];
        sum += a[i];
    }
	in.close();

	cout<<sum<<endl;

	return 0;
}
