#include<iostream>
#include<string.h>
using namespace std;
int test(char *s1, char *s2)
{
	int i,a=0,b=0;
	if(strlen(s1)==strlen(s2))
	{
		for(i=0;i<strlen(s1);i++)
		{
			if(*(s1+i)>*(s2+i))
				a++;
			else if(*(s1+i)<*(s2+i))
				b++;
		}
		if(a>b)
			cout<<"1";
		else if(a<b)
			cout<<"-1";
		else if(a==b)
			cout<<"0";
	}
	else if(strlen(s1)>strlen(s2))
		cout<<"1";
	else if(strlen(s1)<strlen(s2))
		cout<<"-1";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch1[50];
		char ch2[50];
		cin>>ch1;
		cin>>ch2;
		test(ch1,ch2);
		cout<<endl;
	}
	return 0;
} 
