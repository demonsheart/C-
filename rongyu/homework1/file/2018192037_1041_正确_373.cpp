#include<bits/stdc++.h>
using namespace std;
char *strAdd(char *s1,char *s2);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		const char *month[13]={NULL,"January","February","March","April","May",
		"June","July","August","September","October","November","December"};
		int n;
		cin>>n;
		if(n>=1 && n<13)
		{
			cout<<month[n]<<endl;
		}
		else 
		{
			cout<<"error"<<endl;
		}
	}
	return 0;
}

