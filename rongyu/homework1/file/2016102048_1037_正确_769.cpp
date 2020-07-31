#include <iostream>

using namespace std;

int main( )

{ 
	
	int t,n,sum,aver,t1,j,k;
	char ch,t2;
	int *i;
	float *f;
	char *c;
	cin>>t;
	while(t--)
	{
		cin>>ch>>n;
		sum=0;
		if(ch=='I')
		{
			i=new int[n];
			for(j=0;j<n;j++)
			{
				cin>>*(i+j);
				sum+=*(i+j);
			}
			//cout<<sum<<endl;
			aver=sum/n;
			cout<<aver<<endl;
			delete []i;
		}
		else if(ch=='F')
		{
			f=new float[n];
			for(j=0;j<n;j++)
			{
				cin>>*(f+j);
			}
			for(j=1;j<n;j++)
			{
				for(k=0;k<n-j;k++)
				{
					if(*(f+k)>*(f+k+1))
					{
						t1=*(f+k);
						*(f+k)=*(f+k+1);
						*(f+k+1)=t1;
					}
				}
			}
			cout<<*f<<endl;
			delete []f;
		}
		else if(ch=='C')
		{
			c=new char[n];
			for(j=0;j<n;j++)
			{
				cin>>*(c+j);
			}
			for(j=1;j<n;j++)
			{
				for(k=0;k<n-j;k++)
				{
					if(*(c+k)<*(c+k+1))
					{
						t2=*(c+k);
						*(c+k)=*(c+k+1);
						*(c+k+1)=t2;
					}
				}
			}
			cout<<*c<<endl;
			delete []c;
		}
		
		
		
	}

  	
	return 0;
}

