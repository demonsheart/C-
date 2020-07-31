#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	
	char *ch1=new char(10);
	char *ch2=new char(10);
	char *ch3=new char(10);
	for(int i=1;i<=10;i++)
	cin>>*(ch1+i);
	for(int i=1;i<=10;i++)
	cin>>*(ch2+i);
	for(int i=1;i<=10;i++)
	cin>>*(ch3+i);
	int st1,end1,st2,end2,st3,end3;
	cin>>st1>>end1;
	cin>>st2>>end2;
	cin>>st3>>end3;
	int n=(end1-st1)+(end2-st2)+(end3-st3)+3;
	char *ch=new char[n];
	for(int i=st1,j=0;i<=end1,j<=(end1-st1);i++,j++)
	*(ch+j)=*(ch1+i);
	for(int i=st2,j=(end1-st1+1);i<=end2,j<=(end1-st1+1+end2-st2+1);i++,j++)
	*(ch+j)=*(ch2+i);
	for(int i=st3,j=(end1-st1+1+end2-st2+1);i<=end3,j<=(end1-st1+1+end2-st2+1+end3-st3+1);i++,j++)
	*(ch+j)=*(ch3+i);
	for(int j=0;j<n;j++) 
	cout<<*(ch+j);
	cout<<endl;}
	return 0;
	}
