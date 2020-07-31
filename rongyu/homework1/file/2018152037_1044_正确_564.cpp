#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		int i,j;
		int z=0,k=0,p=0,q=0;
		cin>>m>>n;
		
		int **nu=new int*[m];
		for(i=0;i<m;i++)
			nu[i]=new int[n];
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>nu[i][j];
				if(nu[z][k]<nu[i][j])
				{
					z=i;
					k=j;
				}
				if(nu[p][q]>nu[i][j])
				{
					p=i;
					q=j;
				}
			}
		}
		cout<<nu[p][q]<<" "<<nu[z][k]<<endl;
	}
	return 0;
}
