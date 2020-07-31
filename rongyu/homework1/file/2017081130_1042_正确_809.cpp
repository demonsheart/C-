#include <iostream>
#include<cstdio>
using namespace std;
int dcmp(char *S, char *T)
{
    int i,n1=0,n2=0,x=0,y=0,z=0;
    for(i=0;S[i]!='\0';i++)
    {
        n1++;
    }
    for(i=0;T[i]!='\0';i++)
    {
        n2++;
    }
    if(n1>n2)
        return 1;
    else if(n1==n2)
    {
        for(i=0;S[i]!='\0';i++)
        {
            if(S[i]>T[i])
                x++;
            else if(S[i]<T[i])
                y++;
            else
                z++;
        }
        if(x>y)
            return 1;
        else if(x<y)
            return -1;
        else if(z==n1)
            return 0;
    }
    else
        return -1;
}
int main()
{
    int t;
    char ch1[100],ch2[100];
    cin>>t;
    getchar();
    while(t--)
    {
        cin>>ch1>>ch2;
        char *S=new char[100];
        char *T=new char[100];
        S=ch1;
        T=ch2;
        cout<<dcmp(S,T)<<endl;
    }
}
