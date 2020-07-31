#include<iostream>
using namespace std;
int main ()
{
	char ch,M;
	float q;
    int t,n,m,s,i;
    cin>>t;
    while(t--)
    {
    	cin>>ch>>n;
    	if(ch=='I')
    	{
    		int *p=new int[n];
   	    	for(i=0;i<=n-1;i++)
         	{
     	     	cin>>*(p+i);
		    }
    		for(i=0,s=0;i<=n-1;i++)
    		s=s+*(p+i);
    		m=s/n;
    		cout<<m<<endl;
    		delete []p;
    		
		}
		if(ch=='C')
		{
			char *ip1=new char[n];
	    	for(i=0;i<=n-1;i++)
         	{
    		  cin>>*(ip1+i);
		    }
			for(i=0,M='A';i<=n-1;i++)
			{
				if(*(ip1+i)>M)
				M=*(ip1+i);
				
			}
			cout<<M<<endl;
			delete []ip1;
			
		}
		if(ch=='F')
		{
			float *ip2=new float[n];
	     	for(i=0;i<=n-1;i++)
        	{
    		   cin>>*(ip2+i);
		    }
			for(i=0,q=999;i<=n-1;i++)
			{
				if(*(ip2+i)<q)
				q=*(ip2+i);
				
			}
			cout<<q<<endl;
			delete []ip2;
		}
		
		
	}
	
 } 
