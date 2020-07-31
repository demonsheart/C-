#include<iostream>
#include<cstdlib>
using namespace std;

int I(int *p1,int n)
{
	int sum=0,result;
	for(int i=0;i<n;i++)
	{
		cin>>*(p1+i);
	}
	for(int i=0;i<n;i++)
	{
		sum+=*(p1+i);
	}
	result=sum/n;
	return result;
}

char C(char *p2,int n)
{
	char max;
	for(int i=0;i<n;i++)
	{
		cin>>*(p2+i);
	}
	max=*p2;
	for(int i=1;i<n;i++)
	{
		if(*(p2+i)>max)
		{
			max=*(p2+i);
		}
	}
	return max;
}

float F(float *p3,int n)
{
	float min;
	for(int i=0;i<n;i++)
	{
		cin>>*(p3+i);
	}
	min=*p3;
	for(int i=0;i<n;i++)
	{
		if(*(p3+i)<min)
		{
			min=*(p3+i);
		}
	}
	return min;
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		char ch;
		int n;
		cin>>ch>>n;
		switch(ch)
		{
			case 'I':{int *p1=new int[n];cout<<I(p1,n)<<endl;break;}
			case 'C':{char *p2=new char[n];cout<<C(p2,n)<<endl;break;}
			case 'F':{float *p3=new float[n];cout<<F(p3,n)<<endl;break;}
		}
	}
	return 0;
}
