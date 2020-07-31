#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int **num;
		num=new int*[m];
		for(int i=0;i<m;i++)
		{
			num[i]=new int[n];
			for(int j=0;j<n;j++)
				cin>>num[i][j];
		}
		int min=num[0][0];
		int max=num[0][0];
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(num[i][j]<min)
					min=num[i][j];
				if(num[i][j]>max)
					max=num[i][j];
			}
		}
		cout<<min<<" "<<max<<endl;
	}
}
	
