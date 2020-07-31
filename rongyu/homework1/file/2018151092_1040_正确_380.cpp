#include<iostream>
using namespace std;
#include<cmath>

int isNumber(char *A);

int main()
{
	int t;

	cin>>t;

	while(t--)
	{
		char input[4];
		char *Ip;
		int i;

		cin.ignore(1,'\n');

		for(i=0;i<4;i++)
		{
			cin>>input[i];
		}

		Ip=input;

		cout<<isNumber(Ip)<<endl;
	}

	return 0;
}

int isNumber(char *A)
{
	int flag=0,FLAG=0;
	int i;
	int output=0;

	for(i=0;i<4;i++)
	{
		if(*(A+i)>'9'||*(A+i)<'0')
		{
			flag=1;
			break;
		}
	}

	if(flag==1)
	{
		return -1;
	}

	else if(flag==0)
	{
		for(i=0;i<4;i++)
		{
			if(*(A+i)!='0'&&FLAG==0)
			{
				FLAG=1;
			}

			if(FLAG==1)
			{
				output=output+(*(A+i)-'0')*pow(10,4-i-1);
			}
		}

		return output;
	}
}
