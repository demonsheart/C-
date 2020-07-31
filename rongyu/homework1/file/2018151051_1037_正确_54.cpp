#include<iostream>
using namespace std;
int main()
{
	int t,i,n,j;
	char ch;
	cin>>t;
	cin.get();
	for(i=1;i<=t;i++)
	{
		cin>>ch;
		if(ch=='C')
		{
			cin>>n;
			char *p=new char[n];
			for(j=0;j<n;j++)
			{
				cin.get();
				cin>>*(p+j);
			}
			char max='0';
			for(j=0;j<n;j++)
			{
				if(*(p+j)>max)
				max=*(p+j);
			}
			cout<<max<<endl;
		}
		else if(ch=='I')
		{
			cin>>n;
			int *p=new int[n];
			for(j=0;j<n;j++)
				cin>>*(p+j);
			int s=0,k;
			for(j=0;j<n;j++)
			{
				s=s+*(p+j);
			}
			k=s/n;
			cout<<k<<endl;
		}
		else if(ch=='F')
		{
			cin>>n;
			float *p=new float[n];
			for(j=0;j<n;j++)
				cin>>*(p+j);
			float min=100;
			for(j=0;j<n;j++)
			{
				if(*(p+j)<min)
					min=*(p+j);
			}
			cout<<min<<endl;
		}
	}
	return 0;
}
