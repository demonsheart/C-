#include <iostream>
using namespace std;
int main()
{
	int t;
	char c;
	int n;
	int i;
	cin>>t;
	
	while(t--)
	{
		cin>>c>>n;
		if(c=='F')
		{
			float min;
		    float *p=new float[n];
		    for(i=0;i<n;i++)
		    {
			    cin>>p[i];
	    	}
	    	min=p[0];
	    	for(i=0;i<n;i++)
		    {
			    if(p[i]<min)
			    {
			    	min=p[i];
				}
	    	}
	    	cout<<min<<endl;
	    	delete[] p;
	    }
	    else if(c=='C')
	    {
	    	char max;
	    	char *x=new char[n];
	    	for(i=0;i<n;i++)
		    {
			    cin>>x[i];
	    	}
	    	max=x[0];
	    	for(i=0;i<n;i++)
		    {
			    if(x[i]>max)
			    {
			    	max=x[i];
				}
	    	}
	    	cout<<max<<endl;
	    	delete[] x;
		}
		else if(c=='I')
	    {
	    	int pingjun=0;
	    	int *y=new int[n];
	    	for(i=0;i<n;i++)
		    {
			    cin>>y[i];
			    pingjun=pingjun+y[i];
	    	}
	    	
	    	cout<<pingjun/n<<endl;
	    	delete[] y;
		}
	}
}
