#include<iostream>
#include<cstring>
using namespace std;

void input1(char *str)
{
	cin>>str;
}
void input2(int *start,int *end)
{
	cin>>*start>>*end;
}
void jiequ(char *str,int start,int end,char *str2)
{
	int i;
	for(i=start-1;i<end;i++)
	{
		str2[i-start+1]=str[i];
	}
	str2[end-start+1]='\0';
	//cout<<start<<" "<<end<<endl;
}
void jiehe(char *str1,char *str2,char *str3,char *str)
{
	int i,l1,l2,l3,l;
	l1=strlen(str1);
	l2=strlen(str2);
	l3=strlen(str3);
	//cout<<l1<<l2<<l3;
	l=l1+l2+l3;
	for(i=0;i<l1;i++)
	{
		str[i]=str1[i];
	}
	for(i=l1;i<l1+l2;i++)
	{
		str[i]=str2[i-l1];
	}
	for(i=l1+l2;i<l;i++)
	{
		str[i]=str3[i-l1-l2];
	}
	str[l]='\0';
}
int main()
{
	char *a,*b,*c,*a2,*b2,*c2,*d;
	int t,start1,end1,start2,end2,start3,end3;
	cin>>t;
	getchar();
	while(t--)
	{
		a=new char[11];
		b=new char[11];
		c=new char[11];
		
		input1(a);
		input1(b);
		input1(c);
		getchar();
		input2(&start1,&end1);
		input2(&start2,&end2);
		input2(&start3,&end3);
		a2=new char[end1-start1+2];
		b2=new char[end2-start2+2];
		c2=new char[end3-start3+2];
		jiequ(a,start1,end1,a2);
		jiequ(b,start2,end2,b2);
		jiequ(c,start3,end3,c2);
		d=new char[strlen(a2)+strlen(b2)+strlen(c2)];
		jiehe(a2,b2,c2,d);
		cout<<d<<endl;
		delete []a;
		delete []b;
		delete []c;
		delete []a2;
		delete []b2;
		delete []c2;
		delete []d;
		
	}
}
 
