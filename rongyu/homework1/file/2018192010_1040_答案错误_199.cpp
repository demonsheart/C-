#include <iostream>
#include<cmath>
#include<algorithm>
#include <cstdio>
#include<cstring>
using namespace std;
int isNumber(char *str);
int main()
{
    int i,j,len,t;
    cin >> t;
    while(t--)
    {
        char *str = new char[100];
        cin>>str;
        cout << isNumber(str) <<endl;
    }
    return 0;
}
int isNumber(char *str)
{
    int i,len,j,num=0;
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(*(str+i)<'0' || *(str+i)>'9')
            return -1;
    }
    for(i=len-1,j=0;i>=0;i--,j++)
    {
        num=num+pow(10,j)*(*(str+i)-'0');
    }
    return num+1;
}

