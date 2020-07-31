#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	getchar();
	while(t--)
	{
		char s1[11],s2[11],s3[11],ans[100];
		cin>>s1>>s2>>s3;
		char *p,*q=ans;
		for(int i=1;i<=3;i++)
		{
		    int a,b;
		    
		   
		    cin>>a>>b;
			if(i==1)
			{
				//s1+a-1 = &s1[a-1]
			    for(p=s1+a-1;p<s1+b;p++)
					*q++=*p;	
			}
			if(i==2)
			{
			    for(p=s2+a-1;p<s2+b;p++)
			    
				*q++=*p;	
			}
				if(i==1)
			{
			    for(p=s3+a-1;p<s3+b;p++)
			    
				*q++=*p;	
			}
		}
		*q = '\0';
		cout<<ans<<endl;
		
	}
	return 0;
}
