#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstring>
using namespace std;

int pow(int n,int m)
{
    int res=1;
    for (int i=0;i<m;i++)
        res*=n;
    return res;
}

int isNumber(char *p,int l)
{
    int sum=0;
    for (int i=0;i<l;i++)
    {
        if (*(p+i)<='9'&&*(p+i)>='0')
            sum+=(*(p+i)-'0')*pow(10,l-i-1);
        else return -1;
    }
    return sum;
}

int main()
{
    int t;
    cin >>t;
    cin.ignore(100,'\n');
    char s[100];
    while (t--)
    {
        gets(s);
        int l=strlen(s);
        cout << isNumber(s,l) << endl;
    }
    return 0;
}
