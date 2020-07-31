#include<iostream>
using namespace std;

int main()
{
    int t,x;
    const char *month[13]={NULL,"January","February","March",
		"April","May","June","July","August","September",
		"October","November","December"};
	cin>>t;
	while(t--)
	{
		cin>>x;
		if(x<13 && x>0)
			cout<<month[x]<<endl;
		else
			cout<<"error"<<endl;
	}
	return 0;
}
