#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,i,j; 
		int **num;
		cin>>m>>n;
		num=new int*[m];
		for(i=0;i<m;i++)
			num[i]=new int[n];

		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>num[i][j];
			}
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cout<<num[i][j];
				if(j!=n-1)
					cout<<" ";
			}
			cout<<endl;
		}

		for(i=0;i<m;i++)
			delete []num[i];
		delete []num;
	}
	return 0;
}
