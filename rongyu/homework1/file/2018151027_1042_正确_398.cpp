#include<iostream>
#include<cstring>
using namespace std;
int comp(char* s1,char *s2)
{
    int big=0,small=0;
    int i,len1,len2;
    len1=strlen(s1);
    len2=strlen(s2);
    if(len1>len2)
        return 1;
    if(len1<len2)
        return -1;
    for(i=0;i<len1;i++)
    {
        if(*(s1+i)>*(s2+i))
        {
            big++;
        }
        if(*(s1+i)<*(s2+i))
        {
            small++;
        }
    }
    if(big>small)
        return 1;
    if(big==small)
        return 0;
    if(big<small)
        return -1;
    
}
main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[20];
        char s2[20];
        cin>>s1>>s2;
        cout<<comp(s1,s2)<<endl;
    }
}
