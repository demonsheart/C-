#include <iostream>
#include <math.h>
#include <string.h>
using namespace std;

int isNumber(char *ip,int len);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		getchar();
		char str[100];
		cin>>str;
		int len=strlen(str);
		cout<<isNumber(str,len)<<endl;
	}
	return 0;
}

int isNumber(char *ip,int len)
{
	int sum=0;
	int index=0;
	for(int i=0;i<len;i++)
	{
		if(*(ip+i)>='0'&&*(ip+i)<='9')
		    sum+=(*(ip+i)-'0')*pow(10,len-i-1);
		else
		{
			sum=-1;
			break;
		}    
	}
	return sum;
}
