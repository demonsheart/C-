#include<iostream>
using namespace std;

int main()
{
	const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n>=1&&n<=12)
		cout<<month[n]<<endl;
		else
		cout<<"error"<<endl;
	}
	return 0;
}
