#include<iostream>
using namespace std;
#include<string.h>
int compare(char *a,char *b);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char a[500],b[500];
		cin>>a>>b;
		cout<<compare(a,b)<<endl;
	}
	return 0;
}
int compare(char *a,char *b)
{
	int len1,len2,count1=0,count2=0,i;
	len1=strlen(a);
	len2=strlen(b);
	if(len1<len2)
		return -1;
	else if(len1>len2)
		return 1;
	else
	{
		for(i=0;i<len1;i++)
		{
			if(*(a+i)<*(b+i))
				count1++;
			else if(*(a+i)>*(b+i))
				count2++;
			else
				continue;	
		}
		if(count1<count2)
			return 1;
		else if(count1>count2)
			return -1;
		else
			return 0;
	}
}
