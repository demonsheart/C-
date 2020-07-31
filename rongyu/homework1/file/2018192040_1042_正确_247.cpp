#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int strCmp(char *S, char *T)
{
	int l1,l2;
	l1=strlen(S);
	l2=strlen(T);
	if(l1>l2)
		return 1;
	if(l1<l2)
		return -1;
	int i=0,c_s=0,c_t=0,k=0;
	for(i=0;i<l1;i++)
	{
		if(*(S+i)>*(T+i))
			c_s++;
		if(*(S+i)<*(T+i))
			c_t++;
	}
	
	if(c_s>c_t)
		return 1;
	if(c_s<c_t)
		return -1;
	if(c_s==c_t)
		return 0;
}
int main()
{
//	freopen("C:\Users\acer\Desktop\in.txt"  ,"r"  ,stdin);
	int t;
	cin>>t;
	while(t--)
	{
		int i,k=0;
		char a[100]={0},b[100]={0};
		cin>>a;
		cin>>b;
		cout<<strCmp(a,b)<<endl;
		
	}
	return 0;
}
