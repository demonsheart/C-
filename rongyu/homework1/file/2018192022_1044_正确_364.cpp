#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define N 200
int main(int argc, char** argv) 
{
	int T;
	cin>>T;
	cin.ignore(1,'\n');
	while(T--)
	{ 
		int n,m,i,j;
		cin>>n>>m;
		int **p;
		p=new int *[n];
		for(i=0;i<n;i++)
			p[i]=new int [m];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
				cin>>p[i][j];
		int min,max;
		min=p[0][0],max=p[0][0];
		for(i=0;i<n;i++)
			for(j=0;j<m;j++)
			{
				if(p[i][j]<min)
					min=p[i][j];
				if(p[i][j]>max)
					max=p[i][j];
			}
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}
