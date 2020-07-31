#include<iostream>
#include<cstring>
#include<stdlib.h>
using namespace std;

char *strAdd(char *s1,char*s2)
{
    char *p=(char*)malloc(strlen(s1)+strlen(s2));
    memcpy(p,s1,strlen(s1));
    strcat(p,s2);
    return p;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char s1[20],s2[20];
		cin>>s1;
        cin>>s2;
        char *p=strAdd(s1,s2);

        cout<<s1<<" "<<s2<<" "<<p<<endl;
    }
	return 0;
}

