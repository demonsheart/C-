#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch;
		cin>>ch;
		if(ch=='I')
		{
			int n;
			cin>>n;
			int *p=new int[n];
			for(int i=0;i<n;i++)
			cin>>p[i];
			int sum=0;
			for(int i=0;i<n;i++)
			sum+=p[i];
			sum/=n;
			cout<<sum<<endl;
		}
		if(ch=='C')
		{
			int n;
			cin>>n;
			char *p=new char[n+1];
			for(int i=0;i<n;i++)
			cin>>p[i];
			char ch=p[0];
			for(int i=1;i<n;i++)
			if(ch<p[i])
			ch=p[i];
			cout<<ch<<endl;
		}
		if(ch=='F')
		{
			int n;
			cin>>n;
			float *p=new float[n];
			for(int i=0;i<n;i++)
			cin>>p[i];
			float ch=p[0];
			for(int i=1;i<n;i++)
			if(ch>p[i])
			ch=p[i];
			cout<<ch<<endl;
		}
	}
	return 0;
}
