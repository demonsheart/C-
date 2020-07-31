#include <iostream>
#include<cmath>
#include<algorithm>
#include <cstdio>
#include<cstring>
using namespace std;
int compare(char *S, char *T);
int main()
{
    int i,j,len,t;
    cin >> t;
    while(t--)
    {
        char *S = new char[100];
        char *T = new char[100];
        cin>>S>>T;
        cin.ignore(10,'\n');
        cout <<compare(S,T)<<endl;
    }
    return 0;
}
int compare(char *S, char *T)
{
    int i,len1,len2;
    len1 = strlen(S),len2 = strlen(T);
    if(len1>len2)
        return 1;
    else if(len1<len2)
        return -1;
    else
    {
        int k=0;
        for(i=0;i<len1;i++)
            if(*(S+i)>*(T+i))
                k++;
        if(k>len1/2)
            return 1;
        else if(k<len1/2)
            return -1;
        else
            return 0;
    }
}

