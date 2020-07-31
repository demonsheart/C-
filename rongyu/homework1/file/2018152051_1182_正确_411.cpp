#include<iostream>
#include<cstring>
using namespace std;
char* strAdd(char* s1,char* s2);
//int add(a,b)
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[1000],s2[100];
		memset(s1,0,sizeof(s1));
		memset(s2,0,sizeof(s2));
		cin>>s1>>s2;
		cout<<s1<<" ";
		char str[1000];
		memset(str,0,sizeof(str));
		strcpy(str,strAdd(s1,s2));
		cout<<s2<<" "<<str<<endl;
	}
}
char* strAdd(char* s1, char* s2)
{
	strcat(s1,s2);
	return s1;
}
