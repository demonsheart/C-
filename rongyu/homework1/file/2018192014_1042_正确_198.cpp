#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int stricmp(char *S,char *T);
int main(int argc, const char * argv[]) {
    int t;
    cin>>t;
    for(int q=0;q<t;q++)
    {
        char *a=new char[20],*b=new char[20];
        cin>>a>>b;
        cout<<stricmp(a,b)<<endl;
    }
    return 0;
}
int stricmp(char *S,char *T)
{
    int s=0,t=0;
    if(strlen(S)>strlen(T))
        return 1;
    if(strlen(S)<strlen(T))
        return -1;
    for(int i=0;i<strlen(S);i++)
    {
        if(*(S+i)>*(T+i))
            s++;
        if(*(S+i)<*(T+i))
            t++;
    }
    if(s>t)
        return 1;
    else if(s<t)
        return -1;
    else
        return 0;
}

