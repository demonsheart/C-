#include<iostream>
#include<string.h>
using namespace std;

int Compare(char *S, char *T);

int main()
{
    int t;
    cin>>t;
    cin.get();
    while(t--)
    {
        char str1[100]={'\0'},str2[100]={'\0'};
        cin>>str1>>str2;
        cout<<Compare(str1,str2)<<endl;
    }
    return 0;

}

int Compare(char *S, char *T)
{
    if(strlen(S)>strlen(T))
        return 1;
    else if(strlen(S)<strlen(T))
        return -1;
    else
    {
        int a1=0,a2=0;
        for(int i=0,j=0;i<strlen(S);i++,j++)
        {
            if(S[i]>T[j])
                a1++;
            else if(S[i]<T[j])
                a2++;
        }
        if(a1>a2)
            return 1;
        if(a1<a2)
            return -1;
        else
            return 0;
    }
}

