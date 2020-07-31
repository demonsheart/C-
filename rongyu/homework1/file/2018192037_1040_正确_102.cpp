#include<bits/stdc++.h>
using namespace std;
int isNumber(char *p);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str[20]={0};
		cin>>str;
		char *str_p= str;
		cout<<isNumber(str_p)<<endl;
		
	}
	return 0;
}

int isNumber(char *p)
{
	int i,num=0;
	int res=0;
	for(i=0;*(p+i)!='\0';i++)
	{
		if( *(p+i)>'9' || *(p+i) < '0')
		{
			return -1;
		}
		num++;
	}
	int j=0,sum=0;
	for(i=num-1 ;i>=0;i--,j++)
	{
		sum+=pow(10,j) * (p[i]-'0');
	}
	return sum;
}
