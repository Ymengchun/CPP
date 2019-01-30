#include<iostream>
#include<utility>
#include<map>
using namespace std;

int main(){
    map<int,string> StuInfo;
    pair<int,string> mypair(1, "Tom");              //先定义pair对象，再创建map成员
    StuInfo.insert(mypair);

    StuInfo.insert(pair<int,string>(5,"Jack"));     //直接用pair创建map成员

    StuInfo[1] = "Jim";      //值可以修改，键不可以修改
    StuInfo[2] = "Lily";     //添加成员
    cout<<StuInfo[2]<<endl;        //输出元素的值

    //查找
    map<int,string>::iterator it;
    it = StuInfo.find(5);
    if(it == StuInfo.end())   //查找失败返回StuInfo.end()迭代器
        cout<<"该元素不存在"<<endl;
    else
        cout<<"找到了！"<<endl;

    //删除
    int t = StuInfo.erase(1); //删除成功返回1，删除失败返回0
    if(t==1)
        cout<<"删除成功！";
    else
        cout<<"删除失败！";

    //清空
    StuInfo.clear();

    return 0;
}
