#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str1[12]={0},str2[12]={0},str3[12]={0},ans[100]={0};
		cin>>str1>>str2>>str3;
		char *p,*q=ans;
		for(int i=1;i<=3;i++)
		{
			int a,b;
			cin>>a>>b;
			if(i==1)
			{
				for(p=str1+a-1;p<str1+b;p++)
					*q++=*p;	
			}
			else if(i==2)
			{
				for(p=str2+a-1;p<str2+b;p++)
					*q++=*p;
			}
			else if(i==3)
			{
				for(p=str3+a-1;p<str3+b;p++)
					*q++=*p;
			}
			
		}
		*q='\0';
		cout<<ans<<endl;
		
	}
	
	return 0;
}
