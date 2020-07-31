#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,max,min;
		cin>>m>>n;
		int **p;
		p=new int*[m];
		int i,j;
		for(i=0;i<m;i++)
		*(p+i)=new int[n];
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>*(*(p+i)+j);
				if(i==0&&j==0)
				{
					max=*(*(p+i)+j);
					min=*(*(p+i)+j);
				}
				else
				{
					if(*(*(p+i)+j)>max)
					max=*(*(p+i)+j);
					if(*(*(p+i)+j)<min)
					min=*(*(p+i)+j);
				}
			}
		}
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}
