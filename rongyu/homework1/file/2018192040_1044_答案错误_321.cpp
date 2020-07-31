#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,m,i,j;
		cin>>n>>m;
		int **num;
		num=new int*[n];
		for(i=0;i<n;i++)
			num[i]=new int[m];
		int Min=num[0][0],Max=num[0][0];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				cin>>num[i][j];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				if(num[i][j]<Min)
					Min=num[i][j];
		Max=num[0][0];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				if(num[i][j]>Max)
					Max=num[i][j];
		cout<<Min<<' '<<Max<<endl;
		for(i=0;i<n;i++)
			delete []num[i];
		delete []num;
	}
	return 0;
}
