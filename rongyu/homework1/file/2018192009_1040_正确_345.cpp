#include <iostream>
#include <cstring>
using namespace std;
int isNumber(char *ch,int n);
int powo(int j);
int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        char p[100];
        char *ch;
        ch=p;
        cin>>ch;
        n=strlen(p);
        int m=isNumber(ch,n);
        cout<<m<<endl;
    }
    return 0;
}
int isNumber(char *ch,int n)
{
    int i=0;
    int j=0;
    int num=0;
    for(i=n-1;i>=0;i--)
    {
        if(*(ch+i)<='9'&&*(ch+i)>='0')
        {
            num+=(*(ch+i)-'0')*powo(j);
            j++;
        }
        else
            return(-1);
    }
    return num;
}
int powo(int j)
{
    int m=1;
    for(int i=0;i<j;i++)
        m=m*10;
    return m;
}

