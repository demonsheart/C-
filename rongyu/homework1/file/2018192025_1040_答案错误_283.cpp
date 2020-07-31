#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int judge(char *p,int i);

int main()
{
	int i,a,t;
	char *p,str[10000];
	cin>>t;
	getchar();
	while(t--)
	{
		p=str;
		gets(str);
		
		i=strlen(str);
		a=judge(p,i);
		cout<<a<<endl;
	}
	return 0;
}

int judge(char *p,int i)
{
	int sum=0;
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

