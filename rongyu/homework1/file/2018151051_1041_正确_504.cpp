#include<iostream>
using namespace std;
int main()
{
	const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November"," December"};
	int t,i;
	cin>>t;
	for(i=1;i<=t;i++)
	{
		int a;
		cin>>a;
		if(a<1||a>12)
			cout<<"error"<<endl;
		else
		{
			cout<<month[a]<<endl;
		}
	}
	return 0;
}

