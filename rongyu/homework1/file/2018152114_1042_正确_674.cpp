#include<iostream>
#include<stdio.h>
#include<cstring>
using namespace std;
int compare(char *S, char *T);
int main()
{
	int n;
	char s[100],t[100];
	cin>>n;
	while(n--)
	{
		
		int ans;
		cin>>s>>t;
		ans=compare(s,t);
		cout<<ans<<endl;
	}
}
int compare(char *s, char *t)
{
		if(strlen(s)==strlen(t))
		{
			int z=0,x=0;
			for(int i=0;i<strlen(s);i++)
			{
				if(*(s+i)>*(t+i))
				   z++;
				else
				   x++;
			}
			if(z>x)
				return 1;
			else if(z==x)
				return 0;
			else
				return -1;
	    }
	    else if(strlen(s)>strlen(t))
	        return 1;
	    else if(strlen(s)<strlen(t))
		    return -1; 
}
