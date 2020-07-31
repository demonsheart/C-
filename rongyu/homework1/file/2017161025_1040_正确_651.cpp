#include<bits/stdc++.h>
using namespace std;
int isNumber(char *s)
{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]<='9'&&s[i]>='0')
			continue;
		else
			return -1;
}
	return atoi(s);
} 
int main()
{
	int t;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		char ss[99999];
		cin>>ss;
		cout<<isNumber(ss)<<endl;
	}
}
