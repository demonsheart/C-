#include<bits/stdc++.h>
using namespace std;
int isNumber(char *s)
{
    int i=0,j=00;
    char *ss = new char [100];
    while(*(s+i)!='\0')
    {
        if(!(*(s+i)>='0'&&*(s+i)<='9'))
            return -1;
        else
        {
            *(ss+j)=*(s+i);
            j++;
        }
        i++;
    }
    ss[j]='\0';
    return atoi(ss);
}
int main()
{
    int n,m,j,i,k,t;
    scanf("%d",&t);
    while(t--)
    {
        char *s = new char [100];
        scanf("%s",s);
        printf("%d\n",isNumber(s));
    }
}

