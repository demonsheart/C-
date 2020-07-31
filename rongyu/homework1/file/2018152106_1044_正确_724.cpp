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
		num=new int *[m];
		for(i=0;i<m;i++)
		{
			num[i]=new int[n];
		}
		
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>num[i][j];
			}
		}
		int max,min;
		max=min=num[0][0];
 	  	for(i=0;i<m;++i)
   		    for(j=0;j<n;++j)
			{
 		 	  if(max<num[i][j])
 				    max=num[i][j];
 	 		  if(min>num[i][j])
 		   		    min=num[i][j];     
  	 		 }       
		cout<<min<<" "<<max<<endl;
		for(i=0;i<m;i++)
			delete []num[i];
		delete []num;
	}
	return 0;
}
