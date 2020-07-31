#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char *p1=new char[11];
		char *p2=new char[11];
		char *p3=new char[11];
		for(int i=0;i<10;i++)
			cin>>*(p1+i);
		for(int i=0;i<10;i++)
			cin>>*(p2+i);
		for(int i=0;i<10;i++)
			cin>>*(p3+i);
		int start1,start2,start3;
		int end1,end2,end3;
		cin>>start1>>end1;
		cin>>start2>>end2;
		cin>>start3>>end3;
		int sum=end1-start1+1+end2-start2+1+end3-start3+1;
		char *p=new char[sum+1];
		
		int index=0;
		
		for(int i=0;i<end1-start1+1;i++)
		{
			*(p+index)=*(p1+start1-1+i);
			index++;
		}
		for(int i=0;i<end2-start2+1;i++)
		{
			*(p+index)=*(p2+start2-1+i);
			index++;
		}
		for(int i=0;i<end3-start3+1;i++)
		{
			*(p+index)=*(p3+start3-1+i);
			index++;
		}
		for(int i=0;i<sum;i++)
		{
			cout<<*(p+i);
		}
		cout<<endl;
	}
}
