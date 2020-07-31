#include<iostream>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
	while(t--)
	{
		cin>>n;		
		if(n<1||n>12)
			cout<<"error"<<endl;
		else
			cout<<month[n]<<endl;
	}
	return 0;
}
