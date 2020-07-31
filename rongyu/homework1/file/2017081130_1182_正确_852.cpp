#include <iostream>
#include<cstdio>
using namespace std;
char *strAdd(char *s1, char *s2)
{
    int i,j=0;
    char *resultStr=new char[100];
    for(i=0;s1[i]!='\0';i++)
        resultStr[j++]=s1[i];
    for(i=0;s2[i]!='\0';i++)
        resultStr[j++]=s2[i];
    resultStr[j]='\0';
    return resultStr;
}
int main()
{
    int t;
    char *s1;
    char *s2;
    cin>>t;
    while(t--)
    {
        s1=new char [100];
        s2=new char [100];
        cin>>s1>>s2;
        cout<<s1<<" "<<s2<<" "<<strAdd(s1,s2)<<endl;
        delete[]s1;
        delete[]s2;
    }
}

