#include<iostream>
#include<cstdio>
using namespace std;
int isNumber(char *p);
int main()
{
	//freopen("C:\\Users\\241\\Desktop\\in.txt","r",stdin);
	//freopen("C:\\Users\\241\\Desktop\\out.txt","w",stdout);
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		char str[8];
		cin>>str;
		cout<<isNumber(str)<<endl;
	}
	return 0;
}
int isNumber(char *p)
{
	int sum=0;
	while(*p!='\0')
	{
		if(!(*p>='0'&&*p<='9'))
			return -1;
		sum=sum*10+(*p-'0');
		p++;
	}
	return sum;
}
