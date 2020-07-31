#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch;
		int n;	
		cin>>ch;
		if(ch=='I')
		{
			int sum=0,h=0;
			cin>>n;
			int *p = new int[n];
			for(int i=0;i<n;i++)
				cin>>*(p+i);
			for(int i=0;i<n;i++)
				sum+=*(p+i);
			h=sum/n;
			cout<<h<<endl;
		}
		if(ch=='C')
		{
			char r;
			cin>>n;
			char* b = new char[n];
			for(int i=0;i<n;i++)
				cin>>*(b+i);
			r=*(b+0);
			for(int i=0;i<n;i++)
			{
				if(r<*(b+i))
					r=*(b+i);
			}
			cout<<r<<endl;
		}
		if(ch=='F')
		{
			float a;
			cin>>n;
			float* q = new float[n];
			for(int i=0;i<n;i++)
			{
				cin>>*(q+i);
			}
			a=*(q+0);
			for(int i=0;i<n;i++)
			{
				if(a>*(q+i))
				{
					a=*(q+i);
				}
			}
			cout<<a<<endl;
		}
	}
	return 0;
}
