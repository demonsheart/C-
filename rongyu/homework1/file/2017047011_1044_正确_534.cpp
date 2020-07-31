#include<iostream>
#include<cstring>
#define N 1000
using namespace std;
int main()
{
	int t,i,j,m,n,max,min;
	
	int *p;
	cin>>t;
	
	while(t--)
	{
		cin>>m>>n;
		p=new int[m*n];
		
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>p[n*i+j];
		
		min=p[0];max=p[0];
		
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				if(max<p[n*i+j])
					max=p[n*i+j];
				if(p[n*i+j]<min)
					min=p[n*i+j];
			}
		cout<<min<<' '<<max<<endl;	
			
	}
}
