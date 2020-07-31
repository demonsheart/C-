#include<iostream> 
#include<string.h> 
using namespace std; 
int isNumber(char *a) 
{ 
	int i,l,x=0; 
	l=strlen(a); 
	for(i=0;i<l;i++)
	{ 
		if(isdigit(a[i]))
		x=x*10+a[i]-'0'; 
		else return -1; 
	} 
	return x; 
}
int main() 
{ 
	int t; 
	char a[20],*p; 
	p=a; 
	cin>>t; 
	while(t--) 
	{ 
		cin>>a; 
		cout<<isNumber(p)<<endl; 
	} 
} 

