#include<iostream>
#include<cstring>
#define N 1000
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	//cin.ignore(1,'\n');
	const char *month[13]={NULL,"January","February","March","April","May","June","July"
	,"August","September","October","November","December"};
	while(t--)
	{
	//	for(int i=1;i<13;i++)
	//		cout<<month[i]<<endl;
		cin>>i;
		if(i>12 || i<1)
			cout<<"error"<<endl;
		else
	 		cout<<month[i]<<endl;	
			
	}
}
