/*
��Ŀ���ݣ���дһ�����򣬴Ӽ�������һ���ַ����ɰ��������ַ������س�����������
          д�뵽�ļ�a1.txt�У��ٴ�a1.txt�ж����ļ����ݣ������е�Сд��ĸת
          ���ɴ�д��ĸ����ʾ����Ļ��.
�����ʽ��һ���ַ������м�����д�д��Сд��ĸ���ո������Լ����������ţ�
          ����С��80.
�����ʽ�����ͬ����������ͬ���ַ���������Сд��ĸ��ɴ�д��ĸ��
����������We are students from Xi��an Jiaotong University.
���������WE ARE STUDENTS FROM XI��AN JIAOTONG UNIVERSITY.
*/
#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;

int main(){
    char str[81];
    cin.getline(str, 81);

    ofstream out("a1.txt");
    if(!out){
        cout<<"���ļ�ʧ�ܣ�"<<endl;
        return 1;
    }
    int i = 0;
    while(str[i]!='\0'){
        out.put(str[i]);
        i++;
    }
    out.close();

    ifstream in("a1.txt");
    if(!in){
        cout<<"���ļ�ʧ�ܣ�"<<endl;
        return 1;
    }
    in.getline(str, 81);
    in.close();

    int length = strlen(str);           //Сдת��д
	for (int i=0; i<length; i++){
		if (str[i]<=122 && str[i]>=97){
			str[i] = str[i] - 32;
		}
	}

	cout << str;

    return 0;
}
