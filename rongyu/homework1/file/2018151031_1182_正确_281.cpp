#include <iostream>
#include <cstring>
using namespace std;
char *strAdd(char *s1,char *s2)
{
	char *p = new char[1000];
	char *q;
	int count=0;
	for(q=s1;*q;q++,p++,count++)
		*p=*q;
	for(q=s2;*q;q++,p++,count++)
		*p=*q;
	*p='\0';
	p=p-count;
	return p;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char str1[500],str2[500];
		cin>>str1>>str2;
		cout<<str1<<' '<<str2<<' '<<strAdd(str1,str2)<<endl;
		
		
	}
	
	return 0;
}
