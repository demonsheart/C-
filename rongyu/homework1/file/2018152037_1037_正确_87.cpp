#include<stdio.h>
#include<iostream>
using namespace std;

void toChar(int num)
{
	char *p=new char[num];
	int k=0;
	int i;
	for(i=0;i<num;i++)
    	cin>>*(p+i);
	for(i=1;i<num;i++)
	{
		if(*(p+i)>*(p+k))
		k=i;
	}
	cout<<*(p+k)<<endl;
}

void toInt(int num)
{
	int *p=new int[num];
	int sum=0;
	int i;
	for(i=0;i<num;i++)
	{
		cin>>*(p+i);
		sum=sum+*(p+i);
	}
	cout<<(sum/num)<<endl;
}

void toFloat(int num)
{
	float *p=new float[num];
	int k=0;
	int i;
	for(i=0;i<num;i++)
		cin>>*(p+i);
   	for(i=1;i<num;i++)
   	{
   		if(*(p+k)>*(p+i))
   		k=i;
    }
    cout<<*(p+k)<<endl;
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch;
		int num;
		cin>>ch;
		cin>>num;
		if(ch=='C')
	    	toChar(num);
		if(ch=='I')
	        toInt(num);
	    if(ch=='F')
	        toFloat(num);
	}
	return 0;
}

