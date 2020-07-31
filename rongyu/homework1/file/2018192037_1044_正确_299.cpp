#include<bits/stdc++.h>
using namespace std;
int judge(char *s_p,char *t_p);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,n,**num,j;
		int i=0,max=INT_MIN,min=INT_MAX;
		cin>>m>>n;
		num = new int *[m];
		for(i=0;i<m;i++)
		{
			num[i]= new int [n];
		}
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin >> num[i][j];
				if(num[i][j] > max)
					max = num[i][j];
				if(num[i][j] < min)
					min = num[i][j];
			}
		}
		cout<<min<<" "<<max<<endl;
	}
	return 0;
}
