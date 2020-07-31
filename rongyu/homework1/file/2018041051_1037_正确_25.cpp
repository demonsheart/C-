#include<bits/stdc++.h>
using namespace std;
 
void do1(char c,int m)
{
    int i,sum=0;
    char d;
    int *p=new int[m];
    char *q=new char[m];
    float *s=new float[m];
    if(c=='C')
    {
        for(i=0;i<m;i++)
            cin>>*(q+i);
        for(i=0;i<m;i++)
        {
            if(*(q+i)>d)
            {
                d=*(q+i);
            }
        }
        cout<<d<<endl;
    }
    else if(c=='I')
    {
        for(i=0;i<m;i++)
            cin>>*(p+i);
        for(i=0;i<m;i++)
            sum+=*(p+i);
        sum=sum/m;
        cout<<sum<<endl;
    }
    else
    {
        for(i=0;i<m;i++)
            cin>>*(s+i);
        sort(s,s+m-1);
        cout<<*s<<endl;
    }
    delete []p;
    delete []q;
    delete []s;
}
 
int main()
{
    int t,m;
    char c;
    cin>>t;
    while(t--)
    {
        cin>>c>>m;
        do1(c,m);
    }
     
    return 0;
}
