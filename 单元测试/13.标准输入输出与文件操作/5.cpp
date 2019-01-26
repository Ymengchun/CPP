/*
题目内容：编写程序，按下列格式显示信息：共7行，每行的数值是固定的，每行两端是“#”号，
          中间的“&”是填充字符，实际数字的位数小于域时自动填充。
#&&&&&&&1#
#&&&&&&10#
#&&&&&100#
#&&&&1000#
#&&&10000#
#&&100000#
#&1000000#
输入：域宽、填充字符和对齐方式，其中对齐方式：1表示居左，0表示居右
输出：题目说明的7行信息。
样例1输入：8 & 0
样例1输出：
#&&&&&&&1#
#&&&&&&10#
#&&&&&100#
#&&&&1000#
#&&&10000#
#&&100000#
#&1000000#
*/
#include <iostream>
#include <fstream>
using namespace std;

int main(){
	int wid, style;
	char c;
	cin>>wid>>c>>style;

	for (int i=0; i<7; i++){
        cout<<'#';
        cout.width(wid);

        if(style){
            cout.setf(ios::left);
            for(int j=0; j<=i; j++){
                cout<<'0';
            }
            cout<<'1';
            cout.fill(c);
        }

        else{
            cout.setf(ios::right);
            for(int j=0; j<i; j++){
                cout<<'0';
            }
            cout<<'1';
            cout.fill(c);
        }
        cout<<'#'<<endl;
	}

	return 0;
}
