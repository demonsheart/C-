#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,i,j,min,max;
		cin>>m>>n;
		int **num;
		num=new int*[n];
		for(i=0;i<n;i++)
		   num[i]=new int[m];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>num[i][j];
			}
		}
		min=num[0][0];
		max=num[0][0];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(*(*(num+i)+j)<min)
				min=num[i][j];
				if(*(*(num+i)+j)>max)
				max=num[i][j];
			}
		}
		cout<<min<<" "<<max<<endl; 
	}
	return 0;
} 
