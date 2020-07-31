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
	int a[100],sum=0,i,j;
	int l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]<'0'||str[i]>'9')
		{
			printf("-1\n");
			return ;
		}
	}
		for(i=0;i<l;i++)
			if(str[i]<='9' && str[i]>='0')
				sum=sum*10+str[i]-'0';
			
		
		cout<<sum<<endl;

}
