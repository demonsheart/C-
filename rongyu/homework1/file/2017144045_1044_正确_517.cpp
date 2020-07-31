#include <iostream>
using namespace std;
int main()
{
	int t;
	int m,n;
	int i,j,k;
	cin>>t;
	while(t--)
	{
		cin>>m>>n;
	    int *num;
		num=new int[m*n];	
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>num[n*i+j];
			}
		}
		
		int min=num[0];
		int max=num[0];
		for(i=0;i<m*n;i++)
		{
			if(num[i]>max)
			max=num[i];
			if(num[i]<min)
			min=num[i];
		}
		cout<<min<<" "<<max<<endl;
		delete []num;	
	}
}
