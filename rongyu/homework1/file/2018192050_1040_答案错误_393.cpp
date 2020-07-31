#include<bits/stdc++.h> 
using namespace std; 
void isNumber(char str[]);
int main()
{
	int t,a[100],b[3],c,x,y,i,j,k,num,*q,min;
	char ch,str[100],*p,max1;
	cin>>t;
	while(t--)
	{
		cin>>str;
		isNumber(str);
	}
	return 0;
}
void isNumber(char str[])
{
	int a[100],flag=1,i,j;
	int l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]<48||str[i]>57)
		{
			printf("-1\n");
			flag=0;
		}
	}
	if(flag==1)
	{
		for(i=0;i<l;i++)
		{
			if(str[i]==48)
				a[i]=0;
			if(str[i]==49)
				a[i]=1;
			if(str[i]==50)
				a[i]=2;
			if(str[i]==51)
				a[i]=3;
			if(str[i]==52)
				a[i]=4;
			if(str[i]==53)
				a[i]=5;
			if(str[i]==54)
				a[i]=6;
			if(str[i]==55)
				a[i]=7;
			if(str[i]==56)
				a[i]=8;
			if(str[i]==57)
				a[i]=9;
		}
		int w=0;
		for(i=0;i<l;i++)
		{
			for(j=l-i-2;j>=0;j--)
			{
				a[i]*=10;
			}
		}
		for(i=0;i<l;i++)
		{
			w+=a[i];
		}
		cout<<w;
		cout<<endl;
	}
}
