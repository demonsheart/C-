#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i;
	const char *month[13]={NULL,"January","February","March","April","May","June","July","August","September","October","November","December"};
	
    int t,n;
    cin>>t;
    getchar();
    while(t--)
    {
    	cin>>n;
    	if(n<1||n>12)
    		cout<<"error"<<endl;
    	else
    	{
    		cout<<month[n]<<endl;
		}
    }
    
    return 0;
}
