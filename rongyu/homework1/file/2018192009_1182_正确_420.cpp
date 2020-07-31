#include <iostream>
#include <cstring>
using namespace std;
char *strAdd(char *s1, char *s2);
int main()
{
    int t;
    char a[100],b[100];
    char *s1=a;
    char *s2=b;
    char *s;
    cin>>t;
    while(t--)
    {
        cin>>s1;
        cin>>s2;
        s=strAdd(s1,s2);
        cout<<s1<<' '<<s2<<' '<<s<<endl;
    }
    return 0;
}
char *strAdd(char *s1, char *s2)
{
    int n,m,i;
    n=strlen(s1);
    m=strlen(s2);
    char *s;
    s=new char[n+m];
    for(i=0;i<n;i++)
        *(s+i)=*(s1+i);
    for(i=n;i<n+m;i++)
        *(s+i)=*(s2+i-n);
    return s;
}

