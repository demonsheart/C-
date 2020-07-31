#include <iostream>
#include <cstring>
using namespace std;
int compare(char *s,char *t)
{
	int count_s=0,count_t=0,len=strlen(s);
	if(strlen(s)>strlen(t))
		return 1;
	else if(strlen(s)<strlen(t))
		return -1;
	else 
	{
		for(int i=0;i<len;i++)
		{
			if(*s>*t)
				count_s++;
			else if(*s<*t)
				count_t++;
			s++;
			t++;
		}
		if(count_s==count_t)
			return 0;
		else if(count_s>count_t)
			return 1;
		else if(count_s<count_t)
			return -1;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str1[500],str2[500];
		cin>>str1>>str2;
		cout<<compare(str1,str2)<<endl;
	}
	
	return 0;
}
