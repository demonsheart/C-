#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	int T,m,n,i,min,max,j;
    cin>>T;
    int **p;
    while(T--) 
    {
    	cin>>m>>n;
    	p=new int*[m];
    	for(i=0;i<m;i++)
    	{
    		p[i]=new int[n];
		}
		min=100000;
		max=-10000;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>p[i][j];
				if(p[i][j]>max)
				max=p[i][j];
				if(p[i][j]<min)
				min=p[i][j];
			}
		}
		cout<<min<<' '<<max<<endl;
	}
	for(i=0;i<m;i++)
	delete p[i];
	delete []p;
}  
