#include<iostream>
#include<cmath>
using namespace std;
int isNumber(char *p);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[1000];
		cin>>s;
		int a;
		a=isNumber(s);
		cout<<a<<endl;
	}
	return 0;
}

int isNumber(char *p)
{
	int i=0,l=0,s=0;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)>'9'||*(p+i)<'0')
			return -1;
		l++;
	}
	for(i=0;i<l;i++)
		s+=(*(p+i)-'0')*pow(10,l-i-1);
	return s;
}
