#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int **num,i,j,m,n;
		cin>>m>>n;
		num=new int *[n];
		for(i=0;i<n;i++)
		{
			num[i]=new int[m];
		}
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>num[i][j];
			}
		}
		int max=**num,min=**num;
		for(i = 0; i <m; i++)
		{
    	   for(j = 0; j < n; j++)
		   {       
    		   if(*(*(num+i)+j) < min)
		 	  	{
					min = *(*(num+i)+j);
				}
				if(*(*(num+i)+j) >max)
		  	 	{
					max = *(*(num+i)+j);
				}
			}
        }
		cout<<min<<" "<<max<<endl;
		for(i=0;i<n;i++)
			delete []num[i];
		delete []num;
	}
	return 0;
}
