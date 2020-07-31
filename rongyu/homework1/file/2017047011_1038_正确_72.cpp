#include<iostream>
#include<cstring>
#define N 1000
using namespace std;
int main()
{
	int t,i,j;
	char str1[N],str2[N],str3[N];
	int f1,t1,f2,t2,f3,t3,leng;
	char *p,*p1,*p2,*p3;
	cin>>t;
	cin.ignore(1,'\n');
	while(t--)
	{
		cin.getline(str1,100);
		cin.getline(str2,100);
		cin.getline(str3,100);
		cin>>f1>>t1;
		cin>>f2>>t2;
		cin>>f3>>t3;
		cin.ignore(1,'\n');
		p1=str1;
		p2=str2;
		p3=str3;
		
		leng=3+t1-f1+t2-f2+t3-f3;
		p=new char[leng];
		j=0;
		
		for(i=f1-1;i<t1;i++)
			p[j++]=*(p1+i);
		for(i=f2-1;i<t2;i++)
			p[j++]=*(p2+i);
		for(i=f3-1;i<t3;i++)
			p[j++]=*(p3+i);
		
		for(i=0;i<leng;i++)
			cout<<*(p+i);
		cout<<endl;
		delete []p;
	}
	
}
