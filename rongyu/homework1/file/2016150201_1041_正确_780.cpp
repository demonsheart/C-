#include<iostream>
using namespace std;

int main(){
	

	char *mon[13]={
        "January", "February", "March", "April", "May", "June", "July",
        "August", "September", "October", "November", "December"
    };
    int t;
	cin>>t;
	
int n;
while(scanf("%d", &n)!=EOF)
{
if(n>0&&n<13)
	cout<<mon[n-1]<<endl;
else
    cout<<"error"<<endl;
	}

	return 0;
} 
