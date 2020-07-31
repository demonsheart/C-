#include<iostream>
#include<cmath>
#include<cstring>
using namespace std;
int isNumber(char str[])
{
	int i,j;
    int sum=0;
    int len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]<48||str[i]>57)
            return -1;
    }
    for(j=0;j<len;j++)
    {
        sum+=(str[j]-'0')*pow(10,i-1);
        i--;
    }
    return sum;
    
    
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char str[20];
    	cin>>str;
        if(isNumber(str)==-1)
            cout<<-1<<endl;
        else
            cout<<isNumber(str)<<endl;
    }
}
