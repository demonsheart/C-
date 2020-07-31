#include<iostream>
#include<string.h>
using namespace std;
void isNumber(char *s1)
{
	int i,a=0;
	for(i=0;i<strlen(s1);i++)
	{
		if(*(s1+i)>'9'||*(s1+i)<'0')
			a++;
	}
	if(a!=0)
		cout<<"-1";
	else
	{
		for(i=0;i<strlen(s1);i++)
		{
			if(*s)
		}
	}
		
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch[50];
		cin>>ch;
		isNumber(ch);
		cout<<endl;
	}
	return 0;
} 
