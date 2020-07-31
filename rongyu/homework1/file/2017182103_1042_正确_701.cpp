#include <iostream>
#include <string.h>
using namespace std;
int compare(char *S,char *T)
{
    if(strlen(S)==strlen(T))
    {
        int count1 = 0,count2 = 0;
        int i =0;
        while(i<strlen(S))
        {
            if(*S==*T)
            {
                count1 = count1 + 0;
                count2 = count2 + 0;
            }
            else if(*S>*T)
            {
                count1 = count1 + 1;
            }

            else if(*S<*T)
            {
                count2 = count2 + 1;
            }
            *S++;
            *T++;
        }
        if(count1==count2)
            return 0;
        else if(count1>count2)
            return 1;
        else if(count1<count2)
            return -1;
    }
    else if(strlen(S)>strlen(T))
        return 1;
    else if(strlen(S)<strlen(T))
        return -1;
}

int main()
{
    int time;
    cin>>time;
    for(int i=0; i<time; i++)
    {
        char str1[100],str2[100];
        cin>>str1;
        cin>>str2;
        char *S =str1;
        char *T =str2;
        cout<<compare(S,T)<<endl;
    }
    return 0;
}


