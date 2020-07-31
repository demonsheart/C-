#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,t,i,j,k,ans,num;
    scanf("%d",&t);
    while(t--)
    {
        char **p = new char *[3];
        for(i=0;i<3;i++)
            *(p+i) = new char [30];
        for(i=0;i<3;i++)
        scanf("%s",*(p+i));
        int *l = new int [3];
        int *r = new int [3];
        for(i=0;i<3;i++)
            scanf("%d%d",l+i,r+i);
        char *s=new char [100];
        *(s)='\0';
        for(i=0;i<3;i++)
        {
            strncat(s,*(p+i)+l[i]-1,r[i]-l[i]+1);
        }
        printf("%s\n",s);
        delete []s;
    }
}

