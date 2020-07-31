#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int t,m,n,i,j,max,min;
    cin>>t;
    while(t--)
    {
        cin>>m>>n;
        int **p=new int*[m];
	    for(i=0;i<n;i++)
		    p[i]=new int[n];
		for(i=0;i<m;i++)
		{
		    for(j=0;j<n;j++)
		    {
		        cin>>p[i][j];
		    }
		}
		max=p[0][0];
		min=p[0][0];
		for(i=0;i<m;i++)
		{
		    for(j=0;j<n;j++)
		    {
			    if(p[i][j]>max)
			        max=p[i][j];
			    if(p[i][j]<min)
			        min=p[i][j];
	    	}
		}
		cout<<min<<" "<<max<<endl;
	    for(i=0;i<m;i++)
	    {
	        delete p[i];
	    }
	    delete [] p;
    }
    return 0;
}
