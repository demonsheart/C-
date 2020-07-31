#include <iostream>
using namespace std;
int snake(int **p,int n); 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,**p,i,j;
		cin>>n;
		int** a=new int *[n];
		for(i=0;i<n;i++)
		{
			a[i]=new int [n];
		}
			p=a;
		snake(p,n);
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{
				cout<<a[i][j]<<" ";
			}
			cout<<a[i][n-1]<<endl;
		}
		cout<<endl;
		for(i=0;i<n;i++)
		{
		delete [] a[i];
		}
		delete [] a;
	}
}

int snake(int **p,int n)
{
	int i,j,num=1;	
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			{
				p[i][j]=0;
			}
	i=0;
	j=0;
	p[0][0]=1;		
	while(num<n*n)
	{
		while(j+1<n&&p[i][j+1]==0)
			p[i][++j]=++num;
		while(i+1<n&&p[i+1][j]==0)
			p[++i][j]=++num;
		while(j-1>=-1&&p[i][j-1]==0)
			p[i][--j]=++num;
		while(i-1>0&&p[i-1][j]==0)
			p[--i][j]=++num;					
	}
}
