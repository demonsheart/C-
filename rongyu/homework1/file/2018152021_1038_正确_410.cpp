#include<iostream>
using namespace std;
void text(char *p,int start,int end)
{
	char ch,*q=p+start-1;
	q[end-start+1]='\0';
 	cout<<q;
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char ch1[10];
		char ch2[10];
		char ch3[10];
		cin>>ch1;
		cin>>ch2;
		cin>>ch3;
		int x1,x2,x3,y1,y2,y3;
		cin>>x1>>y1>>x2>>y2>>x3>>y3;
		text(ch1,x1,y1);
		text(ch2,x2,y2);
		text(ch3,x3,y3);
		cout<<endl;
	}
	return 0;
} 
