#include<iostream>
#include<cstring>
using namespace std;
int isNumber(char *GG);
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char a[100];
		cin>>a;
		char *j=a;
		if(isNumber(j)==-1)
		{
			cout<<"-1\n";
		}
		else
		{
			cout<<isNumber(j)<<endl;
		}
	}
	return 0;
}
int isNumber(char *GG)
{
	int i,flag=strlen(GG),h,sum=0;
	for(i=0;i<flag;i++)
	{
		if('0'<=GG[i]&&GG[i]<='9')
		{
			continue;
		}
		else
		{
			return -1;
		}
	}
	for(i=0;i<flag;i++)
	{
		sum+=(GG[i]-'0'+sum)*10;
	}
	return sum/10;
}
