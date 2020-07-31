#include <iostream>
using namespace std;
int main()
{
	const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	int t;
	int n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		if(n>12||n<1)
		    cout<<"error"<<endl;
		else
		    cout<<month[n]<<endl;
	}
}
