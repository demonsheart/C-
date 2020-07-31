#include <iostream>
using namespace std;
float ave(float* p,int n)
{
	float s=0;
	for(int i=0;i<n;i++)
		s+=p[i];
	return s/n;
}

int main()
{
	
	int n;
	char m;
	
	cin>>n;
	while(n--)
	{
		cin>>m;
		
		if(m=='I')
		{
			
			int n,i;
			cin>> n;
			float *p;
			p = new float[n];
			for( i=0 ; i<n ; ++i )
				cin>>p[i];
			cout<<ave(p,n)<<endl;
			
			delete []p;
			
		}
		
		
		else if(m=='F')
		{
			
			float *b;
			int t,i;
			float min;
			b= new float(t);
			cin>>t;
			for( i=0;i<t;i++)
				cin>>b[i];
			
			min=b[0];
			
			for(i=0;i<t;i++)
			{
				if(min>b[i])
					min=b[i];
			}
			
			cout<<min<<endl;
			delete []b;
			
		}
		else if(m=='C')
		{
			char *c;int t,i;
			c= new char(t);
			char a;
			cin>>t;
			
			for( i=0;i<t;i++)
				cin>>c[i];
			
			a=c[0];
			for(i=0;i<t;i++)
			{
				if(a<c[i])
					a=c[i];
			}
			
			cout<<a<<endl;
			
			delete []c;
			
		}
		
		else
			
			cout<<" INPUT ERROR !!!"<<endl;
		
	}
	return 0;
	
}
