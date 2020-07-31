#include<iostream>
#include<cstring>
#include<cmath>
#include<memory>
#include<cstdlib>
#include<climits>
using namespace std;


int main()
{
	int T;
	int m,n,**a;
	int i,j,temp;
	int min=INT_MAX,max=INT_MIN;
	cin>>T;
	
	while(T--)
	{
		min=INT_MAX;
		max=INT_MIN;
		cin>>m>>n;
		a=(int**)malloc((m)*sizeof(int*));//hang
		
		for(i=0;i<m;i++)
		{
			a[i]=(int*)malloc(n*sizeof(int));
			for(j=0;j<n;j++)
			{
				cin>>*(*a+i*n+j); 
			}
		}
		//cout<<a[0][0];
		/*for(i=1;i<(m*n);i++)
		{
			for(j=0;j<(m*n-i);j++)
			{
				if(*(*a+j)>*(*a+j+1))
				{
					temp=*(*a+j);
					*(*a+j)=*(*a+j+1);
					*(*a+j+1)=temp;
					cout<<*(*a+j+1)<<endl;
				}
			}
		}*/
		for(i=0;i<(m*n);i++)
		{
			
			if(*(*a+i)<min)
				min=*(*a+i);
			if(*(*a+i)>max)
				max=*(*a+i);
		}
		cout<<min<<" "<<max<<endl;
		free(a);
	}
	return 0;
}
 
