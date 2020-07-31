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
    int n,m,j,i,k,t,minn,maxx;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&n,&m);
        int **p = new int *[n];
        for(i=0;i<n;i++)
            *(p+i) = new int [m];
        maxx=0;
        minn=0x3f3f3f3f;
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
               scanf("%d",&p[i][j]);
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                minn=min(minn,p[i][j]);
                maxx=max(maxx,p[i][j]);
            }
        }
        printf("%d %d\n",minn,maxx);
        delete []p;
    }
}

