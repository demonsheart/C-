#include<iostream>
using namespace std;
int main()
{
	int t,m,n;
	int i,j;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		int a[m][n];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>a[i][j];
		int max,min;
		max=a[0][0];
		min=a[0][0];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			{
				if(max<a[i][j])
				max=a[i][j];
				if(min>a[i][j])
				min=a[i][j]; 
			}
		cout<<min<<" "<<max<<endl;
	}
}
