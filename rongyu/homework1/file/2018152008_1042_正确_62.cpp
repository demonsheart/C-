#include<iostream>
#include<cstring>
using namespace std;
int compare(char  *str1,char *str2)
{
	int k1=strlen(str1);
	int k2=strlen(str2);
	if(k1>k2)
	return 1;
	else if(k1<k2)
	return -1;
	else
	{
		int i;
		int sum1=0,sum2=0;
		for(i=0;i<k1;i++)
		{
			if(*(str1+i)>*(str2+i))
			sum1++;
			if(*(str1+i)<*(str2+i))
			sum2++;
		}
		if(sum1>sum2)
		return 1;
		else if(sum1==sum2)
		return 0;
		else if(sum1<sum2)
		return -1;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch1[100],ch2[100];
		cin>>ch1>>ch2;
		cout<<compare(ch1,ch2)<<endl;
	}
	return 0;
}
