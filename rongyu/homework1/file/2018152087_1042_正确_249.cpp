#include<iostream>
using namespace std;
int campare(char *S,char *T)
{
	int sums=0;
	int sumt=0;
	int i=0;
	while(1)
	{
		if(*(S+i)>*(T+i))
			sums++;
		if(*(S+i)<*(T+i))
			sumt++;
		if(*(S+i)=='\0'&&*(T+i)=='\0')
			break;
		if(*(S+i)=='\0'&&*(T+i)!='\0')
			return -1;
		if(*(S+i)!='\0'&&*(T+i)=='\0')
			return 1;
		i++;
	}
	if(sums>sumt)
		return 1;
	if(sums==sumt)
		return 0;
	if(sums<sumt)
		return -1;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[100];
		cin>>s1;
		char s2[100];
		cin>>s2;
		cout<<campare(s1,s2)<<endl;
	}
}
