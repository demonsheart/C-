#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int **a,n,m;
		cin>>n>>m;
		a=new int* [n];
		for(int i=0;i<n;i++)
		{
			a[i]=new int[m];
		}
		int min=999999,max=-999999;
		int j,k;
		for(j=0;j<n;j++)
		{
			for(k=0;k<m;k++)
			{
				cin>>a[j][k];
				if(max<a[j][k])
				{
					max=a[j][k];
				}
				if(min>a[j][k])
				{
					min=a[j][k];
				}
			}
		}
		cout<<min<<" "<<max<<endl;
		for(int i=0;i<n;i++)
		{
			delete []a[i];
		}
		delete []a;
	}
	
		
		
	}

