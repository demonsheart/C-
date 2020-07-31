#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n;
		int max,min;
		cin>>m>>n;
		int **p=new int*[m];//定义二位指针 
		for(int i=0;i<m;i++)
			p[i]=new int[n];
		
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)	
				cin>>*(*(p+i)+j);
		}
		
		min=*(*(p+0)+0);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)	
			{
				if(min>*(*(p+i)+j))
					min=*(*(p+i)+j);
			}
		}
		
		max=*(*(p+0)+0);
		for(int i=0;i<m;i++)
		{
			for(int j=0;j<n;j++)	
			{
				if(max<*(*(p+i)+j))
					max=*(*(p+i)+j);
			}
		}
		cout<<min<<" "<<max<<endl;
	} 
}
