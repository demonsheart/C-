#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin.ignore(10,'\n');
		char str1[100],str2[100],str3[100];
		cin.getline(str1,100);
		cin.getline(str2,100);
		cin.getline(str3,100);
		int a1,a2,b1,b2,c1,c2;
		cin>>a1>>a2;
		cin>>b1>>b2;
		cin>>c1>>c2;
		char *p,*p1,*p2,*p3;
		p1=&str1[0];
		p2=&str2[0];
		p3=&str3[0];
		int n=a2-a1+b2-b1+c2-c1+3,i;
		p=new char[n];
		for(i=0;i<a2-a1+1;i++)
		{
			*(p+i)=*(p1+a1-1+i);
		}
		for(i=a2-a1+1;i<a2-a1+1+b2-b1+1;i++)
		{
			*(p+i)=*(p2+i-a2+a1-1+b1-1);
		}
		for(i=a2-a1+1+b2-b1+1;i<n;i++)
		{
			*(p+i)=*(p3+i-a2+a1-1-b2+b1-1+c1-1);
		}
		for(i=0;i<n;i++)
		{
			cout<<*(p+i);
		}
		cout<<endl;
	}
}
