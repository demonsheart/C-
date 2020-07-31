#include<iostream>
#include<cstring>
using namespace std;
char *strAdd(char *s1,char *s2)
{
	int i;
	int len1,len2,len3;
    len1=strlen(s1);
    len2=strlen(s2);
    static char s3[40];
    for(i=0;i<len1;i++)
    {
        s3[i]=s1[i];
    }
    for(i=0;i<len2;i++)
    {
        s3[i+len1]=s2[i];
    }
    s3[len2+len1+1]='\0';
    return s3;
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[20];
        char s2[20];
        cin>>s1>>s2;
        cout<<s1<<" "<<s2<<" ";
        char *p= strAdd(s1,s2);
        cout<<p<<endl;
        
        
    }
}
