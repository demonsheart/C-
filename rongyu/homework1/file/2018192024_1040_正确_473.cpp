#include <iostream>
#include <cmath>
#include <cstring>
using namespace std;
int isNumber(char *str)
{
    int i,len=strlen(str),sum;
    for(i=0;i<len;i++)
    {
        if(str[i]>'9'||str[i]<'0')
            return -1;
    }
    for(i=0,sum=0;i<len;i++)
        sum=sum*10+(str[i]-'0');
    return sum;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[101];
        cin>>str;
        cout<<isNumber(str)<<endl;
    }
    return 0;
}

