#include <iostream>
#include <cstring>
using namespace std;
char *strAdd(char *s1, char *s2);
int main()
{
	int t;
	char a[100],b[100];
	int i,j,k;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		cout<<a<<" "<<b<<" ";
		char *s1,*s2;
		s1=a;
		s2=b;
		char*str1=strAdd(s1,s2);
		cout<<str1<<endl;
	}
}

char *strAdd(char *s1, char *s2)
{
	char *str=strcat(s1,s2);	
	return str;
}
