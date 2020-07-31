#include<iostream>
using namespace std;
int main()
{
	int t,n,i;
	char type;
	cin>>t;
	while(t--)
	{
		cin>>type;
		cin>>n;
		if(type=='I')
		{
			int *p=new int[n],s=0;
			for(i=0;i<n;i++)
			{
				cin>>p[i];
				s+=p[i];
			}
			cout<<s/n<<endl;
		}
		if(type=='C')
		{
			char *p=new char[n],max='A';
			for(i=0;i<n;i++)
			{
				cin>>p[i];
				if(p[i]>max)
					max=p[i];
			}
			cout<<max<<endl;
		}
		if(type=='F')
		{
			float *p=new float[n],min=10000;
			for(i=0;i<n;i++)
			{
				cin>>p[i];
				if(p[i]<min)
					min=p[i];
			}
			cout<<min<<endl;
		}
	}
	return 0;
}

