#include<iostream>
using namespace std;

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		char *month[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};
		if(n<1||n>12)
			cout<<"error"<<endl;
		else
			cout<<month[n-1]<<endl;
	}
	return 0;
}
