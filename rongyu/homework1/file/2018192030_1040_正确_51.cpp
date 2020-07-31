#include<iostream>
#include<cstring>
using namespace std;
int isNumber(char *a)
{
    int i,len,m=0;
    len=strlen(a);
    for(i=0;i<len;i++)
    {
        if(isdigit(a[i]))
            m=m*10+a[i]-'0';
        else
            return -1;
    }
    return m;
}
int main()
{
    int t;
    char a[20],*p=a;
    cin>>t;
    while(t--)
    {
        cin>>a;
        cout<<isNumber(p)<<endl;
    }
}


