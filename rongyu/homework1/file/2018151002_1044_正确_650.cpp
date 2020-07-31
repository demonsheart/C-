#include<iostream>
using namespace std;
int c(char *S,char *T);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,i=0,j=0;
		cin>>m>>n;
		int **a;
		a=new int*[m];
		for(i=0;i<m;i++)
		{
			a[i]=new int[n];
		}
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		int p=a[0][0],q=a[0][0];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]<p)
					p=a[i][j];			
				if(a[i][j]>q)
					q=a[i][j];
			}
		}
		cout<<p<<' '<<q<<endl;
	}
	return 0;
}
