#include<bits/stdc++.h>
using namespace std;
int judge(char *s_p,char *t_p);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char s[200]={0};
		char t[200]={0};
		cin>>s;
		cin>>t;
		char *s_p=s, *t_p=t;
		cout<<judge(s_p,t_p)<<endl;
		
	}
	return 0;
}

int judge(char *s_p,char *t_p)
{
	int snum=0,tnum=0;
	if(strlen(s_p)>strlen(t_p))
		return 1;
	else if(strlen(s_p)<strlen(t_p))
		return -1;
	else
	{
		for(int i=0;i<strlen(s_p);i++)
		{
			if(s_p[i]<t_p[i])
				tnum++;
			else if (s_p[i]>t_p[i])
				snum++;
		}
		if(tnum>snum)
			return -1;
		else if (snum>tnum)
			return 1;
		else return 0;
	}
}
