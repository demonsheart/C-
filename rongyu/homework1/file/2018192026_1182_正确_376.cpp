#include<stdio.h>
#include<string.h>
char *strAdd(char *s1,char *s2);
int main()
{
    int t;
    scanf("%d",&t);
    //getchar();
    while(t--)
    {
        char s1[20]={'\0'},s2[20]={'\0'};
        scanf("%s%s",s1,s2);
        char *p=s1,*q=s2;
        printf("%s %s ",p,q);
        char *s=strAdd(p,q);
        printf("%s\n",s);
    }
    return 0;
}
char *strAdd(char *s1,char *s2)
{
    char resultStr[1000]={'\0'};
    int i,j,n1=strlen(s1),n2=strlen(s2);
    for(i=0,j=0;i<n1;i++,j++)
        resultStr[j]=s1[i];
    for(i=0;i<n2;i++,j++)
        resultStr[j]=s2[i];
    return resultStr;
}
