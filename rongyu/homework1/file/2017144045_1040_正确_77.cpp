#include <iostream>
using namespace std;
int isNumber(char *p);
int main()
{
	int t;
	int num;
	int s;
	char a[100];
	cin>>t;
	while(t--)
	{
		cin>>a;
		char *p=a;
		num=isNumber(p);
		if(num==-1)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			s=0;
			for(;*p!='\0';p++)
			s=s*10+(*p-'0');
			cout<<s<<endl;
		}
	}
}

int isNumber(char *p)
{
	int flag=0;
	for(;(*p)!='\0';p++)
	{
		if(*p>='0'&&*p<='9')
		continue;
		else
		flag++;
	}
	if(flag!=0)
	return -1;
	else
	return 1;
}
