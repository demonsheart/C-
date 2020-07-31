#include<stdio.h>
#include<string.h>
int bijiao(char *S,char *T)
{
    int long1,long2;
    int s1=0,s2=0;
    long1=strlen(S);
    long2=strlen(T);

    if(long1>long2)
        return 1;
    else if(long1<long2)
        return -1;
    else
    {
        int i;
        for(i=0;i<long1;i++)
        {
            if(S[i]>T[i])
                s1++;
            if(S[i]<T[i])
                s2++;
        }
    if(s1>s2)
        return 1;
    else if(s1<s2)
        return -1;
    else
        return 0;
    }
}

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
    char S[1000];
    char T[1000];
    int lon1,long2;
    scanf("%s",S);
    getchar();
    scanf("%s",T);
    getchar();
    printf("%d\n",bijiao(S,T));
    }
    return 0;



}
