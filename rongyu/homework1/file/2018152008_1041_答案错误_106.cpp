#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
		int n;
		cin>>n;
		if(n<=12)
		cout<<*(month+n)<<endl;
		else
		cout<<"error"<<endl;
	}
	return 0;
}
