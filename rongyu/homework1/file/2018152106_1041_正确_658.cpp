#include<iostream>
using namespace std;

int main()

{
	const char *mouth[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
	
	int t;
	cin>>t;
	while(t--)
	{
		int i;
		cin>>i;
		if(i>0&&i<13)
		{
			cout<<mouth[i]<<endl;
		}
		else
			cout<<"error"<<endl;
	}
	return 0;
}
