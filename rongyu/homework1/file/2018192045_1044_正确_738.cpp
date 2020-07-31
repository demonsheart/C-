#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	int m,n,**num,i,j,max,min;
	while(t--)
	{
		cin>>m>>n;
		num=new int *[m];
		for(i=0;i<m;i++)
			num[i]=new int[n];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
				cin>>num[i][j];
		}
		min=max=num[0][0];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				if(num[i][j]>max)
					max=num[i][j];
				if(num[i][j]<min)
					min=num[i][j];
			}
		}
		cout<<min<<" "<<max<<endl;

    	for(int i=0;i<m;i++)
	    	delete []num[i];
	   delete []num;
    }
	return 0;
}
