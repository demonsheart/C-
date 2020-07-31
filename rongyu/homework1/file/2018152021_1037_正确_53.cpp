#include<iostream>
using namespace std;
int main()
{
	int t,n,i;
	char ch;
	cin>>t;
	while(t--)
	{
		cin>>ch;
		cin>>n;
		if(ch=='I')
		{
			int a[n];
			for(i=0;i<n;i++)
				cin>>a[i];
			float x=0;
			for(i=0;i<n;i++)
				x=x+a[i];
			x=x/n;	
			cout<<x<<endl;	
		}
		else if(ch=='C')
		{
			char a[n];
			for(i=0;i<n;i++)
				cin>>a[i];
			char max=a[0];
			for(i=0;i<n;i++)
				if(a[i]>max)
					max=a[i];
			cout<<max<<endl;
		}
		else if(ch=='F')
		{
			double a[n];
			for(i=0;i<n;i++)
				cin>>a[i];
			double min=a[0];
			for(i=0;i<n;i++)
				if(a[i]<min)
					min=a[i];
			cout<<min<<endl;
		}
	}
	return 0;	
}
