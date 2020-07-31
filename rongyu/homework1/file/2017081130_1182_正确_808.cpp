#include <iostream>
#include<cstdio>
using namespace std;
char *strAdd(char *s1, char *s2)
{
    int i,j=0;
    static char resultStr[100];
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
    char ch1[100],ch2[100];
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>ch1>>ch2;
        char *s1=new char [100];
        char *s2=new char [100];
        s1=ch1;
        s2=ch2;
        cout<<s1<<" "<<s2<<" "<<strAdd(s1,s2)<<endl;
    }
}
