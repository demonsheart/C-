#include <iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int isNumber(char*ch)
{
    int i;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>'9'||ch[i]<'0')
            return -1;
    }
    //return atoi(ch);
    int num=0;
    for(i=0;ch[i]!='\0';i++)
        num=num*10+ch[i]-'0';
    return num;

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

