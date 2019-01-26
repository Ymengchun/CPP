/*
题目内容：编写程序，输入平面上的两个点的坐标（x1,y1）,(x2,y2),求过这两点的直线的斜率（设斜率不为无穷）。
输入:两行数据，实数。第1行是x1,y1；第2行是x2,y2，数据间用空格隔开。
输出：一个实数，表示斜率。
输入样例：1 1
          2 2
输出样例：1
*/
#include<iostream>
using namespace std;
int main(){
    double x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;
    cout<<(y2-y1)/(x2-x1)<<endl;

    return 0;
}
