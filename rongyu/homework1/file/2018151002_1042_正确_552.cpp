#include<iostream>
using namespace std;
int c(char *S,char *T);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s1[1000],s2[1000];
		cin>>s1;
		cin>>s2;
		int k;
		k=c(s1,s2);
		cout<<k<<endl;
	}
	return 0;
}

int c(char *S,char *T)
{
	int i=0,s=0,t=0;
	for(i=0;;i++)
	{
		if(*(S+i)=='\0'&&*(T+i)=='\0')
			break;
		if(*(S+i)=='\0'&&*(T+i)!='\0')
			return -1;
		if(*(S+i)!='\0'&&*(T+i)=='\0')
			return 1;
		if(*(S+i)>*(T+i))
			s++;
		else if(*(S+i)<*(T+i))
			t++;
	}
	if(s>t)
		return 1;
	else if(s<t)
		return -1;
	else
		return 0;
}

