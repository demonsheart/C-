#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char *Month[]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};	
		int n;
		cin>>n;	
		if (n<1||n>12)	
		{		
			cout<<"error";
		}	
		else	
		{		
			cout<<*(Month+n-1);
		}
		cout<<endl;	
	}
	return 0;
} 
