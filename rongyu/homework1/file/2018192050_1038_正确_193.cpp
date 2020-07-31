#include<stdio.h>
#include<iostream>
#include<malloc.h>
using namespace std;
int main()
{
	int t,a1[100],a2[100],a3[100],b[3],c,x,y,i,j,k,num,*q,min;
	char ch,str1[100],str2[100],str3[100],str[100],*p,max1;
	cin>>t;
	while(t--)
	{
		cin>>str1>>str2>>str3;
		cin>>a1[0]>>a1[1]>>a2[0]>>a2[1]>>a3[0]>>a3[1];
		b[0]=a1[1]-a1[0]+1;
		b[1]=a2[1]-a2[0]+1;
		b[2]=a3[1]-a3[0]+1;
		num=b[0]+b[1]+b[2];
		p=(char*)malloc(num*sizeof(char));
		for(i=a1[0]-1,j=0;i<=a1[1]-1;j++,i++)
			p[j]=str1[i];
		for(i=a2[0]-1;i<=a2[1]-1;j++,i++)
			p[j]=str2[i];
		for(i=a3[0]-1;i<=a3[1]-1;j++,i++)
			p[j]=str3[i];
		for(i=0;i<num;i++)
		{
			cout<<p[i];
		}
		printf("\n");
	}
	return 0;
}
		
		
		
		
		
		
