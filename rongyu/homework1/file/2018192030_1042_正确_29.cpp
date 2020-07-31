#include<iostream>
#include<cstring>
using namespace std;
int compare(char *S,char *T)
{
    int i,x=0,y=0,len1,len2;
    len1=strlen(S);
    len2=strlen(T);
    if(len1>len2)
        return 1;
    else if(len1<len2)
        return -1;
    else
        for(i=0;*(S+i)!='\0';i++)
        {
            if(*(S+i)>*(T+i))
                x++;
            else
                y++;
        }
        if(x>y)
            return 1;
        else if(x==y)
            return 0;
        else
            return -1;
}
int main()
{
    char S[30],T[30];
    int t;
    cin>>t;
    while(t--)
    {
        cin>>S>>T;
        cout<<compare(S,T)<<endl;
    }
}


