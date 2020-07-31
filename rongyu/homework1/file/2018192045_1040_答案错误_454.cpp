#include<iostream>
using namespace std;
#include<string.h>
int isNumber(char *p);
int main ()
{
	int t;
	char ch[100];
    cin>>t;
    while(t--)
    {
    	cin>>ch;
		cout<<isNumber(ch)<<endl;
	}
 }
 int isNumber(char *ch)
 {
 	int lenth=strlen(ch);
 	int y,t=1,i;
 	for(i=0;i<lenth;i++)
 	   if(*(ch+i)>='0'&&*(ch+i)<='9')
 	   continue;
 	   else
 	   return -1;
 	for(i=lenth-1;i>=0;i--)
 	  {
 	  	y+=(*(ch+i)-'0')*t;
 	    t*=10;
 	  }
 	  return y;

  } 
