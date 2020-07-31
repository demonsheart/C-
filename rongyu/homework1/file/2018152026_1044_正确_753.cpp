#include <iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int m,n;
    	cin>>m;
    	cin>>n;
    	int i,j;
    	int **p=NULL;
    	p=new int *[m];
    	for(i=0;i<m;i++)
    	{
    		p[i]=new int [n];
		}
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
			cin>>p[i][j];
		int min=p[0][0];
		int max=min;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(min>p[i][j])
					min=p[i][j];

				if(max<p[i][j])
					max=p[i][j];
			}
		}
		cout<<min<<" "<<max<<endl;
   	}
    return 0;
}

