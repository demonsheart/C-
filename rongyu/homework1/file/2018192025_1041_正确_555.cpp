#include<iostream>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		char *p[12]={"January","February","March","April","May","June","July",
			"August","September","October","November","December"};
		cin>>n;
		if(n>12||n<1)
			cout<<"error"<<endl;
		else
			cout<<p[n-1]<<endl;
	}
	return 0;
}
