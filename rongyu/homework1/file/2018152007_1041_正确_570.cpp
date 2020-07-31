#include<iostream>
using namespace std;
int main()
{
	const char *month[13]={"Null","January","February","March","April","May","June","July","August","September","October","November","December"};
	int time,a;
	cin>>time;
	while(time--)
	{
		cin>>a;
		if(a>0&&a<13)
			cout<<*(month+a)<<endl;
		else
			cout<<"error"<<endl;
	}
	return 0;
}
