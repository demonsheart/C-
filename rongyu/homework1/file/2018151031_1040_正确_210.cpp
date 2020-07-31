#include <iostream>
#include <cstring>
using namespace std;

int notdigit(char ch)
{
	char number[10]={'0','1','2','3','4','5','6','7','8','9'};
	for(int i=0;i<10;i++)
	{
		if(number[i]==ch)
			return 0;
	}
	return 1;
}
int isNumber(char *str)
{
	int i,ans=0;
	if(notdigit(str[0])||str[0]=='-'||str[0]=='+')
		return -1;
	for(i=1;str[i];i++)
	{
		if(notdigit(str[i]))
			return -1;
	}
	i=0;
	if(!notdigit(str[i]))
		ans=str[i]-'0';
	i++;		
	for(i;i<strlen(str);i++)
	{
		ans=ans*10+str[i]-'0';
	}
	if(str[0]=='-')
		ans=-ans;
	return ans;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str[1000];
		cin>>str;
		cout<<isNumber(str)<<endl;
	}
	
	return 0;
}
