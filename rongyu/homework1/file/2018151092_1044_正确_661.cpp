#include<iostream>
using namespace std;

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		int **num;
		int m,n;
		int i,j;
		int big,small;

		cin>>n>>m;
		
		num=new int*[n];

		for(i=0;i<n;i++)
		{
			num[i]=new int[m];
		}

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>*(*(num+i)+j);
			}
		}

		big=small=*(*(num));

		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(big<*(*(num+i)+j))
				{
					big=*(*(num+i)+j);
				}
				if(small>*(*(num+i)+j))
				{
					small=*(*(num+i)+j);
				}
			}
		}

		cout<<small<<' '<<big<<endl;
	}
	return 0;
}
		
		
