#include<iostream>
using namespace std;
int main()
{
	int t,m,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
		int **p=new int*[m];
		for(i=0;i<m;i++)
			p[i]=new int[n];
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				cin>>p[i][j];
			
			int *min=&p[0][0],*max=&p[0][0];
			for(i=0;i<m;i++)
			{
				for(j=0;j<n;j++)
				{
					if(p[i][j]>*max)
						max=&p[i][j];
					if(p[i][j]<*min)
						min=&p[i][j];
				}
			}
			cout<<*min<<' '<<*max<<endl;
	}
	return 0;
}
