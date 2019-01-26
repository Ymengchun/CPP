/*
题目内容：输入n个数字（实数），将他们写入文件out1.txt，数字之间用空格分开。
          然后再次打开该文件，读出全部数字，计算他们平均值并输出在屏幕上。
输入格式：第一行输入数字个数n，以后的n行每行输入一个实数。
输出格式：输出n个数平均值。格式：Avg=平均值
输入样例：
5
1.0
2.0
3.0
4.0
5.0
输出样例：Avg=3
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

	//文件检查
	ofstream out("out1.txt");
	if(!out){
        cout<<"文件打开失败"<<endl;
        return 1;
    }
	for (int i=0; i<count; i++){
		out << num[i]<<" ";
	}
	out.close();

	ifstream in("out1.txt");
	if(!in){
        cout<<"文件打开失败"<<endl;
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

