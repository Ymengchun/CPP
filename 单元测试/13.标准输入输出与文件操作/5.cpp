/*
��Ŀ���ݣ���д���򣬰����и�ʽ��ʾ��Ϣ����7�У�ÿ�е���ֵ�ǹ̶��ģ�ÿ�������ǡ�#���ţ�
          �м�ġ�&��������ַ���ʵ�����ֵ�λ��С����ʱ�Զ���䡣
#&&&&&&&1#
#&&&&&&10#
#&&&&&100#
#&&&&1000#
#&&&10000#
#&&100000#
#&1000000#
���룺�������ַ��Ͷ��뷽ʽ�����ж��뷽ʽ��1��ʾ����0��ʾ����
�������Ŀ˵����7����Ϣ��
����1���룺8 & 0
����1�����
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
