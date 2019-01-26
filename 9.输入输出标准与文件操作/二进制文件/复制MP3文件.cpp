#include<iostream>
#include<fstream>
using namespace std;

bool mp3copy(const char *szOriFile, const char *szDestFile){
    ifstream fin(szOriFile, ios::binary);   //以二进制方式打开源文件
    ofstream fout(szDestFile, ios::binary); //以二进制方式打开目标文件

    bool bRet = true;

    if(fout.bad())      //以写方式打开文件失败
        bRet = false;
    else{               //打开文件成功
        fin.seekg(0L, ios::beg); //指针指向文件开始处
        while(!fin.eof()){
            char szBuf[256] = {0};
            fin.read(szBuf, sizeof(char)*256);
            int length = fin.gcount();
            if(fout.bad()){
                bRet = false;
                break;
            }
            fout.write(szBuf, length);
        }
    }
    fout.close();   //关闭目标文件
    fin.close();    //关闭源文件

    return bRet;
}

int main(){
    char szOriFile[50];
    char szDestFile[50];

    cout<<"请输入原始文件名和目标文件名：";
    cin>>szOriFile;
    cin>>szDestFile;

    bool bRet = mp3copy(szOriFile, szDestFile);    //调用函数复制音乐文件
    if(bRet){
        cout<<"文件复制成功！"<<endl;
    }
    else{
        cout<<"文件复制失败！"<<endl;
    }

    return 0;
}
