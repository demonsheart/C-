#include<iostream>
#include<string.h>
char *strAdd(char *s1,char *s2);
using namespace std;
int main()
{
    int T;
    char str1[100],str2[100];
    char *s1=str1,*s2=str2;

    cin>>T;
    while(T--)
    {
        cin>>s1;
        cout<<s1<<' ';
        cin>>s2;
        cout<<s2<<' ';

        cout<<strAdd(s1,s2)<<endl;
    }

}
char *strAdd(char *s1,char *s2)
{
    int i;
    static char str3[100];
    static char *s3=str3;
    for(i=0;*(s1+i)!='\0';i++)
    {
        *(s3+i)=*(s1+i);
    }
    *(s3+i)=0;
    strcat(s3,s2);
    return str3;
}

