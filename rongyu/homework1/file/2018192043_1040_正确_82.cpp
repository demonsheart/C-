#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int isNumber(char *str)
{
    int len=(int)strlen(str),sum=0;
    for(int i=0;i<len;i++)
        if(*(str+i)>='0' && *(str+i)<='9')
            sum+=(*(str+i)-'0')*(int)(pow(10,len-i-1)+0.5);
        else
            return -1;
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[100];
        cin>>str;
        cout<<isNumber(str)<<endl;
    }
    return 0;
}

