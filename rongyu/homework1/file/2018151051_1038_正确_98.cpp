#include<iostream>
using namespace std;
int main()
{
	int n,i,j;
	cin>>n;
	for(j=1;j<=n;j++)
	{
		char ch1[100],ch2[100],ch3[100];
		cin>>ch1;
		cin>>ch2;
		cin>>ch3;
		int a,b,c,d,e,f;
		cin>>a;
		cin>>b;
		cin>>c;
		cin>>d;
		cin>>e;
		cin>>f;
		int len;
		len=b-a+1+d-c+1+f-e+1;
		char *p=new char[len];
		int k=0;
		for(i=a-1;i<b;i++)
		{
			*(p+k)=ch1[i];
			k++;
		}
		for(i=c-1;i<d;i++)
		{
			*(p+k)=ch2[i];
			k++;
		}
		for(i=e-1;i<f;i++)
		{
			*(p+k)=ch3[i];
			k++;
		}
		cout<<p<<endl;
	}
	return 0;
}
