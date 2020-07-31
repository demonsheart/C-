#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d,e,f,j=0;
		char str1[10],str2[10],str3[10],str[10]={0};
		char *c1,*c2,*c3,*c4;
		cin>>str1>>str2>>str3;
		c1=str1;
		c2=str2;
		c3=str3;
		c4=str;
		cin>>a>>b>>c>>d>>e>>f;
		for(int i=(a-1);i<b;i++)
		{
			*(c4+j++)=*(c1+i);
		}
		for(int i=(c-1);i<d;i++)
		{
			*(c4+j++)=*(c2+i);
		}
		for(int i=(e-1);i<f;i++)
		{
			*(c4+j++)=*(c3+i);
		}
		for(int i=0;i<j;i++)
			cout<<*(c4+i);
		cout<<endl;
	}
	return 0;
}
