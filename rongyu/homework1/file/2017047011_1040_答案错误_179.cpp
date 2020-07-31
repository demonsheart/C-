#include<iostream>
#include<cstring>
#include<cmath>
#define N 100
using namespace std;
int isNumber(char *p,int leng)
{
	int i,num,sta,bit=leng;

	for(i=0;i<leng;i++)
		if(p[i]>'9'|| p[i]<'0')
			return -1;	
	for(i=0;i<leng-1;i++){
		if(p[i]=='0')
			bit--;
		if(p[i]=='0' && p[i+1]!='0')
			break;
	}
	
	for(i=leng-bit;i<leng;i++)
	{
		cout<<p[i];
	}
	cout<<endl;
	
}
int main()
{
	int t,leng;
	char str[N],*p;
	
	cin>>t;
	cin.ignore(1,'\n');
	p=str;
	while(t--)
	{
		cin.getline(str,100);
		leng=strlen(str);
		
		if(isNumber(p,leng)==-1)
			cout<<"-1"<<endl;
	}
}
