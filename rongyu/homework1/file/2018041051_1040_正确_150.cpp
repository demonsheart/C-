#include<bits/stdc++.h>
using namespace std;

int isNumber(char *str)
{
	int i;
	char *p = str;
	for(i=0;*(p+i)!='\0';i++)
	{
		if(*(p+i)<'0'||*(p+i)>'9')
			return -1;
	}
	int num=0,len,x=1;
	len=strlen(str);
	for(i=len-1;i>=0;i--)
	{
		num+=(*(p+i)-'0')*x;
		x*=10;
	}
	return num;
}

int main()
{
    int t;
    char str[100];
    cin>>t;
    getchar();
    while(t--)
    {
    	cin>>str;
    	cout<<isNumber(str)<<endl;
    }
     
    return 0;
}
