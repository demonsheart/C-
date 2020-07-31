#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int isNumber(char*ch)
{
    int i,flag=0;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='0'&&ch[i]<='9')
            flag=1;
    }
    if(flag==0)
        return -1;
    else
        return atoi(ch);
}
int main()
{
    int t;
    char *p;
    cin>>t;
    while(t--)
    {
        p=new char[100];
        cin>>p;
        cout<<isNumber(p)<<endl;
        delete []p;

    }
}

