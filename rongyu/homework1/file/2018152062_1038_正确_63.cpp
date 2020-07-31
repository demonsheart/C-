#include <iostream>
using namespace std;




int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		getchar();
		char str1[15],str2[15],str3[15];
		cin>>str1>>str2>>str3;
		char *x,*m,*y;
		x=str1;
		m=str2;
		y=str3;
		char *ip;
		ip=new char[30];
		int x1,x2,m1,m2,y1,y2;
		cin>>x1>>x2>>m1>>m2>>y1>>y2;
		int num=0;
		for(int i=x1-1;i<x2;i++)
		{
			*(ip+num)=*(x+i);
			num++;
		}
		for(int i=m1-1;i<m2;i++)
		{
			*(ip+num)=*(m+i);
			num++;
		}
		for(int i=y1-1;i<y2;i++)
		{
			*(ip+num)=*(y+i);
			num++;
		}
		*(ip+num)='\0';
		for(int i=0;i<num;i++)
		   cout<<*(ip+i);
		cout<<endl;   
		delete []ip;   
	}
	return 0;
} 
