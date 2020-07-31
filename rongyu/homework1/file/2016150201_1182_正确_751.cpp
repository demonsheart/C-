#include<iostream>
#include<cstring>
using namespace std;
void add(char *str1,char *str2){
	int n1=strlen(str1);
	int n2=strlen(str2);
	char *str=new char[n1+n2];
	for(int i=0;i<n1;i++)
	*(str+i)=*(str1+i);
	for(int i=n1,j=0;i<(n1+n2),j<n2;i++,j++)
	*(str+i)=*(str2+j);
	for(int i=0;i<n1;i++)
	cout<<*(str1+i);
	cout<<" "; 
	for(int i=0;i<n2;i++)
	cout<<*(str2+i);
	cout<<" "; 
	for(int i=0;i<(n1+n2);i++)
	cout<<*(str+i);
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
	char str1[20],str2[20];
	cin>>str1;
	cin>>str2;
	char *st1,*st2;
	st1=str1;
	st2=str2;
	add(st1,st2);
	cout<<endl;}
	return 0;
	
	
}
