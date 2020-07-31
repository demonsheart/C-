#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
			char* month[15]={"January","February","March","April","May","June","July","August","September","October","November","December"};
			int a;
			cin>>a;
			if(a<=12&&a>=1)
				cout<<month[a-1]<<endl;
			else
				cout<<"error"<<endl;
	}
}
