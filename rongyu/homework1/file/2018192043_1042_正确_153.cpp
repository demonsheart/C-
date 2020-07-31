#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int compare(char *s1, char *s2)
{
    int len1=(int)strlen(s1),len2=(int)strlen(s2);
    int small=0,large=0;
    if(len1>len2)
        return 1;
    else if(len1<len2)
        return -1;
    else
        for(int i=0;i<len1;i++)
            if(*(s1+i)<*(s2+i))
                small++;
            else if(*(s1+i)>*(s2+i))
                large++;
    if(small-large>0)
        return -1;
    else if(small-large<0)
        return 1;
    return 0;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[100],s2[100];
        cin>>s1>>s2;
        cout<<compare(s1,s2)<<endl;
    }
    return 0;
}

