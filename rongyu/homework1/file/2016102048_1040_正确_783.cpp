#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;

int isNumber(char *str)
{
	int i,l,a=0;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]>='0'&&str[i]<='9')
		{
			a+=(str[i]-'0')*pow(10,(l-i-1));
		}
		else
			return -1;
	}
	return a;
}
int main()
{
	int t;
	char str[100];
	cin>>t;
	getchar();
	while(t--)
	{
		cin>>str;
		cout<<isNumber(str)<<endl;
	}
	return 0;
}
 
