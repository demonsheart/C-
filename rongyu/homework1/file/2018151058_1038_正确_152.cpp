#include<iostream>
using namespace std;
int main()
{
	int t,i;
	char s1[10],s2[10],s3[10];
	char *p1=s1,*p2=s2,*p3=s3;
	int a,b,c,d,e,f;
	cin>>t;
	while(t--)
	{
		cin>>s1>>s2>>s3;
		cin>>a>>b>>c>>d>>e>>f;
		char *s=new char[b-a+d-c+f-e+3];
		char *p=s;
		int x=0;
		for(i=a-1;i<b;i++)
		{
			*(p+x)=*(p1+i);
			x++;
		}
		for(i=c-1;i<d;i++)
		{
			*(p+x)=*(p2+i);
			x++;
		}
		for(i=e-1;i<f;i++)
		{
			*(p+x)=*(p3+i);
			x++;
		}
		*(p+x)='\0';
		cout<<s<<endl;
		
	}
	return 0;
}
