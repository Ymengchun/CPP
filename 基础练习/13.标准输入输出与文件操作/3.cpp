/*���ļ�num.txt���������ɸ��������沢�ر��ļ����ڿ����ļ���ȡ��Щ�����������ǵĺ�.*/
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
        cout<<"�ļ���ʧ�ܣ�"<<endl;
        return 1;
    }
    for(int i=0; i<num; i++){
        out<<a[i]<<" ";
    }
    out.close();

    ifstream in("num.txt");
    if(!in){
        cout<<"�ļ���ʧ�ܣ�"<<endl;
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
