#include<iostream>
#include<string.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    cin.get();
    while(t--)
    {
        char str1[100],str2[100],str3[100];
        char *p1=str1,*p2=str2,*p3=str3;
        cin>>str1>>str2>>str3;
        int n1,m1,n2,m2,n3,m3,n,m;
        cin>>n1>>m1>>n2>>m2>>n3>>m3;
        n=m1-n1+m2-n2+m3-n3+3;
        //cout<<str1<<endl<<str2<<endl<<str3<<endl;
        char *p=new char[n+1];
        int i,j=0;
        for(i=n1-1;i<=m1-1;i++,j++)
            *(p+j)=*(p1+i);
        for(i=n2-1;i<=m2-1;i++,j++)
            *(p+j)=*(p2+i);
        for(i=n3-1;i<=m3-1;i++,j++)
            *(p+j)=*(p3+i);
        for(i=0;i<=n-1;i++)
            cout<<*(p+i);
        cout<<endl;
    }
    return 0;

}

