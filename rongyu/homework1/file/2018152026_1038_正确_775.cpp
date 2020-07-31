#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[20],s2[20],s3[20];
        char ss1[20],ss2[20],ss3[20];
        cin>>s1>>s2>>s3;

        int a1,b1,a2,b2,a3,b3;
        int n1,n2,n3;
        cin>>a1>>b1>>a2>>b2>>a3>>b3;
        n1=b1-a1+1;
        n2=b2-a2+1;
        n3=b3-a3+1;

        int i,j;
        for(i=a1-1,j=0;i<b1;i++,j++)
            ss1[j]=s1[i];
        ss1[j]='\0';
        for(i=a2-1,j=0;i<b2;i++,j++)
            ss2[j]=s2[i];
        ss2[j]='\0';
        for(i=a3-1,j=0;i<b3;i++,j++)
            ss3[j]=s3[i];
        ss3[j]='\0';

        char *p,*pp,*ppp;
        p=new char[n1+1];
        p=&ss1[0];
        pp=new char[n2+1];
        pp=&ss2[0];
        ppp=new char[n3+1];
        ppp=&ss3[0];
        strcat(p,pp);
        strcat(p,ppp);
        cout<<p<<endl;
    }
    return 0;
}
