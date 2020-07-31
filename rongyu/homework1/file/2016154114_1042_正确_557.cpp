#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;

char S[100],T[100];
int len1,len2;
int Compare(char *S,char *T)
{
    int i,flag1=0,flag2=0;
    for(i=0;i<len1;i++)
    {
        if(*(S+i)>*(T+i))
            flag1++;
        else if(*(S+i)<*(T+i))
			flag2++;
    }
    if(flag1>flag2)
		return 1;
    else if(flag1<flag2)
		return -1;
    else
		return 0;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        cin>>S;
        cin>>T;
        len1=strlen(S);
        len2=strlen(T);
        if(len1>len2)
			cout<<1<<endl;
        else if(len1<len2)
			cout<<-1<<endl;
        else
			cout<<Compare(S,T)<<endl;
    }
    return 0;
}

