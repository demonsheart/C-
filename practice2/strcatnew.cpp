#include<iostream>
#include<stdlib.h>
using namespace std;
void does(char p1[],char p2[],char p3[],char*p,int a1,int a2,int b1,int b2,int c1,int c2,int n);
int main()
{
int t,a,b,c,d,e,f,n;
char p1[11],p2[11],p3[11],*p;
    cin>>t;
    while (t--)
    {
       cin>>p1>>p2>>p3>>a>>b>>c>>d>>e>>f;
       n = b + d + f - a - c - e + 4;
    char *p = new char(n);
       does(p1, p2, p3, p, a, b, c, d, e, f, n);
       cout<<p<<endl;
       delete[] p;
    }
    system("pause");
}
void does(char p1[],char p2[],char p3[],char*p,int a1,int a2,int b1,int b2,int c1,int c2,int n)
{
 int i,j,k;
    for(i=0,j=a1-1; i<a2-a1+1; ++i,++j)
    {
        *(p+i) = *(p1+j);
    }
    k = i;
    for(i=k,j=b1-1; i<b2-b1+1+k; ++i,++j)
    {
        *(p+i) = *(p2+j);
    }
    k = i;
    for(i=k,j=c1-1; i<c2-c1+1+k; ++i,++j)
    {
        *(p+i) = *(p3+j);
    }
     *(p+i) = '\0';
}
