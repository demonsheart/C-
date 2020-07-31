#include <iostream>
#include <cstring>

using namespace std;
int strCompare(char *s1,char *s2)
{
    int len1,len2,count1,count2,i;
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1>len2)
        return 1;
    else if(len1<len2)
        return -1;
    else
    {
        for(i=0,count1=0,count2=0;i<len1;i++)
        {
            if(s1[i]>s2[i])
                count1++;
            else if(s1[i]<s2[i])
                count2++;
        }
        if(count1==count2)
            return 0;
        else if(count1>count2)
            return 1;
        else
            return -1;
    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[101],s2[101];
        cin>>s1>>s2;
        cout<<strCompare(s1,s2)<<endl;
    }
    return 0;
}

