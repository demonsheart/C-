#include<iostream>
#include<cstring>
using namespace std;
int bijiao(char *S,char *T);
int main()
{
	int time,answer;
	char s[500],t[500];
	cin>>time;
	while(time--)
	{
		cin>>s>>t;
		answer=bijiao(s,t);
		cout<<answer<<endl;
	}
	return 0;
}
int bijiao(char *S,char *T)
{
	int Snum=0,Tnum=0;
	int SS=0,TT=0;
	while(*S!='\0')
	{
		Snum++;
		++S;
	}
	while(*T!='\0')
	{
		Tnum++;
		++T;
	}
	if(Snum>Tnum)
		return 1;
	else if(Snum<Tnum)
		return -1;
	else
	{
		S=S-Snum;
		T=T-Tnum;
		while(*S!='\0'&&*T!='\0')
		{
			if(*S>*T)
				SS++;
			else if(*S<*T)
				TT++;
			++S;
			++T;
		}
		if(SS>TT)
			return 1;
		else if(SS<TT)
			return -1;
		else
			return 0;
	}
}


		
	






