#include<iostream>
#include<cstring>
using namespace std;
char *strAdd(char *s1,char *s2);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str1[1000];
        char str2[1000];
        cin>>str1;
        cin>>str2;
        cout<<strAdd(str1,str2)<<endl;
    }
    return 0;
}

char *strAdd(char *s1,char *s2)
{
    static char str[2000];
    strcpy(str,s1);
    int len1=strlen(str);
    int len2=strlen(s2);
    int i;
    for(i=len1;i<len1+len2;i++)
    {
        *(str+i)=*(s2+i-len1);
    }
    *(str+i)='\0';
    return str;
}
