#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int isNumber(char *p);

int main()
{
	int a,t;
	char *p,str[10000]={'\0'};
	cin>>t;
	getchar();
	while(t--)
	{
		p=str;
		cin>>str;
		
		a=isNumber(p);
		cout<<a<<endl;
	}
	return 0;
}

int isNumber(char *p)
{
	int sum=0,i;
	i=strlen(p);
	while(i--)
	{
		if(*p>='0'&&*p<='9')
		{
			sum+=(*p-'0')*pow(10,i);
			p++;
		}
		else
		{
			return -1;
			exit(0);
		}
	}
	return sum;
}

