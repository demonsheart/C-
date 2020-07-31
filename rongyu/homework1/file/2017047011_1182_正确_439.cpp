#include<iostream>
#include<cstring>
#define N 100
using namespace std;
char *strAdd(char *s1, char *s2)
{
	char *s3;
	
	s3=new char[200];
 	int i,j;
	i=j=0;
	
	while(*(s1+j)!='\0')
	{
		s3[i]=s1[j];
		j++;
		i++;
	}
	j=0;
	
	while(*(s2+j)!='\0')
	{
		s3[i]=s2[j];
		j++;
		i++;
	}
	
	
	return s3;
	
}
int main()
{
	int t,leng;
	char str1[N],str2[N],str3[N];
	char *p1,*p2,*p3;
	cin>>t;
	cin.ignore(1,'\n');
	
	while(t--)
	{
		cin.getline(str1,100);
		cin.getline(str2,100);
		
		p1=str1;
		p2=str2;
		p3=str3;
		p3=strAdd(p1,p2);
		
		cout<<str1<<' ';
		cout<<str2<<' ';
		cout<<p3<<endl; 
	}
}
