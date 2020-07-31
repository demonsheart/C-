#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,m,**num,i,j;
		cin>>n>>m;
		num=new int*[n];
		for(i=0;i<n;i++)
		{
			num[i]=new int[m];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>num[i][j];
			}
		}
		int max=-999,min=999;
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(num[i][j]>max)
				{
					max=num[i][j];
				}
				else if(num[i][j]<min)
				{
					min=num[i][j];
				}
			}
		}
		cout<<min<<" "<<max<<endl;
		for(i=0;i<n;i++)
		{
			delete []num[i];
		}
		delete []num;
	}
	return 0;
}
