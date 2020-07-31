#include<iostream>
using namespace std;

int main()
{
	int i,j,t,n;
	cin>>t;
	for(i=0;i<t;i++)
	{
		char Type;
		cin>>Type;
		if(Type=='I')
		{
			int *p;
			int sum=0;
			cin>>n;	
			p=new int [n];
			for(j=0;j<n;j++)
			{
				cin>>*(p+j);
				sum+=(*(p+j));
			}
			cout<<(sum/n)<<endl;
			delete []p;
		}
		if(Type=='C')
		{
			char *p;
			char max;
			cin>>n;
			p=new char [n];
			for(j=0;j<n;j++)
				cin>>*(p+j);
			max=*p;
			for(j=0;j<n;j++)
			{
				if(*(p+j)>max)
					max=*(p+j);
			}
			cout<<max<<endl;
			delete []p;
		}
		if(Type=='F')
		{
			float *p;
			float min;
			cin>>n;
			p=new float [n];
			for(j=0;j<n;j++)
				cin>>*(p+j);
			min=*p;
			for(j=0;j<n;j++)
			{
				if(*(p+j)<min)
					min=*(p+j);
			}
			cout<<min<<endl;
			delete []p;
		}
	}
	return 0;
}
