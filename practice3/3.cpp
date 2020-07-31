#include<iostream>
#include<string.h>
//#include<stdlib.h>
using namespace std;
void does(char *p, char *q, char *s, int l1, int l2);
int main()
{
int t,l1,l2;
char p1[50],p2[50],p3[50];
char *p = p1, *q = p2, *s = p3;
    cin>>t;
    while (t--)
    {
        cin>>p1>>p2;
        l1 = strlen(p1);
        l2 = strlen(p2);
        does(p,q,s,l1,l2);
        cout<<p3<<endl;
    }
//       system("pause");
}
void does(char *p, char *q, char *s, int l1, int l2)
{
int k1 = 0, k2 = 0,i = l1;
    while (i--)
    {
        if(k2==l2)
        k2 = 0;
        *(s+k1) = *(p+k1)+*(q+k2)-'0';
        if(*(s+k1)>='a' && *(s+k1)<='z' || *(s+k1)>='A' && *(s+k1)<='Z')
        ;
        else
        *(s+k1)-=26; 
        k1++;
        k2++;
    }
}