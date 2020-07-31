#include<iostream>
#include<string.h>
int compare(char *s1,char *s2);
using namespace std;
int main()
{
    int T;
    char str1[100],str2[100];
    char *s1=str1,*s2=str2;

    cin>>T;
    while(T--)
    {


        cin>>s1;

        cin>>s2;


        cout<<compare(s1,s2)<<endl;
    }

}
int compare(char *s1,char *s2)
{
    int l1,l2,i;
    l1=strlen(s1);
    l2=strlen(s2);
    int worse=0,better=0;
    if(l1==l2)
    {
        for(i=0;i<l1;i++)
        {
            if(*(s1+i)>*(s2+i))
            better++;
            else if(*(s1+i)<*(s2+i))
            worse++;
        }
    if(better==worse)
        return 0;
    else if(better>worse)
        return 1;
    else
        return -1;
}
else
    return (strcmp(s1,s2));
}

