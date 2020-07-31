#include<iostream>
#include<cstring>
using namespace std;
char *strAdd(char *s1,char *s2)
{
    char c[100],*s3;
    strcpy(c,s1);
    strcat(c,s2);
    s3=c;
    cout<<s1<<" "<<s2<<" "<<s3<<endl;
    return 0;
}
int main()
{
    char a[100],b[100],*s1,*s2;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>a>>b;
        char *s1,*s2;
        s1=a;
        s2=b;
        strAdd(s1,s2);
    }
    return 0;
}
