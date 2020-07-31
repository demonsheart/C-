#include<iostream>
using namespace std;

int min(float s[],int n)
{
	int i;
	float min=s[0];
	for(i=1;i<n;i++)
	{
		if(s[i]<min)
		{
		   swap(s[i],min);
		}
	}
	return min;
}
int max(char s[],int n)
{
	int i;
	char max=s[0];
	for(i=1;i<n;i++)
	{
		if(s[i]>max)
		{
			swap(max,s[i]);
		}
	}
	return max;
}
int avg(int s[],int n)
{
	int a,sum=0,i;
	for(i=0;i<n;i++)
	{
		sum+=s[i];
	}
	a=sum/n;
	return a;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch;
		int n,i;
		cin>>ch>>n;
		if(ch=='I')
		{
			int *p=new int[n];
			for(i=0;i<n;i++)
				cin>>p[i];
			cout<<avg(p,n)<<endl;
		}
		if(ch=='C')
		{
			char *p=new char[n],c;
			for(i=0;i<n;i++)
				cin>>p[i];
			c=max(p,n);
			cout<<c<<endl;
		}
		if(ch=='F')
		{
			float *p=new float[n],f;
			for(i=0;i<n;i++)
				cin>>p[i];
		    f=min(p,n);
			cout<<f<<endl;
		}
	}
	return 0;
}


