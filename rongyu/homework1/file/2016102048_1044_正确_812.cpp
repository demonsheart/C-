#include<iostream>
#include<cstring>
#include<cmath>

#include<cstdlib>
#include<climits>
using namespace std;


int main()
{
	int T;
	int m,n,**a;
	int i,j,temp;
	int min=INT_MAX,max=INT_MIN;
	cin>>T;
	
	while(T--)
	{
		min=INT_MAX;
		max=INT_MIN;
		cin>>m>>n;
		a=new int *[m];
		for(i=0;i<m;i++)
		{
			a[i]=new int[n];
		}
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j]; 
			}
		}
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				//cout<<a[i][j]<<" ";
				if(a[i][j]<min)
					min=a[i][j];
				if(a[i][j]>max)
					max=a[i][j];
			}
		}
		cout<<min<<" "<<max<<endl;
		for(i=0;i<m;i++)
			delete []a[i];
		delete []a;
	}
	return 0;
}
 
