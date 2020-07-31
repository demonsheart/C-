#include<iostream>
using namespace std;

int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){

	char *mon[12]={
        "January", "February", "March", "April", "May", "June", "July",
        "August", "September", "October", "November", "December"
    };
int n;
cin>>n;
if(n>0&&n<13)
	cout<<mon[n-1]<<endl;
	if(n>12)
	cout<<"error";}
	return 0;
} 
