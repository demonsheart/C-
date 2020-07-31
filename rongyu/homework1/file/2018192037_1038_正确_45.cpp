#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int num=0;
		char str[3][20];
		char out[50];
		for(int q=0;q<3;q++)
		{
			cin>>str[q];
		}
		for(int q=0;q<3;q++)
		{
			int st,ed;
			cin>>st;
			cin>>ed;
			char *p= str[q];
			for(int i= st-1 ;i<ed;i++)
			{
				out[num]=p[i];
				num++;
			}
		}
		cout<<out<<endl;
	}
	return 0;
}
