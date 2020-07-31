#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,m,n,i,j;
    cin>>t;
    getchar();
    while(t--)
    {
    	int **num;
    	cin>>n>>m;
    	num=new int*[n];
    	for(i=0;i<n;i++)
    		num[i]=new int[m];
    	for(i=0;i<n;i++)
    		for(j=0;j<m;j++)
    		{
    			cin>>num[i][j];
			}
		int max=INT_MIN;
		int min=INT_MAX;
		for(i=0;i<n;i++)
    		for(j=0;j<m;j++)
    		{
    			if(num[i][j]>max)
    				max=num[i][j];
    			if(num[i][j]<min)
    				min=num[i][j];
			}
		cout<<min<<" "<<max<<" "<<endl;
    }
    
    return 0;
}
