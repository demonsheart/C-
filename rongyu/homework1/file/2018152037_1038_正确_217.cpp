#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i,j;
		char str1[100],str2[100],str3[100];
		cin>>str1>>str2>>str3;
		int a1,a2,b1,b2,c1,c2;
		cin>>a1>>a2>>b1>>b2>>c1>>c2;
		char *p=new char[a2+b2+c2-a1-b1-c1+4];
		char *s1=str1,*s2=str2,*s3=str3;
		for(i=0;i<=a2-a1;i++)
    		*(p+i)=*(s1+i+a1-1);
    	for(i=a2-a1+1;i<=a2-a1+b2-b1+1;i++)
    		*(p+i)=*(s2+i+b1-1-a2+a1-1);
		for(i=a2+b2-a1-b1+2,j=c1-1;i<=a2+b2+c2-a1-b1-c1+2;i++,j++)
			*(p+i)=*(s3+j);
		*(p+a2+b2+c2-a1-b1-c1+3)='\0';
		cout<<p<<endl;	
	}
	return 0;
}
