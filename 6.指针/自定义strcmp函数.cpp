int mystrcmp(char *s1, char *s2){
    while(*s1!=0 && *s2!=0 && *s1==*s2){     //ASCII��Ϊ0��ʾ���ַ�
        s1++;
        s2++;
    }
    return *s1-*s2;
}
