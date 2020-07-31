#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[100],s2[100],s3[100],*p1,*p2,*p3;
		int a,b,c,d,e,f,n,i,j,k;
		cin>>s1>>s2>>s3;
		cin>>a>>b>>c>>d>>e>>f;
		p1=s1;
		p2=s2;
		p3=s3;
		n=(b-a)+(d-c)+(f-e)+3;
		char *p4=new char[n];
		for(i=0,j=a-1;i<b;i++,j++)
		{
			*(p4+i)=*(p1+j);
		}
		for(i=b-a+1,j=c-1;j<d;i++,j++)
		{
			*(p4+i)=*(p2+j);
		}
		for(i=n-(f-e+1),j=e-1;j<f;i++,j++)
		{
			*(p4+i)=*(p3+j);
		}
		for(i=0;i<n;i++)
		{
			cout<<*(p4+i);
		}
		cout<<endl;
	}
	return 0;
}
