/*
��Ŀ���ݣ�����n�����֣�ʵ������������д���ļ�out1.txt������֮���ÿո�ֿ���
          Ȼ���ٴδ򿪸��ļ�������ȫ�����֣���������ƽ��ֵ���������Ļ�ϡ�
�����ʽ����һ���������ָ���n���Ժ��n��ÿ������һ��ʵ����
�����ʽ�����n����ƽ��ֵ����ʽ��Avg=ƽ��ֵ
����������
5
1.0
2.0
3.0
4.0
5.0
���������Avg=3
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int count;
	cin >> count;
	double num[count];
	for (int i = 0; i < count; i++){
		cin >> num[i];
	}

	//�ļ����
	ofstream out("out1.txt");
	if(!out){
        cout<<"�ļ���ʧ��"<<endl;
        return 1;
    }
	for (int i=0; i<count; i++){
		out << num[i]<<" ";
	}
	out.close();

	ifstream in("out1.txt");
	if(!in){
        cout<<"�ļ���ʧ��"<<endl;
        return 1;
    }
	for (int i=0; i<count; i++){
		in >> num[i];
	}
	in.close();


	double sum = 0;
	for (int i=0; i<count; i++){
		sum = sum + num[i];
	}

	cout << "Avg=" << sum/count;

	return 0;
}

