#include<iostream>
#include<cstring>
#include<cmath>
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
        if(isNumber(p)!=0)
            cout<<"-1"<<endl;
    }
    return 0;
}

int isNumber(char *p)
{
    int sum=1;
    int len=strlen(p);
    int i,j=0;
    for(i=0;i<len;i++)
    {
        if(*(p+i)<'0'||*(p+i)>'9')
            return -1;
    }
    for(i=len-1;i>=0;i--)
    {
            sum+=(*(p+i)-'0')*pow(10,j);
            j++;
    }
    cout<<sum<<endl;
    return 0;
}
