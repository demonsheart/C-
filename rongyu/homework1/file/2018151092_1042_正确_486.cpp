#include<iostream>
using namespace std;
#include<cstring>

int Compare(char *s1, char *s2);
int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		char *s1=new char[100];
		char *s2=new char[100];
		int s1len;
		int s2len;
		int i;

		cin.ignore(1,'\n');
		cin>>s1;
		cin.ignore(1,'\n');
		cin>>s2;

		s1len=strlen(s1);
		s2len=strlen(s2);

		*(s1+s1len)='\0';
		*(s2+s2len)='\0';

		cout<<Compare(s1,s2)<<endl;
	}

	return 0;
}

int Compare(char *s1, char *s2)
{
	int s1len;
	int s2len;
	int consult=0;
	int i;

	s1len=strlen(s1);
	s2len=strlen(s2);

	if(s1len>s2len)
	{
		return 1;
	}

	if(s1len<s2len)
	{
		return -1;
	}

	else if(s1len==s2len)
	{
		for(i=0;i<s1len;i++)
		{
			if(*(s1+i)>*(s2+i))
			{
				consult++;
			}

			if(*(s1+i)<*(s2+i))
			{
				consult--;
			}
		}

		if(consult>0)
		{
			return 1;
		}

		if(consult==0)
		{
			return 0;
		}

		if(consult<0)
		{
			return -1;
		}
	}
}

