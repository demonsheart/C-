#include<iostream>
#include<cstring>
using namespace std;

char S3[200];
char *strAdd(char *s1, char *s2)
{
	char *s3;
	s3=S3;
	while(*s1!='\0')
	{
		*s3=*s1;
		s3++;
		s1++;
	}
	while(*s2!='\0')
	{
		*s3=*s2;
		s3++;
		s2++;
	}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		char S1[100],S2[100],*s1,*s2;
		cin>>S1>>S2;
		s1=S1;
		s2=S2;
		strAdd(s1,s2);
		cout<<S1<<" "<<S2<<" "<<S3<<endl;
    }
    return 0;
}
