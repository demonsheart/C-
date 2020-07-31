#include<iostream>
#include<cstring>
using namespace std;
char *strAdd(char *s1, char *s2);
int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		char s1[100],s2[100];
		cin>>s1>>s2;
		char *j;
		j=strAdd(s1,s2);
		cout<<j<<endl;
		
	}
	return 0;
}
char *strAdd(char *s1, char *s2)
{
	cout<<s1<<" "<<s2<<" ";
	int len1=strlen(s1),len2=strlen(s2),i;
	char *j=new char[len1+len2];
	for(i=0;i<len1+len2;i++)
	{
		if(i<len1)
			j[i]=s1[i];
		else
			j[i]=s2[i-len1];
	}
	j[len1+len2]='\0';
	return j;
}
