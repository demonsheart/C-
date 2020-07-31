#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int i,k=0;
        char a[11],b[11],c[11];
        cin>>a;
        cin>>b;
        cin>>c;
        int a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        int A=a2-a1,B=b2-b1,C=c2-c1;
        char *p=new char[A+B+C+4];
        char *pa=&a[0],*pb=&b[0],*pc=&c[0];
        for(i=a1-1;i<a2;i++,k++)
        	p[k]=*(pa+i);
        for(i=b1-1;i<b2;i++,k++)
        	p[k]=*(pb+i);
        for(i=c1-1;i<c2;i++,k++)
        	p[k]=*(pc+i);
        p[A+B+C+3]='\0';
        cout<<p<<endl;
    }
    return 0;
}
