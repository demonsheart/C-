#include<iostream>
using namespace std;
int main ()
{
  int  m,t,i,a1,a2,a3,j,b1,b2,b3;
  cin>>t;
  while(t--)
  {
      char *ch1=new char[10];
	  char *ch2=new char[10];
	  char *ch3=new char[10];
      cin>>ch1; cin>>ch2; cin>>ch3;
      cin>>a1>>b1;
	  cin>>a2>>b2;
	  cin>>a3>>b3;	
	  m=b1-a1+b2-a2+b3-a3+3;
	  char *New=new char[m];
	  for(i=0;i<=b1-a1;i++)
	  *(New+i)=*(ch1+a1-1+i);
	   for(i=b1-a1+1,j=0;i<=b1-a1+1+b2-a2;j++,i++)
	  *(New+i)=*(ch2+a2-1+j);
	   for(i=b1-a1+1+b2-a2+1,j=0;i<=b1-a1+1+b2-a2+1+b3-a3;j++,i++)
	  *(New+i)=*(ch3+a3-1+j);
	  for(i=0;i<=m-1;i++)
	  cout<<*(New+i);
	  cout<<endl;
	  delete []New;delete []ch1;delete []ch2;delete []ch3;
  }	
 } 
