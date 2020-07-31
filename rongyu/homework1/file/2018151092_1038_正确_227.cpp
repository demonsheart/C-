#include<iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;

	while(t--)
	{
		char *A=new char[10];
		char *B=new char[10];
		char *C=new char[10]; 
		int a1,a2;
		int b1,b2;
		int c1,c2;
		int diffA,diffB,diffC;
		int sum;
		int i;

		cin.ignore(1,'\0');
		for(i=0;i<10;i++)
		cin>>*(A+i);
		cin.ignore(1,'\0');
		for(i=0;i<10;i++)
		cin>>*(B+i);
		cin.ignore(1,'\0');
		for(i=0;i<10;i++)
		cin>>*(C+i);

		cin>>a1>>a2>>b1>>b2>>c1>>c2;

		diffA=a2-a1+1;
		diffB=b2-b1+1;
		diffC=c2-c1+1;

		sum=diffA+diffB+diffC;

		char *D=new char[sum];

		for(i=0;i<diffA;i++)
		{
			*(D+i)=*(A+i+a1-1);
		}

		for(i=diffA;i<diffB+diffA;i++)
		{
			*(D+i)=*(B+i+b1-1-diffA); 
		}

		for(i=diffA+diffB;i<sum;i++)
		{
			*(D+i)=*(C+i+c1-1-diffA-diffB);
		}

		for(i=0;i<sum;i++)
		cout<<*(D+i);

		cout<<endl;
	}
	return 0;
}

