#include<iostream>
#include<cstring>
#include<cmath>
#include<memory>
#include<cstdlib>
using namespace std;


int main()
{
	int T;
	int m,n,**a;
	int i,j,temp;
	cin>>T;
	
	while(T--)
	{
		cin>>m>>n;
		a=(int**)malloc((m)*sizeof(int*));
		
		for(i=0;i<m;i++)
		{
			a[i]=(int*)malloc(n*sizeof(int));
			for(j=0;j<n;j++)
			{
				cin>>*(*a+i*n+j); 
			}
		}
		for(i=1;i<(m*n);i++)
		{
			for(j=0;j<(m*n-i);j++)
			{
				if(*(*a+j)>*(*a+j+1))
				{
					temp=*(*a+j);
					*(*a+j)=*(*a+j+1);
					*(*a+j+1)=temp;
				}
			}
		}
		cout<<**a<<" "<<*(*a+m*n-1)<<endl;
		free(a);
	}
	return 0;
}
 
