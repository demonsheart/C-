#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
	while(t--)
	{
		int num;
		cin>>num;
		if(num>12||num<=0)
			cout<<"error"<<endl;
		else
			cout<<*(month+num)<<endl;
	}
	return 0;
}
