/*
����һ�������ع��캯���������� Date�����ݳ�Ա���ꡢ�¡��գ���Ա����������
һ���������Ĺ��캯�� Date(int,int,int)��һ�����������Ĺ��캯��(��������Ϊ1900��1��1��)��
һ��������-��-�ա���ʽ��ʾ���ڵĺ�����һ�������ݳ�Ա��ֵ�ĺ���void init(int,int,int)��
�������ж���Ĳ���Ҫ��
    1. �ֱ�ʹ��������ͬ�����ع��캯������������������󣨱���Ϊd1,d2��d2��ʼֵΪ2100-12-12����
    2. ������-��-�ա���ʽ�ֱ���ʾ���������ֵ��
    3. �������ݣ���init����Ϊd1��ֵ��
    4��������-��-�ա���ʽ��ʾ����d1��ֵ����

�����ʽ����d1��ֵ������
�����ʽ��d1��Ĭ��ֵ
          d2�ĳ�ʼֵ
          d1��ֵ���ֵ
����������2011 4 29
���������1900-1-1
          2100-12-12
          2011-4-29
*/
#include<iostream>
using namespace std;

class Date{
private:
    int year, month, day;
public:
    Date(int y, int m, int d){
        year = y;
        month = m;
        day = d;
    }
    Date():year(1900), month(1), day(1) {}
    void init(int y, int m, int d){
        year = y;
        month = m;
        day = d;
    }
    void print(){
        cout<<year<<"-"<<month<<"-"<<day<<endl;
    }
};


int main(){
    int year, month, day;
    cin>>year>>month>>day;

    Date d1;
    Date d2(2100,12,12);
    d1.print();
    d2.print();

    d1.init(year, month, day);
    d1.print();
    return 0;
}
