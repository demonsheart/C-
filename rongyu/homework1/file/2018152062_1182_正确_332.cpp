#include <iostream>
using namespace std;

char *strAdd(char *s1, char *s2);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str1[100],str2[100];
		cin>>str1>>str2;
		cout<<str1<<" "<<str2<<" ";
		cout<<strAdd(str1,str2)<<endl;
	}
	return 0;
	
}

char *strAdd(char *s1, char *s2)
{
	char *ip=s1;
	int i=0;
	while(*s1)
	{
		*(ip+i)=*s1;
		i++;
		s1++;
	}
	while(*s2)
	{
		*(ip+i)=*s2;
		i++;
		s2++;
	}
	*(ip+i)='\0';
	return ip;
}
