#include<iostream>
using namespace std;

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
		int i;
		int m;

		cin>>m;

		if(m>12||m<0)
		{
			cout<<"error"<<endl;
		}

		else
		{
			cout<<month[m]<<endl;
		}	
	}
	return 0;
}
