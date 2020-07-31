#include<cmath>
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int t,i,j,n;
	cin>>t;
	char *month[]={"January" ,"February","March","April","May","June","July","August","September","October","November","December"};
			
	while(t--)
	{
		cin>>n;

		if(n>0&&n<13)
		{
			cout<<month[n-1]<<endl;
		
		}
		else cout<<"error"<<endl;
	}
	return 0;
}

