#include <iostream>
#include<cstdio>
#include <stdlib.h>
using namespace std;
int isNumber(char*ch)
{
    int i,flag=0;
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='0'&&ch[i]<='9')
            flag=1;
        else
            return -1;

    }
    return atoi(ch);

}
int main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        int j=0;
        char ch[100]={0};
        cin>>ch;
        char *p=new char[100];
        for(i=0;ch[i]!='\0';i++)
            p[j++]=ch[i];
        p[j]='\0';
        cout<<isNumber(p)<<endl;
        delete []p;

    }
}
