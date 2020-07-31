#include <iostream>
#include <stdlib.h>
using namespace std;
#define N 100
int main(int argc, char** argv) 
{
	int T;
	cin>>T;
	cin.ignore(1,'\n');
	while(T--)
	{
		char str1[N],str2[N],str3[N],str4[N];
		int x1,x2,y1,y2,z1,z2;
		cin>>str1>>str2>>str3;
		cin>>x1>>x2>>y1>>y2>>z1>>z2;
		int i,j;
		char *p,*p1,*p2,*p3;
		p=str4,p1=str1,p2=str2,p3=str3;
		for(i=0,j=x1-1;j<x2;j++,i++)
			p[i]=p1[j];
		for(j=y1-1;j<y2;j++,i++)
			p[i]=p2[j];
		for(j=z1-1;j<z2;j++,i++)
			p[i]=p3[j];
		p[i]='\0';
		for(j=0;j<i;j++)
			cout<<p[j];
		cout<<endl;
	}
	return 0;
}
