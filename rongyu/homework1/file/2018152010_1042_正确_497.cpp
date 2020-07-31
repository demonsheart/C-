#include <iostream>
#include<cstring>
int compare(char *S, char *T);
using namespace std;

int main()
{
    int t,result;
    char ch1[100],ch2[100];
    cin>>t;
    while(t--)
    {
         cin>>ch1>>ch2;
        result=compare(ch1,ch2);
        cout<<result<<endl;
    }

}
int compare(char *S, char *T)
{
    int n1=0,n2=0,len1,len2,i;
    len1=strlen(S);
    len2=strlen(T);
    if(len1>len2)
        return 1;
    else if(len2>len1)
        return -1;
    else
    {
        for(i=0;*(S+i)!='\0';i++)
        {
            if(*(S+i)>*(T+i))
                n1++;
            else if(*(S+i)<*(T+i))
                n2++;
        }
        if(n1>n2)
            return 1;
        else if(n2>n1)
            return -1;
        else
            return 0;
    }

}
