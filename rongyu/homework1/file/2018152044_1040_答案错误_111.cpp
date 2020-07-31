#include<iostream>
#include<cstring>
using namespace std;
int isNumber(char *p);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char str[1000];
        char *p;
        p=str;
        cin>>str;
        if(isNumber(p)==1)
            cout<<p<<endl;
        else
            cout<<"-1"<<endl;
    }
    return 0;
}

int isNumber(char *p)
{
    int flag=0;
    int len=strlen(p);
    int i,j;
    for(i=0;i<len;i++)
    {
        if(*(p+i)<'0'||*(p+i)>'9')
            return -1;
        if(*(p+i)!='0')
            flag=1;
        if(*(p+i)=='0'&&flag==0)
        {
            for(j=i+1;j<len;j++)
            {
                    *(p+j-1)=*(p+j);
            }
            *(p+j)='\0';
        }
    }
    return 1;
}
