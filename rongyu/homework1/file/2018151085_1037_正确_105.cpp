#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		char ch;
		cin>>ch;
		if(ch=='I')
		{
			int sum=0,p;//p是平均数 
			cin>>n;
			int *a=new int[n];
			for(int i=0;i<n;i++)
				cin>>*(a+i);
			for(int i=0;i<n;i++)
				sum+=*(a+i);
			p=sum/n;
			cout<<p<<endl;
		}
		if(ch=='C')
		{
			char max_char;//max_char是最大字母 
			cin>>n;
			char *b=new char[n];
			for(int i=0;i<n;i++)
				cin>>*(b+i);
			max_char=*(b+0);
			for(int i=0;i<n;i++)
			{
				if(*(b+i)>max_char)
					max_char=*(b+i);
			}
			cout<<max_char<<endl;
		}
		if(ch=='F')
		{
			double min;//min是最小数 
			cin>>n;
			double *c=new double[n];
			for(int i=0;i<n;i++)
				cin>>*(c+i);
			min=*(c+0);
			for(int i=0;i<n;i++)
			{
				if(*(c+i)<min)
					min=*(c+i);
			}
			cout<<min<<endl;
		}
	}
}
