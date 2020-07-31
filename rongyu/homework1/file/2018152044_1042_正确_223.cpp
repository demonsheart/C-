#include<iostream>
#include<cstring>
using namespace std;
int judge(char *S,char *T);
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        char s[1000];
        char t[1000];
        char *S;
        char *T;
        cin>>s;
        cin>>t;
        S=s;
        T=t;
        cout<<judge(S,T)<<endl;
    }
    return 0;
}
int judge(char *S,char *T)
{
    int len1=strlen(S);
    int len2=strlen(T);
    int sum1=0;
    int sum2=0;
    if(len1>len2)
        return 1;
    if(len1<len2)
        return -1;
    int i,len=len1;
    for(i=0;i<len;i++)
    {
        if(*(S+i)>*(T+i))
            sum1++;
        else if(*(S+i)<*(T+i))
            sum2++;
    }
    if(sum1>sum2)
        return 1;
    if(sum1<sum2)
        return -1;
    return 0;
}
