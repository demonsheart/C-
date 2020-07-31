#include<bits/stdc++.h> 
using namespace std;
int BiJiao(char str1[],char str2[]);
int main()
{
	int t,w;
	cin>>t;
	while(t--)
	{
		int **p,a,b;
		cin>>a>>b;
		p=new int*[a];
		for(int i=0;i<a;i++){
			p[i]=new int[b];
		}
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				cin>>p[i][j];
			}
		}
		int max=0,min=10000;
		for(int i=0;i<a;i++)
		{
			for(int j=0;j<b;j++)
			{
				if(p[i][j]>max)
					max=p[i][j];
				if(p[i][j]<min)
					min=p[i][j];
			}
		}
		cout<<min<<" "<<max<<endl;
	}
}
