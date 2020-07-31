#include<bits/stdc++.h>
using namespace std;
int strCMP(char *s1, char *s2)
{
    int i,num1,num2;
    i=num1=num2=0;
    while(1)
    {
        if(*(s1+i)=='\0'&&*(s2+i)!='\0')
            return -1;
        else if(*(s2+i)=='\0'&&*(s1+i)!='\0')
            return 1;
        else if(*(s2+i)=='\0'&&*(s1+i)=='\0')
            break;
        if(*(s1+i)>*(s2+i))
            num1++;
        else if(*(s1+i)<*(s2+i))
            num2++;
        i++;
    }
    if(num1==num2)
        return 0;
    return num1>num2?1:-1;
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
        printf("%d\n",strCMP(s,ss));
    }
}

