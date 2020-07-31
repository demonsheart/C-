#include<iostream>
#include<cstring>
using namespace std;
char *strAdd(char * str1,char* str2)
{
	int k1=strlen(str1),k2=strlen(str2);
	static char *str=new char[k1+k2+1];
	int i;
	strcpy(str,str1);
	for(i=k1;i<=k1+k2-1;i++)
	{
		*(str+i)=*(str2+i-k1);
	}
	*(str+k1+k2)='\0';
	return str;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch1[100],ch2[100];
		cin>>ch1>>ch2;
		cout<<ch1<<" "<<ch2<<" "<<strAdd(ch1,ch2)<<endl;
	}
	return 0;
}
