#include<iostream>
#include<cstring>
#include<cmath>
#define N 1000
using namespace std;
int isNumber(char *p,int leng)
{
	int i,num,bit;
	num=0;
	bit=leng;
	for(i=0;i<leng;i++)
		if(p[i]>'9'|| p[i]<'0')
			return -1;
				

	for(i=leng-bit;i<leng;i++){
		num+=pow(10,bit-1)*(p[i]-'0');
		bit--;
	}
		
	return num;
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
		
		cout<<isNumber(p,leng)<<endl;
	}
	
}
