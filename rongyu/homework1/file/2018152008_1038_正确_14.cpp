#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch1[10],ch2[10],ch3[10];
		cin>>ch1>>ch2>>ch3;
		int x1,y1,x2,y2,x3,y3,length;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		length=y1-x1+y2-x2+y3-x3+3;
		char *str=new char[length];
		int i=0,j=0;
		for(i=x1-1;i<=y1-1;i++,j++)
		*(str+j)=*(ch1+i);
		for(i=x2-1;i<=y2-1;i++,j++)
		*(str+j)=*(ch2+i);
		for(i=x3-1;i<=y3-1;i++,j++)
		*(str+j)=*(ch3+i);
		cout<<str<<endl; 
	}
	return 0;
}
