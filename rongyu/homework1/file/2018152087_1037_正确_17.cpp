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
				cin>>*(p+i);
			int ans=0;
			for(int i=0;i<n;i++)
				ans+=*(p+i);
			cout<<ans/n<<endl;
		}
		else if(ch=='C')
		{
			int n;
			cin>>n;
			char *p=new char[n];
			for(int i=0;i<n;i++)
				cin>>*(p+i);
			char ans=*p;
			for(int i=0;i<n;i++)
			{
				if(ans<*(p+i))
					ans=*(p+i);
			}
			cout<<ans<<endl;
		}
		else if(ch=='F')
		{
			int n;
			cin>>n;
			double *p=new double[n];
			for(int i=0;i<n;i++)
				cin>>*(p+i);
			double ans=*p;
			for(int i=0;i<n;i++)
			{
				if(ans>*(p+i))
					ans=*(p+i);
			}
			cout<<ans<<endl;
		}
	}
	return 0;
}
