#include<iostream>
using namespace std;
int isNumber(char * str)
{
	int i=0;
	int sum=0;
	while(*(str+i)!='\0')
	{
		if(*(str+i)>'9'||*(str+i)<'0')
		return -1;
		sum=sum*10+*(str+i)-'0';
		i++;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[30];
		cin>>s;
		if(isNumber(s)==-1)
		cout<<"-1"<<endl;
		else
		cout<<isNumber(s)<<endl;
	}
	return 0;
}
