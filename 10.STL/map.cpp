#include<iostream>
#include<utility>
#include<map>
using namespace std;

int main(){
    map<int,string> StuInfo;
    pair<int,string> mypair(1, "Tom");              //�ȶ���pair�����ٴ���map��Ա
    StuInfo.insert(mypair);

    StuInfo.insert(pair<int,string>(5,"Jack"));     //ֱ����pair����map��Ա

    StuInfo[1] = "Jim";      //ֵ�����޸ģ����������޸�
    StuInfo[2] = "Lily";     //��ӳ�Ա
    cout<<StuInfo[2]<<endl;        //���Ԫ�ص�ֵ

    //����
    map<int,string>::iterator it;
    it = StuInfo.find(5);
    if(it == StuInfo.end())   //����ʧ�ܷ���StuInfo.end()������
        cout<<"��Ԫ�ز�����"<<endl;
    else
        cout<<"�ҵ��ˣ�"<<endl;

    //ɾ��
    int t = StuInfo.erase(1); //ɾ���ɹ�����1��ɾ��ʧ�ܷ���0
    if(t==1)
        cout<<"ɾ���ɹ���";
    else
        cout<<"ɾ��ʧ�ܣ�";

    //���
    StuInfo.clear();

    return 0;
}
