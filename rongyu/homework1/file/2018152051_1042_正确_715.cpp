#include<iostream>
#include<cstring>
using namespace std;
int strAdd(char* S,char* T);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		//cin.getline() a str have space 
		char *S,*T;
		int nn;
		S=new char[nn];
		T=new char[nn];
		memset(S,0,sizeof(S));
		memset(T,0,sizeof(T));
		cin>>S>>T;
		int a=strAdd(S,T);
		cout<<a<<endl;
		delete []S;
		delete []T;
	}
}
int strAdd(char *S,char *T)
{
	int len1=strlen(S);
	int len2=strlen(T);
	int i,num1=0,num2=0;
	if(len1!=len2)
	{
		if(len1>len2)
		{
			return 1;
		}
		else
		{
			return (-1);
		}
	}
	else
	{
		for(i=0;i<len1;i++)
		{
			if(*(S+i)>*(T+i))
			{
				num1++;
			}
			else if(*(S+i)<*(T+i))
			{
				num2++;
			}
			else
			{
				continue;
			}
		}
		if(num1>num2)
		{
			return 1;
		}
		else if(num1<num2)
		{
			return (-1);
		}
		else
		{
			return 0;
		}
	}
}
	
