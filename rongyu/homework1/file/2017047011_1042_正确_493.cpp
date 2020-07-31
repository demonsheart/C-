#include<iostream>
#include<cstring>
#include<cmath>
#define N 1000
using namespace std;
int compare(char *s1,char *s2)
{
	int i,big1,big2,leng1,leng2;
	big1=big2=0;
	leng1=strlen(s1);
	leng2=strlen(s2);
	if(leng1>leng2)
		return 1;
	if(leng2>leng1)
		return -1;
	for(i=0;i<leng1;i++){
		if(s1[i]>s2[i])
			big1++;
		if(s2[i]>s1[i])
			big2++;
	}
	
	
	if(big1>big2)
		return 1;
	if(big1==big2)
		return 0;
	if(big1<big2)
		return -1;
}
int main()
{
	int t;
	char str1[N],str2[N];
	char *p1,*p2;
	cin>>t;
	cin.ignore(1,'\n');
	
	while(t--)
	{
		cin.getline(str1,100);
		cin.getline(str2,100);
		p1=str1;
		p2=str2;
		cout<<compare(p1,p2)<<endl;
	}
}
