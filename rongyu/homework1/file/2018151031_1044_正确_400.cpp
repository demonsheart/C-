#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int **p;
		p=new int*[m];
		for(int i=0;i<m;i++)
			p[i]=new int[n];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				cin>>p[i][j];
		int min=p[0][0],max=p[0][0];
		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
			{
				if(p[i][j]<min)
					min=p[i][j];
				if(p[i][j]>max)
					max=p[i][j];
			}
		cout<<min<<' '<<max<<endl;
	}
	
	return 0;
}
