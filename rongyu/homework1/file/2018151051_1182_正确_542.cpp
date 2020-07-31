#include<iostream>
#include<cstring>
char *strAdd(char *s1, char *s2);
using namespace std;
int main()
{
	int t,i;
	cin>>t;
	cin.get();
	for(i=1;i<=t;i++)
	{
		char ch1[100],ch2[100];
		cin>>ch1;
		cin>>ch2;
		cout<<ch1<<" "<<ch2<<" "<<strAdd(ch1,ch2)<<endl;
	}
	return 0;
}
char *strAdd(char *s1, char *s2)
{
	static char ch3[300];
	int i;
	for(i=0;ch3[i]!='\0';i++)
		ch3[i]='\0';
	strcat(ch3,s1);
	strcat(ch3,s2);
	return ch3; 
}
