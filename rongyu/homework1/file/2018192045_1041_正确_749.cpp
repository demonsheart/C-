#include<iostream>
using namespace std;
int main()
{
	int t;
	const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(!(n>0&&n<=12))
			cout<<"error"<<endl;
		else
			cout<<*(month+n)<<endl;
	}
	return 0;
}
