#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string a[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
		string *p;
		p=a;
		int n;
		cin>>n;
		if(n<1||n>12)
			cout<<"error"<<endl;
		else
			cout<<*(p+n)<<endl;
	}
}
