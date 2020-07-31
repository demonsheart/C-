#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		cin>>m>>n;
		int **p=new int*[m];
		for(int i=0;i<m;i++)
		    p[i]=new int[n];
		for(int i=0;i<m;i++)
		    for(int j=0;j<n;j++)
			    cin>>p[i][j];
		int max=-121434,min=4235435;	    
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(p[i][j]>max)
				   max=p[i][j];
				if(p[i][j]<min)
				   min=p[i][j];   
			}
		}
		cout<<min<<" "<<max<<endl;
		for(int i=0;i<m;i++)
		    delete[] p[i];
	    delete[] p;		    
	}
	return 0;
}
