#include <bits/stdc++.h>
using namespace std;
int main()
{
	int **mat;
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		int m,n,maxele,minele;
		cin>>m>>n;
		mat=new int*[m];
		for (int j=0;j<m;j++)
		{
			mat[j]=new int[n];
		}
		for(int j=0;j<m;j++)
		{
			for (int k=0;k<n;k++)
			{
				cin>>mat[j][k];
			}
		}
		maxele=mat[0][0];
		minele=mat[0][0];
		for(int j=0;j<m;j++)
		{
			for (int k=0;k<n;k++)
			{
				if(mat[j][k]>maxele)
					maxele=mat[j][k];
				else if(mat[j][k]<minele)
					minele=mat[j][k];	
			}
		}
		cout<<minele<<" "<<maxele<<endl;
	}
}
