#include <iostream>
#include<cstring>

using namespace std;
char *strAdd(char *s1,char *s2)
{
    int len1,len2,i;
    len1=strlen(s1);
    len2=strlen(s2);
    char *s=new char[len1+len2+1];
    for(i=0;i<len1;i++)
        s[i]=s1[i];
    for(i=len1;i<len1+len2+1;i++)
        s[i]=s2[i-len1];
    s[i]='\0';
    return s;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str1[1001],str2[1001];
        cin>>str1>>str2;
        cout<<str1<<" "<<str2<<" "<<strAdd(str1,str2)<<endl;
    }
    return 0;
}

