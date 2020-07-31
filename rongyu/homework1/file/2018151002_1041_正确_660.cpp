#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
	while(t--)
	{
		int a;
		cin>>a;
		if(a>0&&a<13)
			cout<<*(month+a)<<endl;
		else
			cout<<"error"<<endl;
	}
	return 0;
}


