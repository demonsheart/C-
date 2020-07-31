#include <iostream>
#include <string.h>
using namespace std;
char *strAdd(char *s1, char *s2);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str1[20];
        char str2[20];
        cin>>str1>>str2;
        char *p=&str1[0];
        char *pp=&str2[0];
        cout<<p;
        char *strr=strAdd(p,pp);
        cout<<" "<<pp<<" "<<strr<<endl;
    }
    return 0;
}
char *strAdd(char *s1, char *s2)
{
    char *ppp;
    ppp=strcat(s1,s2);
    return ppp;
}
