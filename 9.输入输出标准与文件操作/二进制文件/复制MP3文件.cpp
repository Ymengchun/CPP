#include<iostream>
#include<fstream>
using namespace std;

bool mp3copy(const char *szOriFile, const char *szDestFile){
    ifstream fin(szOriFile, ios::binary);   //�Զ����Ʒ�ʽ��Դ�ļ�
    ofstream fout(szDestFile, ios::binary); //�Զ����Ʒ�ʽ��Ŀ���ļ�

    bool bRet = true;

    if(fout.bad())      //��д��ʽ���ļ�ʧ��
        bRet = false;
    else{               //���ļ��ɹ�
        fin.seekg(0L, ios::beg); //ָ��ָ���ļ���ʼ��
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
    fout.close();   //�ر�Ŀ���ļ�
    fin.close();    //�ر�Դ�ļ�

    return bRet;
}

int main(){
    char szOriFile[50];
    char szDestFile[50];

    cout<<"������ԭʼ�ļ�����Ŀ���ļ�����";
    cin>>szOriFile;
    cin>>szDestFile;

    bool bRet = mp3copy(szOriFile, szDestFile);    //���ú������������ļ�
    if(bRet){
        cout<<"�ļ����Ƴɹ���"<<endl;
    }
    else{
        cout<<"�ļ�����ʧ�ܣ�"<<endl;
    }

    return 0;
}
