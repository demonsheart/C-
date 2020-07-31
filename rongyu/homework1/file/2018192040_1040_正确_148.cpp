#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int isNumber(char *num)
{
	int n=strlen(num);
	int i,t,sum=0,k;
	
	for(i=0;i<n;i++)
	if(!(*(num+i)<='9'&&*(num+i)>='0'))
	{
		return -1;
	}
	for(i=0;i<n;i++)
	if(*(num+i)=='0')
	k++;
	else
	break;
	for(i=k;i<n;i++)
	{
		t=*(num+i)-'0';
		sum+=pow(10,n-i-1)*t;
	}
	return sum;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,k=0;
		char a[100]={0};
		cin>>a;
		cout<<isNumber(a)<<endl;
		
	}
	return 0;
}
