#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char *month[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
		int mon;
		cin>>mon;
		if(1<=mon&&mon<=12)
			cout<<*(month+mon-1)<<endl;
		else
			cout<<"error"<<endl;
	}
	return 0;
}
