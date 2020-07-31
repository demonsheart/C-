#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
#define N 200
int main(int argc, char** argv) 
{
	int T;
	cin>>T;
	cin.ignore(1,'\n');
	while(T--)
	{ 
		int n;
		char *a[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
		cin>>n;
		if(n>0&&n<13)
			cout<<a[n]<<endl;
		else
			cout<<"error"<<endl;
	}
	return 0;
}
