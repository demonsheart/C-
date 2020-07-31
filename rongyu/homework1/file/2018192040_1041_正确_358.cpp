#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

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
		if(n<1||n>12)
			cout<<"error"<<endl;
		else
			cout<<month[n]<<endl;
	}
	return 0;
}
