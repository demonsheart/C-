#include<iostream>
#include<cstring>
using namespace std;
char *strAdd(char *s1, char *s2)
{
    static char a[200];
    int i,j,m,n;
    m=strlen(s1);
    n=strlen(s2);
    for(i=0,j=0;i<m;i++,j++)
        a[j]=s1[i];
    for(i=0;i<n;i++,j++)
        a[j]=s2[i];
    a[j]='\0';
    return a;
}
int main()
{
    int t;
    cin>>t;
    cin.ignore(10,'\n');
    while(t--)
    {
        char s1[100]={'\0'};
        char s2[100]={'\0'};
        cin>>s1;
        cin>>s2;
        char *p;
        p=strAdd(s1,s2);
        cout<<s1<<" "<<s2<<" "<<p<<endl;
    }
}

