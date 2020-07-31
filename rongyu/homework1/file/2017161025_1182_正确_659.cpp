#include<bits/stdc++.h>
using namespace std;
char *strAdd(char *s1, char *s2)
{
	  char n_str[9999];
	  strcpy(n_str,s1);
	  strcat(n_str,s2);
	  return n_str;
}
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		char *a,*b,*c;
		a=new char[999];
		b=new char[999]; 
		cin>>a>>b;
		c=strAdd(a,b);
		cout<<a<<" "<<b<<" "<<c<<endl;
	}	
}
