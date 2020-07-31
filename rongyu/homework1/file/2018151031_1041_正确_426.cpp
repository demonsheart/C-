#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char *p[12];
		char str[12][20]={"January","February","March","April","May","June","July","August","September","October","November","December"};
		for(int i=0;i<12;i++)
			p[i]=str[i];		
		int n;
		cin>>n;
		if(n-1<=11&&n-1>=0)
			cout<<p[n-1]<<endl;
		else
			cout<<"error"<<endl;
	}
	return 0;
}
