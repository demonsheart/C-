#include<iostream>
#include<string.h>
using namespace std;

char *strAdd(char *s1, char *s2);

int main()
{
    int t;
    cin>>t;
    cin.get();
    while(t--)
    {
        char str1[100],str2[100];
        cin>>str1>>str2;
        cout<<str1<<' '<<str2<<' ';
        cout<<strAdd(str1,str2)<<endl;
    }
    return 0;

}

char *strAdd(char *s1, char *s2)
{
    static char str[200];
    char *p=str;
    int i,j=0;
    for(i=0;*(s1+i)!='\0';i++,j++)
        *(p+j)=*(s1+i);
    for(i=0;*(s2+i)!='\0';i++,j++)
        *(p+j)=*(s2+i);
    return p;

}

