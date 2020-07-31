#include <iostream>
#include <cstring>
using namespace std;
int cmp(char *S,char *T);
int main()
{
    int t;
    char a[100],b[100];
    char *S=a;
    char *T=b;
    cin>>t;
    while(t--)
    {
        cin>>S;
        cin>>T;
        cout<<cmp(S,T)<<endl;
    }
    return 0;
}
int cmp(char *S,char *T)
{
    int n,m;
    int num=0;
    n=strlen(S);
    m=strlen(T);
    if(n>m)
        return 1;
    else if(n<m)
        return -1;
    else if(n==m)
    {
        for(int i=0;i<n;i++)
            {
                if(*(S+i)>*(T+i))
                    num++;
                else if(*(S+i)<*(T+i))
                    num--;
            }
        if(num==0)
            return 0;
        else if(num<n)
            return -1;
        else if(num>0)
            return 1;
    }
}

