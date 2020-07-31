#include<iostream>
#include<string.h>
using namespace std;
int isNumber(char *str)
{
	int i,j,l,flag1=0,flag2=0;
	int sum=0;
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		if(str[i]>='0' && str[i]<='9')
		{
			flag1=1;
		}
	}
	for(j=0;j<l;j++)
	{
		sum=sum*10+*(str+j)-'0';
	}
	if(flag1==1){
	    return -1;
	}
	else{
		return sum;
	}
		
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    	int r;
        char str[100];
		cin>>str;
		r=isNumber(str);	
		cout<<r<<endl;
	}
	return 0;
}
