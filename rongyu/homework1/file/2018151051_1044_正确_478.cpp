#include<iostream>
using namespace std;
int main()
{
	int t,i,k,j;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		int m,n;
		cin>>m;
		cin>>n;
		int **num;
		num=new int*[m];
		for(j=0;j<m;j++)
			num[j]=new int[n];
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			cin>>num[j][k];
		}
		int max=-100,min=100;
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				if(num[j][k]>max)
				max=num[j][k];
			}
		}
		for(j=0;j<m;j++)
		{
			for(k=0;k<n;k++)
			{
				if(num[j][k]<min)
				min=num[j][k];
			}
		}
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}

