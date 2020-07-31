#include<bits/stdc++.h>
using namespace std;
char *strAdd(char *s1, char *s2)
{
    int i=0;
    char *s = new char [100];
    while(*(s1+i)!='\0')
    {
        *(s+i)=*(s1+i);
        i++;
    }
    int j=i;
    while(*(s2+i-j)!='\0')
    {
        *(s+i)=*(s2+i-j);
        i++;
    }
    return s;
}
int main()
{
    int n,m,j,i,k,t;
    scanf("%d",&t);
    while(t--)
    {
        char *s = new char [100];
        char *ss = new char [100];
        scanf("%s%s",s,ss);
        printf("%s %s %s\n",s,ss,strAdd(s,ss));
    }
}

