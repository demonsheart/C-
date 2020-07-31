#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,j,k,ans,num,sum,t;
    double x,y;
    scanf("%d",&t);
    char *s=new char[1];
    while(t--)
    {
        scanf("%s%d",s,&n);
        if(*s=='C')
        {
            char *p=new char[1];
            char q=0;
            for(i=1;i<=n;i++)
            {
                scanf("%s",p);
                q=max(*p,q);
            }
            printf("%c\n",q);
            delete []p;
        }
        else if(*s=='I')
        {
            ans=0;
            for(i=1;i<=n;i++)
            {
                scanf("%d",&num);
                ans+=num;
            }
            printf("%d\n",ans/n);
        }
        else
        {
            y=0x3f3f3f3f;
            for(i=1;i<=n;i++)
            {
                scanf("%lf",&x);
                y=min(y,x);
            }
            cout<<y<<endl;
        }
    }
    return 0;
}

