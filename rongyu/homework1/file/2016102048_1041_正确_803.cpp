#include<iostream>
#include<cstring>
#include<cmath>
#include<memory>
using namespace std;


int main()
{
	int T,a;
	const char *month[13]={"January","February","March","April",
	"May","June","July","August","September","October","November","December"};
	cin>>T;
	
	while(T--)
	{
	
		cin>>a;
		if(a>12||a<1)
			cout<<"error"<<endl;
		else
			cout<<*(month+a-1)<<endl;
		
	}
	return 0;
}
 
