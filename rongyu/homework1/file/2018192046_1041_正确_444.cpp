#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		const char *month[13]={NULL,"January","February","March",
						"April","May","June","July","August",
						"September","October","November","December"};
		int flag;
		cin>>flag;
		if(flag>=1&&flag<=12)
		{
			cout<<month[flag]<<endl;
		}
		else
		{
			cout<<"error\n";
		}
	}
	return 0;
}
