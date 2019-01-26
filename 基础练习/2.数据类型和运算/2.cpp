/*
题目内容：编写程序，输入平面上的两个点的坐标（x1,y1）,(x2,y2),计算这两点之间的距离。
输入:两行数据，实数。第1行是x1,y1；第2行是x2,y2，数据间用空格隔开。
输出：一个实数，表示距离。
输入样例：
0 0
1 1
输出样例：
1.41421
*/
#include<iostream>
#include<cmath>
using namespace std;
int main(){
    double x1, y1, x2, y2;
    cin>>x1>>y1>>x2>>y2;

    cout<<sqrt(pow(y1-y2, 2) + pow(x1-x2, 2))<<endl;

    return 0;
}
